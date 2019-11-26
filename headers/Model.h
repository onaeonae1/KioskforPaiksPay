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
	Menu(string name, int price, int temperature, int size, int shots) {
		this->name = name;
		this->price = price;
		this->temperature = temperature;
		this->size = size;
		this->shots = shots;
		this->isSale = false;
		this->isGifti = false;
	}
};
class Menulist {
private:
	string type; //1 : coffee , 2: drinks, 3: desserts 4: frapuchinno
	vector<Menu> menus;
public:

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
	
};
