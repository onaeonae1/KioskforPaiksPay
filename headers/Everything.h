#pragma once
#include <string>
#include "Error.h"
#include "Model.h"
#include "header.h"

class cardInput;
class cashInput;
class discountControl;
class mileageControl;
class menuBuy;
class login;

class gifticonInput;
class optionControl;
class couponControl;
class giftcardControl;
class payMethod;
class bill;
class mileageUse;


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
	
	vector<string> GiftiData;
	vector<string> MileageData;
	vector<string> CouponData;
	vector<string> gifiticardData;

	vector<string> UsedGifti;
	vector<string> UsedCoupon;
	vector<string> Usedgifiticard;

	Error e;
	void setState(int num1, int num2, int num3, int num4, int num5) {
		state[0] = num1;
		state[1] = num2;
		state[2] = num3;
		state[3] = num4;
		state[4] = num5;
	}
};
