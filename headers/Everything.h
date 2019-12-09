#pragma once
#include <string>
#include "Error.h"
#include "Model.h"
#include "viewUtil.h"

class box {
private:
	pair<int, int> pos;
	int wideth;
	int height;
	string name;
public:
	void setPos(pair<int, int>pos);
	void setWideth(int wideth);
	void setHeight(int height);
	void setName(string name);
	void view();
	void mouseEvent();
	void eraseView(); //필드 기반으로 필요한 영역에 공백을 찍는다.
};
class box1 : public box { //메인

};
class box2 : public box { //팝업

};
class box3 : public box {  //장바구니

};
class box4 : public box { //에러

};
class box5 : public box { //버튼 모아놓은 것 ex) 결제

};

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
	Menu current_menu;
public:
	void setpage(int p);
	int getpage();
	void setcurrent_menu(Menu m);
	Menu getcurrent_menu();
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
