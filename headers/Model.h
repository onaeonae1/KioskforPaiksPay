#pragma once
#include<vector>
#include<string>
using namespace std;
//Shop, Menu와 관련된 헤더파일
class Menu {
private:
	string name; //이름
	int price; //가격 정수형
	int temperature; //온도 0 1 2
	int size; //사이즈 0 1 2
	int shots; //샷추가 여부 0 1 2
	int creams; //크림 여부 0 1 2
	bool isSale; // 기프티콘
	bool isGifti; //세일인지
public:
	Menu() {
		this->isSale = false;
		this->isGifti = false;
	}
	Menu(string name, string price, string temperature, string size, string shots, string creams) {
		this->name = name;
		this->price = stoi(price);
		this->temperature = stoi(temperature);
		this->size = stoi(size);
		this->shots = stoi(shots);
		this->creams = stoi(creams);
		this->isSale = false;
		this->isGifti = false;
	}
	string getName() {
		return this->name;
	}
	int getSize() {
		return this->size;
	}
	int getShots() {
		return this->shots;
	}
	int getCreams() {
		return this->creams;
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
