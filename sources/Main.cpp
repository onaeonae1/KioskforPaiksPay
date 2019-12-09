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
}
int main() {

	//Everything E;
	initEverything();
	bool flag = true;
	init(E.shop, E.user,E.GiftiData, E.MileageData, E.CouponData, E.GifticardData,
		E.UsedGifti, E.UsedCoupon, E.UsedGifticard); //�ʱ�ȭ
	/*
	Bucket b = E.user->getBucket();
	Menu* m = new Menu("�޴�1", "1", "1", "1", "1", "1");
	Cmenu *mc = new Cmenu(*m);
	b.add(*mc);
	Bucket alpha = E.user->getBucket();
	billSetting(alpha);

	//billSetting(E.user->getBucket());
	billSetting(b);
	//vector<int> v(5);
	*/
	while (flag) {
	   pair<int, int> mousepos = mouseEvent();
	   cout << mousepos.first << mousepos.second << endl;
	   mainMouse(E, mousepos);

	}
	terminator(E.UsedGifti, E.UsedCoupon, E.UsedGifticard);
	return 0;
}