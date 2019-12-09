#pragma once

#include "declare.h"

using namespace std;

class Menu {
private:
	string name; //�̸�
	int price; //���� ������
	vector<int> optionSet = { 0,0,0,0 };
	//temperature , size, shots, creams 
	bool isSale; // ����Ƽ��
	bool isGifti; //��������
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
	string name = "���ٹ�";
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
	Menu giftiMenu; //�ش��ϴ� �޴�
	string key; //�з� key
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
	string key; //����� ���� key
	int value; //��
public:
	Mileage();
	Mileage(string key, string value);
	void setKey(string key);
	void setValue(int value);
	string getKey();
	int getValue();
};
class Cmenu { //Bucket�� �޴��� ������ ���� �����Ǿ� ����.
private:
	Menu menu;//�޴�
	int cnt;//����
	int exp;//�ɼǿ� ���� �߰��ݾ�
	vector<int> optionManage{ 0,0,0,0 }; //�������� ��µ� �ɼ� ����

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
	int total = 0;//�Ѿ�

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
	//��ٱ���
	Bucket currentBucket;
	//ȸ���з� key
	string key;
	//���ϸ��� ������->ó������ �ǹ�x.
	//key�� ��ġ�ϴ� ���ϸ����� �ִٸ� ���ο��� �����
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
	string key; //�ĺ� key
	int value; //���η�
public:
	Coupon(string key, int value);
	string getKey();
	void setKey(string key);
	int getValue();
	void setValue(int value);
};
class giftiCard {
private:
	string key; //�ĺ� key
	int value; //���� ����
public:
	giftiCard(string key, int value);
	string getKey();
	void setKey(string key);
	int getValue();
	void setValue(int value);
};