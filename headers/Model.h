#pragma once

#include "declare.h"

using namespace std;

class Menu {
private:
	string name; //이름
	int price; //가격 정수형
	vector<int> optionSet = { 0,0,0,0 };
	//temperature , size, shots, creams 
	bool isSale; // 기프티콘
	bool isGifti; //세일인지
public:
	Menu();
	Menu(string name, string price, string temperature, string size, string shots, string creams, bool isGifti = false);
	string getName();
	vector<int> getoptionSet();
	void setIsGifti(bool temp);
	int getPrice();
};
class Menulist {
private:
	string type; //1 : coffee , 2: drinks, 3: desserts 4: frapuchinno
	vector<Menu> menus;
public:
	Menulist(string type);
	void setType(string type);
	void addMenu(Menu& menu);
	string getType();
	vector<Menu> getMenus();
};
class Shop {
private:
	string name = "빽다방";
	vector<Menulist> menulists;
public:
	string getName();
	vector<Menulist> getMenulists();
	void setName(string name);
	void setMenuists(vector<Menulist> menulists);
	void addMenulists(Menulist& menulist);
};
class Gifticon {
private:
	Menu giftiMenu; //해당하는 메뉴
	string key; //분류 key
public:
	Gifticon();
	Gifticon(Menu menu, string key);
	Menu getMenu();
	string getKey();
	void setMenu(Menu menu);
	void setKey(string key);
};
class Mileage {
private:
	string key; //사용자 구분 key
	int value; //값
public:
	Mileage();
	Mileage(string key, string value);
	void setKey(string key);
	void setValue(int value);
	string getKey();
	int getValue();
};
class Cmenu { //Bucket의 메뉴는 다음과 같이 수정되어 들어간다.
private:
	Menu menu;//메뉴
	int cnt;//수량
	int exp;//옵션에 따른 추가금액
	vector<int> optionManage{ 0,0,0,0 }; //영수증에 출력될 옵션 정보

public:
	Cmenu(Menu menu);
	void optionChange(int index, int value);
	void setExp();
	vector<int> getoptionManage();
	Menu getMenu();
	int getCnt();
	int getExp();
	void setCnt(int num);
	int getTotal();

};
class Bucket {
private:
	vector<Cmenu> Menulist;
	int total = 0;//총액

public:
	bool compareTo(Cmenu cm1, Cmenu cm2);
	void add(Cmenu cm1);
	void minus(Cmenu cm1);
	void remove(Cmenu cm1);
	vector<Cmenu> getMenulist();
	int gettotal();
	void settotal(int num);
};
class User {
private:
	//장바구니
	Bucket currentBucket;
	//회원분류 key
	string key;
	//마일리지 데이터->처음에는 의미x.
	//key와 일치하는 마일리지가 있다면 메인에서 연결됨
	Mileage userMileage;
	int usedMileage = 0;
public:
	User();
	Bucket getBucket();
	string getKey();
	void setKey(string key);
	Mileage getMileage();
	void setMileage(Mileage& linkMileage);
	void setUsedmileage(int num);
	int getUsedmileage();
};
class Coupon {
private:
	string key; //식별 key
	int value; //할인률
public:
	Coupon(string key, int value);
	string getKey();
	void setKey(string key);
	int getValue();
	void setValue(int value);
};
class giftiCard {
private:
	string key; //식별 key
	int value; //대응 가격
public:
	giftiCard(string key, int value);
	string getKey();
	void setKey(string key);
	int getValue();
	void setValue(int value);
};