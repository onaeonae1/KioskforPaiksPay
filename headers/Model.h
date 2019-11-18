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
	vector<Option> options;
};
class Option {
private:
	string name;
	int price;
public:
};
