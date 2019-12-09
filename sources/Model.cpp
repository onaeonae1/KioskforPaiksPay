#include "Model.h"

using namespace std;

	Menu::Menu() {
		this->isSale = false;
		this->isGifti = false;
	}
	Menu::Menu(string name, string price, string temperature, string size, string shots, string creams, bool isGifti) {
		this->name = name;
		this->price = stoi(price);

		this->optionSet[0] = stoi(temperature);
		this->optionSet[1] = stoi(size);
		this->optionSet[2] = stoi(shots);
		this->optionSet[3] = stoi(creams);

		this->isSale = false;
		this->isGifti = isGifti;
	}
	string Menu::getName() {
		return this->name;
	}
	vector<int> Menu::getoptionSet() {
		return this->optionSet;
	}
	void Menu::setIsGifti(bool temp) {
		this->isGifti = temp;
	}
	int Menu::getPrice() {
		return this->price;
	}



	Menulist::Menulist(string type) {
		setType(type);
	}
	void Menulist::setType(string type) {
		this->type = type;
	}
	void Menulist::addMenu(Menu& menu) {
		menus.push_back(menu);
	}
	string Menulist::getType() {
		return this->type;
	}
	vector<Menu> Menulist::getMenus() {
		return this->menus;
	}

	string Shop::getName() {
		return this->name;
	}
	vector<Menulist> Shop::getMenulists() {
		return this->menulists;
	}
	void Shop::setName(string name) {
		this->name = name;
	}
	void Shop::setMenuists(vector<Menulist> menulists) {
		this->menulists = menulists;
	}
	void Shop::addMenulists(Menulist& menulist) {
		menulists.push_back(menulist);
	}

	Gifticon::Gifticon() {

	}
	Gifticon::Gifticon(Menu menu, string key) {
		this->setMenu(menu);
		this->setKey(key);
	}
	Menu Gifticon::getMenu() {
		return this->giftiMenu;
	}
	string Gifticon::getKey() {
		return this->key;
	}
	void Gifticon::setMenu(Menu menu) {
		this->giftiMenu = menu;
	}
	void Gifticon::setKey(string key) {
		this->key = key;
	}


	Mileage::Mileage() { //기본 생성자
		key = "X";
		value = 0;
	}
	Mileage::Mileage(string key, string value) {
		this->key = key;
		this->value = stoi(value);
	}
	void Mileage::setKey(string key) {
		this->key = key;
	}
	void Mileage::setValue(int value) {
		this->value = value;
	}
	string Mileage::getKey() {
		return this->key;
	}
	int Mileage::getValue() {
		return this->value;
	}


	Cmenu::Cmenu(Menu menu) {
		this->menu = menu;
		this->cnt = 1;
		this->exp = 0;
		if ((menu.getoptionSet()).at(2) == 1) { //샷을 건드릴 수 있는 메뉴라면
			optionManage.at(2) = 2; //2샷을 기본으로 하도록
		}
	}
	void Cmenu::optionChange(int index, int value) {
		if (index >= 0 && index <= 3) {
			optionManage.at(index) = value;
		}
	}
	void Cmenu::setExp() { //옵션에 따른 추가금액 계산
		if (this->optionManage.at(1) == 1) { //사이즈업
			this->exp += 1000;
		}
		if (this->optionManage.at(2) == 3) { //샷추가
			this->exp += 500;
		}
	}
	vector<int> Cmenu::getoptionManage() {
		return this->optionManage;
	}
	Menu Cmenu::getMenu() {
		return this->menu;
	}
	int Cmenu::getCnt() {
		return this->cnt;
	}
	int Cmenu::getExp() {
		return this->exp;
	}
	void Cmenu::setCnt(int num) {
		this->cnt += num;
	}
	int Cmenu::getTotal() {
		return (this->exp + this->menu.getPrice());
	}



	bool Bucket::compareTo(Cmenu cm1, Cmenu cm2) { // 기존 메뉴리스트 중 하나인 menu1과 새로 받은 menu2와의 비교
		bool ret = true;
		Menu m1 = cm1.getMenu();
		Menu m2 = cm2.getMenu();
		if (m1.getName() == m2.getName()) {
			vector<int> op1 = cm1.getoptionManage();
			vector<int> op2 = cm2.getoptionManage();
			for (int i = 0; i < 4; i++) { //메뉴 비교
				ret = ret & (op1.at(i) && op2.at(i));
			}
		}
		else {
			ret = false;
		}
		return ret;
	}
	void Bucket::add(Cmenu cm1) {// 더하기 버튼을 클릭하여 수량 +1
		bool isEqual;
		int index = 0;
		for (int i = 0; i < Menulist.size(); i++) {
			isEqual = compareTo(Menulist.at(i), cm1); //i번째 Menulist에 있는 Cmenu의 menu와 추가하고 싶은 menu의 원소들을 비교
			if (isEqual) {
				index = i;
				break;
			}
		}
		if (index != 0) {//만약 두 menu가 같다면 즉, index=0이 아니면 해당 index에 있는 메뉴의 수량을 +1
			Menulist[index].setCnt(1);
		}
		else {//만약 기존에 menulist에 존재하지 않는다면 menulist에 새로 추가
			Menulist.push_back(cm1);

		}
	}
	void Bucket::minus(Cmenu cm1) {// 빼기 버튼을 클릭하여 수량 -1
		bool isEqual;
		for (int i = 0; i < Menulist.size(); i++) {

			isEqual = compareTo(Menulist.at(i), cm1);

			if (isEqual) {
				//개수가 1개면 메뉴 자체를 삭제
				if (Menulist[i].getCnt() <= 1) {
					for (int j = i; j < Menulist.size(); j++) {
						Menulist[j] = Menulist[j + 1];
					}
					//원래 있던 벡터 마지막에 남는 것 제거
					Menulist.pop_back();
					break;
				}
				//수량 -1
				Menulist[i].setCnt(-1);
				break;
			}
		}
	}
	void Bucket::remove(Cmenu cm1) { // X버튼을 통한 메뉴 삭제
		bool isEqual;
		for (int i = 0; i < Menulist.size(); i++) {

			isEqual = compareTo(Menulist[i], cm1);

			if (isEqual) {
				for (int j = i; j < Menulist.size(); j++) {
					Menulist[j] = Menulist[j + 1];
				}

				Menulist.pop_back();
				break;
			}
		}
	}
	vector<Cmenu> Bucket::getMenulist() {
		return this->Menulist;
	}
	int Bucket::gettotal() {//총 금액
		int sum = 0;
		for (int i = 0; i < Menulist.size(); i++) {
			sum += Menulist[i].getTotal();
		}
		return sum;
	}
	void Bucket::settotal(int num) {
		this->total = num;
	}



	User::User() {
		key = "X";
		Mileage* temp = new Mileage();
		this->setMileage(*temp);
		delete(temp);
	}
	Bucket User::getBucket() {
		return this->currentBucket;
	}
	string User::getKey() {
		return this->key;
	}
	void User::setKey(string key) {
		this->key = key;
	}
	Mileage User::getMileage() {
		return this->userMileage;
	}
	void User::setMileage(Mileage& linkMileage) {
		this->userMileage = linkMileage;
	}
	void User::setUsedmileage(int num) {
		usedMileage += num;
	}
	int User::getUsedmileage() {
		return this->usedMileage;
	}


	Coupon::Coupon(string key, int value) {
		this->key = key;
		this->value = value;
	}
	string Coupon::getKey() {
		return this->key;
	}
	void Coupon::setKey(string key) {
		this->key = key;
	}
	int Coupon::getValue() {
		return this->value;
	}
	void Coupon::setValue(int value) {
		this->value = value;
	}


	giftiCard::giftiCard(string key, int value) {
		this->key = key;
		this->value = value;
	}
	string giftiCard::getKey() {
		return this->key;
	}
	void giftiCard::setKey(string key) {
		this->key = key;
	}
	int giftiCard::getValue() {
		return this->value;
	}
	void giftiCard::setValue(int value) {
		this->value = value;
	}
