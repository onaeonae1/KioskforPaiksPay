#include "Everything.h"

using namespace std;

extern Everything E;

void box::setPos(pair<int, int>pos) {
	this->pos = pos;
}
void box::setWideth(int wideth) {
	this->wideth = wideth;
}
void box::setHeight(int height) {
	this->height = height;
}
void box::setName(string name) {
	box::name = name;
}
void box::view() {

}
void box::mouseEvent() {

}
void box::eraseView() {
	//в萄 晦奩戲煎 в蹂и 艙羲縑 奢寥擊 鎰朝棻.
}
void cardInput::view() {
	clear_box1();
	int x = 13, i = 5;
	gotoxy(x, i); printf("####                                          ##    "); i++;
	gotoxy(x, i); printf(" ##                                           ##    "); i++;
	gotoxy(x, i); printf(" ##     #####     #####    ####    ######    #####  "); i++;
	gotoxy(x, i); printf(" ##     ##  ##   ##       ##  ##    ##  ##    ##    "); i++;
	gotoxy(x, i); printf(" ##     ##  ##    #####   ######    ##        ##    "); i++;
	gotoxy(x, i); printf(" ##     ##  ##        ##  ##        ##        ## ## "); i++;
	gotoxy(x, i); printf("####    ##  ##   ######    #####   ####        ###  "); i++;

	x = 20, i = 13;
	gotoxy(x, i); printf("   ####                        ###  "); i++;
	gotoxy(x, i); printf("  ##  ##                        ##  "); i++;
	gotoxy(x, i); printf(" ##                ######       ##  "); i++;
	gotoxy(x, i); printf(" ##        ####     ##  ##   #####  "); i++;
	gotoxy(x, i); printf(" ##       #    #    ##      ##  ##  "); i++;
	gotoxy(x, i); printf("  ##  ##  #   ##    ##      ##  ##  "); i++;
	gotoxy(x, i); printf("   ####    ### #   ####      ###### "); i++;
}
void cashInput::view() {
	clear_box1();
	int x = 13, i = 5;
	gotoxy(x, i); printf("####                                          ##    "); i++;
	gotoxy(x, i); printf(" ##                                           ##    "); i++;
	gotoxy(x, i); printf(" ##     #####     #####    ####    ######    #####  "); i++;
	gotoxy(x, i); printf(" ##     ##  ##   ##       ##  ##    ##  ##    ##    "); i++;
	gotoxy(x, i); printf(" ##     ##  ##    #####   ######    ##        ##    "); i++;
	gotoxy(x, i); printf(" ##     ##  ##        ##  ##        ##        ## ## "); i++;
	gotoxy(x, i); printf("####    ##  ##   ######    #####   ####        ###  "); i++;

	x = 20, i = 13;
	gotoxy(x, i); printf("   ####                     ###     "); i++;
	gotoxy(x, i); printf("  ##  ##                     ##     "); i++;
	gotoxy(x, i); printf(" ##                 #####    ##     "); i++;
	gotoxy(x, i); printf(" ##        ####    ##        #####  "); i++;
	gotoxy(x, i); printf(" ##       #    #    #####    ##  ## "); i++;
	gotoxy(x, i); printf("  ##  ##  #   ##        ##   ##  ## "); i++;
	gotoxy(x, i); printf("   ####    ### #   ######   ###  ## "); i++;
}
void discountControl::view() { // 識 陛問 ル衛 蹂蜂
	clear_box1();
	int x = 4, i = 5;
	gotoxy(x, i); printf("#####      ##                                                  ##    "); i++;
	gotoxy(x, i); printf(" ## ##                                                         ##    "); i++;
	gotoxy(x, i); printf(" ##  ##   ###     #####    ####     ####    ##  ##   #####    #####  "); i++;
	gotoxy(x, i); printf(" ##  ##    ##    ##       ##  ##   ##  ##   ##  ##   ##  ##    ##    "); i++;
	gotoxy(x, i); printf(" ##  ##    ##     #####   ##       ##  ##   ##  ##   ##  ##    ##    "); i++;
	gotoxy(x, i); printf(" ## ##     ##         ##  ##  ##   ##  ##   ##  ##   ##  ##    ## ## "); i++;
	gotoxy(x, i); printf("#####     ####   ######    ####     ####     ######  ##  ##     ###  "); i++;

	x = 13, i = 22;
	gotoxy(x, i); printf("忙式式式式式式式忖            忙式式式式式式式忖"); i++;
	gotoxy(x, i); printf("弛              弛            弛              弛"); i++;
	gotoxy(x, i); printf("弛              弛            弛              弛"); i++;
	gotoxy(x, i); printf("弛     瓔ア     弛            弛    鼻ヶ掏    弛"); i++;
	gotoxy(x, i); printf("弛              弛            弛              弛"); i++;
	gotoxy(x, i); printf("弛              弛            弛              弛"); i++;
	gotoxy(x, i); printf("弛              弛            弛              弛"); i++;
	gotoxy(x, i); printf("戌式式式式式式式戎            戌式式式式式式式戎"); i++;

	x = 13, i = 32;
	gotoxy(x, i); printf("忙式式式式式式式忖            忙式式式式式式式忖"); i++;
	gotoxy(x, i); printf("弛              弛            弛              弛"); i++;
	gotoxy(x, i); printf("弛  檜瞪戲煎    弛            弛   唸薯熱欽   弛"); i++;
	gotoxy(x, i); printf("弛              弛            弛              弛"); i++;
	gotoxy(x, i); printf("弛              弛            弛              弛"); i++;
	gotoxy(x, i); printf("弛  給嬴陛晦    弛            弛     摹鷗     弛"); i++;
	gotoxy(x, i); printf("弛              弛            弛              弛"); i++;
	gotoxy(x, i); printf("戌式式式式式式式戎            戌式式式式式式式戎"); i++;
}
void mileageControl::view() { // 識 陛問 ル衛 蹂蜂
	clear_box1();
	int x = 9, i = 5;
	gotoxy(x, i); printf("##   ##    ##     ###"); i++;
	gotoxy(x, i); printf("### ###            ##"); i++;
	gotoxy(x, i); printf("#######   ###      ##     ####              ### ##   ####"); i++;
	gotoxy(x, i); printf("#######    ##      ##    ##  ##    ####    ##  ##   ##  ##"); i++;
	gotoxy(x, i); printf("## # ##    ##      ##    ######   #    #   ##  ##   ######"); i++;
	gotoxy(x, i); printf("##   ##    ##      ##    ##       #   ##    #####   ##    "); i++;
	gotoxy(x, i); printf("##   ##   ####    ####    #####    ### #       ##    #####"); i++;
	gotoxy(x + 44, i); printf("#####"); i++;

	x = 13, i = 22;
	gotoxy(x, i); printf("忙式式式式式式式忖             忙式式式式式式式忖"); i++;
	gotoxy(x, i); printf("弛              弛             弛              弛"); i++;
	gotoxy(x, i); printf("弛   葆橾葬雖   弛             弛   葆橾葬雖   弛"); i++;
	gotoxy(x, i); printf("弛              弛             弛              弛"); i++;
	gotoxy(x, i); printf("弛              弛             弛              弛"); i++;
	gotoxy(x, i); printf("弛     餌辨     弛             弛     瞳董     弛"); i++;
	gotoxy(x, i); printf("弛              弛             弛              弛"); i++;
	gotoxy(x, i); printf("戌式式式式式式式戎             戌式式式式式式式戎"); i++;
}
void menuBuy::setpage(int p) {
	this->page = p;
}
int menuBuy::getpage() {
	return this->page;
}
void menuBuy::setcurrent_menu(Menu m) {
	this->current_menu = &m;
}
Menu menuBuy::getcurrent_menu() {
	return *this->current_menu;
}
void menuBuy::view(/*瞪羹 贗楚蝶 DB*/) {
	clear_box1();
	gotoxy(22, 3); printf("< P A I K S     C O F F E E>");

	int x = 2, i = 5;
	gotoxy(x, i); printf("忙式式式式式式成式式式式式式成式式式式式式成式式式式式式成式式式式式式忖"); i++;
	gotoxy(x, i); printf("弛            弛            弛            弛            弛            弛"); i++;
	gotoxy(x, i); printf("弛            弛            弛            弛            弛            弛"); i++;
	gotoxy(x, i); printf("弛            弛            弛            弛            弛            弛"); i++;
	gotoxy(x, i); printf("戍式式式式式式扛-成式式式式-扛式-式成式式-扛式式式式-成-扛式式式式式式扣"); i++;

	x = 2;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("戍式式式式式式式-托式式式式式式式式托式式式式式式式式托式式式式式式式-扣"); i++;

	x = 2;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("戍式式式式式式式-托式式式式式式式式托式式式式式式式式托式式式式式式式-扣"); i++;

	x = 2;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("戍式式式式式式式-托式式式式式式式式托式式式式式式式式托式式式式式式式-扣"); i++;

	x = 2;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("弛               弛                弛                弛               弛"); i++;
	gotoxy(x, i); printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎"); i++;

	//詭景葬蝶お 鎰朝 婁薑
	for (int j = 0; j < 5; j++) {
		string a;
		int llength = 0;
		int starts[5] = { 4, 18, 32, 46, 60 };
		int qq = 0;
		//檗橫螃朝 婁薑
		//a = (Shop).getMenulists[j].(getName()); (婪��)檜楛 耀掘菟擎 嬴霜 虜菟橫雖雖 彊擠
		llength = a.length();

		gotoxy((14 - llength) / 2 + starts[qq], 7);
		printf("%s", a);
		qq++;
	}

	//詭景 鎰朝 婁薑
	for (int j = 0; j < 16; j++) {
		int portion; //split脹 窖橫葬曖 熱
		string input;
		pair<int, int> start;
		pair<int, int> end;
		vector<string> ss;
		int k = 0, l = 0;
		int x1[4] = { 4, 21, 38, 55 };
		int x2[4] = { 18, 35, 52, 69 };
		int y1[4] = { 10, 17, 24, 31 };
		int y2[4] = { 15, 22, 29, 36 };

		//詭景 檗橫螃晦
		//input = (Shop).getMenulists[page].getMenus().at(j).getName();
		//望檜縑 評塭 split
		ss = split("", '_');
		//split 罹睡縑 評塭
		portion = ss.size();
		//謝ル pair 虜菟晦
		start = make_pair(x1[k], y1[(int)(l / 4)]);
		end = make_pair(x2[k], y2[(int)(l / 4)]);
		k++; if (k == 4) k = 0;
		l++;
		switch (portion) {
		case 1:
			menuview_1portion(start, end, ss.front());
			break;
		case 2:
			menuview_2portion(start, end, ss.front(), ss.back());
			break;
		case 3:

			break;
		default:
			//????
			break;
		}
	}

}
void login::view() {
	clear_box1();
	int x = 17, i = 5;
	gotoxy(x, i); printf("####                                 ##"); i++;
	gotoxy(x, i); printf(" ##                                  ##"); i++;
	gotoxy(x, i); printf(" ##     #####    ######   ##  ##    #####"); i++;
	gotoxy(x, i); printf(" ##     ##  ##    ##  ##  ##  ##     ##"); i++;
	gotoxy(x, i); printf(" ##     ##  ##    ##  ##  ##  ##     ##"); i++;
	gotoxy(x, i); printf(" ##     ##  ##    #####   ##  ##     ## ##"); i++;
	gotoxy(x, i); printf("####    ##  ##    ##       ######     ###"); i++;
	gotoxy(x + 17, i); printf("####");

	x = 29, i = 14;
	gotoxy(x, i); printf("####    #####   "); i++;
	gotoxy(x, i); printf(" ##      ## ##  "); i++;
	gotoxy(x, i); printf(" ##      ##  ## "); i++;
	gotoxy(x, i); printf(" ##      ##  ## "); i++;
	gotoxy(x, i); printf(" ##      ##  ## "); i++;
	gotoxy(x, i); printf(" ##      ## ##  "); i++;
	gotoxy(x, i); printf("####    #####   ");

	x = 17; i += 5;
	gotoxy(x, i); printf("忙式式式式式式式式式式式式式式式式式式式忖"); i++;
	gotoxy(x, i); printf("弛                                      弛"); i++;
	gotoxy(x, i); printf("戌式式式式式式式式式式式式式式式式式式式戎");
}
void gifticonInput::view() { // x衛濛 76
	clear_box2();
	int x = 93, i = 4;
	gotoxy(x, i); printf("晦 Щ じ 夔 擊"); i += 2;
	gotoxy(x, i); printf("殮 溘 ж 撮 蹂"); i++;

	x = 86, i = 12;
	gotoxy(x, i); printf("忙式式式式式式式式式式式式忖"); i++;
	gotoxy(x, i); printf("弛                        弛"); i++;
	gotoxy(x, i); printf("戌式式式式式式式式式式式式戎");
}
void optionControl::view() { // x衛濛 76
	clear_box2();
	int x = 95, i = 2;
	gotoxy(x, i); printf("<  褫  暮  >"); i += 3;

	x = 90;
	gotoxy(x, i); printf("忙式式式忖  忙式式式忖  忙式式式忖"); i++;
	gotoxy(x, i); printf("弛      弛  弛      弛  弛      弛"); i++;
	gotoxy(x, i); printf("戌式式式戎  戌式式式戎  戌式式式戎"); i += 2;

	gotoxy(x, i); printf("忙式式式忖  忙式式式忖  忙式式式忖"); i++;
	gotoxy(x, i); printf("弛      弛  弛      弛  弛      弛"); i++;
	gotoxy(x, i); printf("戌式式式戎  戌式式式戎  戌式式式戎"); i += 2;

	gotoxy(x, i); printf("忙式式式忖  忙式式式忖  忙式式式忖"); i++;
	gotoxy(x, i); printf("弛      弛  弛      弛  弛      弛"); i++;
	gotoxy(x, i); printf("戌式式式戎  戌式式式戎  戌式式式戎"); i += 2;

	gotoxy(x, i); printf("忙式式式忖  忙式式式忖  忙式式式忖"); i++;
	gotoxy(x, i); printf("弛      弛  弛      弛  弛      弛"); i++;
	gotoxy(x, i); printf("戌式式式戎  戌式式式戎  戌式式式戎");
}
void couponControl::view() { // x衛濛 76
	clear_box2();
	int x = 86, i = 5;
	gotoxy(x, i); printf("瓔 ア 擊   殮 溘 ж 撮 蹂 !!");

	i = 12;
	gotoxy(x, i); printf("忙式式式式式式式式式式式式忖"); i++;
	gotoxy(x, i); printf("弛                        弛"); i++;
	gotoxy(x, i); printf("戌式式式式式式式式式式式式戎");
}
void giftcardControl::view() { // x衛濛 76
	clear_box2();
	int x = 85, i = 5;
	gotoxy(x, i); printf("鼻 ヶ 掏 擊  殮 溘 ж 撮 蹂 !!");

	x = 86; i = 12;
	gotoxy(x, i); printf("忙式式式式式式式式式式式式忖"); i++;
	gotoxy(x, i); printf("弛                        弛"); i++;
	gotoxy(x, i); printf("戌式式式式式式式式式式式式戎");
}
void payMethod::view() { // x衛濛 76
	clear_box2();
	int x = 93, i = 4;
	gotoxy(x, i); printf("唸 薯 熱 欽 擊"); i += 2;
	x = 90;
	gotoxy(x, i); printf("摹 鷗 п 輿 撮 蹂 !!");

	x = 86, i = 11;
	gotoxy(x, i); printf("忙式式式式忖    忙式式式式忖"); i++;
	gotoxy(x, i); printf("弛        弛    弛        弛"); i++;
	gotoxy(x, i); printf("弛  蘋萄  弛    弛  ⑷旎  弛"); i++;
	gotoxy(x, i); printf("弛        弛    弛        弛"); i++;
	gotoxy(x, i); printf("戌式式式式戎    戌式式式式戎");
}
void bill::view() {
	clear_box2();
	int x = 93, i = 4;
	gotoxy(x, i); printf("艙  熱  隸  擊"); i += 2;
	x = 87;
	gotoxy(x, i); printf("轎 溘 ж 衛 啊 蝗 棲 梱 ??");

	x = 86, i = 11;
	gotoxy(x, i); printf("忙式式式式忖    忙式式式式忖"); i++;
	gotoxy(x, i); printf("弛        弛    弛        弛"); i++;
	gotoxy(x, i); printf("弛  轎溘  弛    弛 嘐轎溘 弛"); i++;
	gotoxy(x, i); printf("弛        弛    弛        弛"); i++;
	gotoxy(x, i); printf("戌式式式式戎    戌式式式式戎");
}
void mileageUse::view() { // 衛濛 謝ル 76
	clear_box2();
	int x = 86, i = 2;
	gotoxy(x, i); printf("葆 橾 葬 雖   餌 辨 旎 擋 擊"); i += 2; x = 91;
	gotoxy(x, i); printf("殮 溘 п 輿 撮 蹂"); i += 2;

	x = 84;
	gotoxy(x, i); printf("忙式式式式式式式式式式式式式式忖"); i++;
	gotoxy(x, i); printf("弛唸薯 旎擋                   弛"); i++;
	gotoxy(x, i); printf("戌式式式式式式式式式式式式式式戎"); i++;

	gotoxy(x, i); printf("忙式式式式式式式式式式式式式式忖"); i++;
	gotoxy(x, i); printf("弛葆橾葬雖 旎擋               弛"); i++;
	gotoxy(x, i); printf("戌式式式式式式式式式式式式式式戎"); i += 2;

	x = 83;
	gotoxy(x, i); printf("忙式式式忖  忙式式式忖  忙式式式忖"); i++;
	gotoxy(x, i); printf("弛  1000弛  弛  3000弛  弛  5000弛  "); i++;
	gotoxy(x, i); printf("戌式式式戎  戌式式式戎  戌式式式戎"); i += 2;

	gotoxy(x, i); printf("忙式式式忖  忙式式式忖  忙式式式忖"); i++;
	gotoxy(x, i); printf("弛 10000弛  弛   ALL弛  弛 Clear弛  "); i++;
	gotoxy(x, i); printf("戌式式式戎  戌式式式戎  戌式式式戎");
}
void bucketControl::view() {//x : 76 ~ 123, y : 22 ~ 31
	int i = 0, y = 22;
	vector<Cmenu> temp = E.user->getBucket().getMenulist();
	for (i = 0; i < temp.size(); i++) {
		int cnt = temp.at(i).getCnt();
		int price = temp.at(i).getTotal();
		gotoxy(76, y);
		cout.width(30);
		cout << left << temp.at(i).getMenu().getName() << endl;
		gotoxy(106, y);
		printf("++ %2d -- %5d xx", cnt, cnt * price);
	}
}
void purchaseBox::view() {//x : 76 ~ 123, y : 36 ~ 42
	gotoxy(81, 37); printf("忙式式式式式成式式式式式成式式式式式忖");
	gotoxy(81, 38); printf("弛  ��  錳  弛 綠 �� 錳 弛  晦  Щ  弛");
	gotoxy(81, 39); printf("弛          弛          弛          弛");
	gotoxy(81, 40); printf("弛  唸  薯  弛  唸  薯  弛  じ  夔  弛");
	gotoxy(81, 41); printf("戌式式式式式扛式式式式式扛式式式式式戎");
}
