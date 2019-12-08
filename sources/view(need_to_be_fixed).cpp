#pragma once
#include<vector>
#include<string>
using namespace std;
//Shop, Menu, Everything과 관련된 헤더파일
class Everything {
public:
	vector<Mileage> MileageData; //전체 마일리지 데이터
	vector<Gifticon> GiftiData; //사용 가능한 기프티콘 데이터
	vector<Gifticon> UsedGifti;
	Shop shop;
	User user;
	Error e;

	cardInput ci;
	cashInput ci2;
	discountControl dc;
	mileageControl mc;
	menuBuy mb;
	login lg;

	gifticonInput gi;
	optionControl oc;
	couponControl cc;
	giftcardControl gcc;
	payMethod pm;
	bill bl;
	mileageUse mu;
	int state[5];

	int *setState(int num1, int num2, int num3, int num4, int num5) {
		state[0] = num1;
		state[1] = num2;
		state[2] = num3;
		state[3] = num4;
		state[4] = num5;
		return state;
	}
};
class Menu {
private:
	string name; //이름
	int price; //가격 정수형
	vector<int> optionSet = { 0,0,0,0 };
	//temperature , size, shots, creams 
	bool isSale; // 기프티콘
	bool isGifti; //세일인지
public:
	Menu() {
		this->isSale = false;
		this->isGifti = false;
	}
	Menu(string name, string price, string temperature, string size, string shots, string creams, bool isGifti = false) {
		this->name = name;
		this->price = stoi(price);
		
		this->optionSet[0] = stoi(temperature);
		this->optionSet[1] = stoi(size);
		this->optionSet[2] = stoi(shots);
		this->optionSet[3] = stoi(creams);
		
		this->isSale = false;
		this->isGifti = isGifti;
	}
	string getName() {
		return this->name;
	}
	vector<int> getoptionSet() {
		return this->optionSet;
	}
	int getPrice() {
		return this->price;
	}
};
class Menulist {
private:
	string type; //1 : coffee , 2: drinks, 3: desserts 4: frapuchinno
	vector<Menu> menus;
public:
	Menulist(string type) {
		setType(type);
	}
	void setType(string type) {
		this->type = type;
	}
	void addMenu(Menu& menu) {
		menus.push_back(menu);
	}
	string getType() {
		return this->type;
	}
	vector<Menu> getMenus() {
		return this->menus;
	}
};
class Shop {
private:
	string name = "빽다방";
	vector<Menulist> menulists;
public:
	string getName() {
		return this->name;
	}
	vector<Menulist> getMenulists() {
		return this->menulists;
	}
	void setName(string name) {
		this->name = name;
	}
	void setMenuists(vector<Menulist> menulists) {
		this->menulists = menulists;
	}
	void addMenulists(Menulist& menulist) {
		menulists.push_back(menulist);
	}
};
