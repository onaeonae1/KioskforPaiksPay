#pragma once
#include<vector>
#include<string>
using namespace std;
//Shop, Menu와 관련된 헤더파일
class Shop {
private:
	string name;
	
};
class Menulist {
	string type;
	vector<Menu> menus;
};
class Menu {
private:
	string name;
	int price;
	bool isSale;
	bool isGifti;
	int temperature;
	int size;
	int shots;
	int creams;
public:

	string getName() {
		return this->name;
	}
	int getPrice() {
		return this->price;
	}
	bool getIsSale() {
		return this->isSale;
	}
	bool getIsGifti() {
		return this->isGifti;
	}
	int getTemp() {
		return this->temperature;
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
};
