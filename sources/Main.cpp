#include "declare.h"

using namespace std;

Everything E;

void initEverything() {
	E.user = new User();
	E.shop = new Shop();
	E.ci = new cardInput();
	E.ci2 = new cashInput();
	E.dc = new discountControl();
	E.mc = new mileageControl();
	E.mb = new menuBuy();
	E.lg = new login();
	E.e = new Error();

	E.gi = new gifticonInput();
	E.oc = new optionControl();
	E.cc = new couponControl();
	E.gcc = new giftcardControl();
	E.pm = new payMethod();
	E.bl = new bill();
	E.mu = new mileageUse();

	E.bc = new bucketControl();
	E.pb = new purchaseBox();
}
int main() {

	//Everything E;
	initEverything();
	bool flag = true;
	init(E.shop, E.user,E.GiftiData, E.MileageData, E.CouponData, E.GifticardData,
		E.UsedGifti, E.UsedCoupon, E.UsedGifticard); //초기화
	startView();
	E.setState(1, 0, 0, 0, 0);
	view();
	E.mb->view();
	while (flag) {
	   pair<int, int> mousepos = mouseEvent();
	   //cout << mousepos.first <<" "<< mousepos.second << endl;
	   mainMouse(E, mousepos);

	}
	terminator(E.UsedGifti, E.UsedCoupon, E.UsedGifticard);
	return 0;
}
