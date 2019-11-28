#pragma once
#include"Model.h"
class Gifticon {
private:
	Menu giftiMenu; //해당하는 메뉴
	string key; //분류 key
public:
	Gifticon() {

	}
	Gifticon(Menu menu, string key) {
		this->setMenu(menu);
		this->setKey(key);
	}
	Menu getMenu() {
		return this->giftiMenu;
	}
	string getKey() {
		return this->key;
	}
	void setMenu(Menu menu) {
		this->giftiMenu = menu;
	}
	void setKey(string key) {
		this->key = key;
	}
};
