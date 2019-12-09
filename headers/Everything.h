#pragma once
#include <string>
#include "Error.h"
#include "Model.h"
//#include "header.h"

class cardInput {
public:
	void view();
};
class cashInput {
public:
	void view();
};
class discountControl {
public:
	void view();
};
class mileageControl {
public:
	void view();
};
class menuBuy {
private:
	int page; //몇 번째 카테고리를 보고 있는지를 저장
	int current_menu;
public:
	void setpage(int p);
	int getpage();
	void setcurrent_menu(Menu m);
	int getcurrent_menu();
	void view(/*전체 클래스 DB*/);
};
class login {
public:
	void view();
};

class gifticonInput {
public:
	void view();
};
class optionControl {
public:
	void view();
};
class couponControl {
public:
	void view();
};
class giftcardControl {
public:
	void view();
};
class payMethod {
public:
	void view();
};
class bill {
public:
	void view();
};
class mileageUse {
public:
	void view();
};


class Everything {
public:
	Shop shop;
	User user;

	cardInput* ci;
	cashInput* ci2;
	discountControl* dc;
	mileageControl* mc;
	menuBuy* mb;
	login* lg;

	gifticonInput* gi;
	optionControl* oc;
	couponControl* cc;
	giftcardControl* gcc;
	payMethod* pm;
	bill* bl;
	mileageUse* mu;
	int state[5];

	vector<Gifticon> GiftiData;
	vector<Mileage> MileageData;
	vector<Coupon> CouponData;
	vector<giftiCard> GifticardData;

	vector<string> UsedGifti;
	vector<string> UsedCoupon;
	vector<string> UsedGifticard;

	Error e;
	void setState(int num1, int num2, int num3, int num4, int num5) {
		state[0] = num1;
		state[1] = num2;
		state[2] = num3;
		state[3] = num4;
		state[4] = num5;
	}
};
