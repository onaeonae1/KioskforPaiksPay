/*

이름을 viewClass.cpp로 하는 게 어떨까!

*/


#pragma once
#include <string>
#include "Error.h"
#include "viewUtil.h"
#include "Everything.h"

extern Everything E;
class box {
private:
	pair<int, int> pos;
	int wideth;
	int height;
	string name;
public:
	void setPos(pair<int, int>pos) {
		this->pos = pos;
	}
	void setWideth(int wideth) {
		this->wideth = wideth;
	}
	void setHeight(int height) {
		this->height = height;
	}
	void setName(string name) {
		this->name = name;
	}
	void view() {

	}
	void mouseEvent() {

	}
	void eraseView() {
		//필드 기반으로 필요한 영역에 공백을 찍는다.
	}
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
	void discountControl::view() { // 총 가격 표시 요망
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
		gotoxy(x, i); printf("┌───────┐            ┌───────┐"); i++;
		gotoxy(x, i); printf("│              │            │              │"); i++;
		gotoxy(x, i); printf("│              │            │              │"); i++;
		gotoxy(x, i); printf("│     쿠폰     │            │    상품권    │"); i++;
		gotoxy(x, i); printf("│              │            │              │"); i++;
		gotoxy(x, i); printf("│              │            │              │"); i++;
		gotoxy(x, i); printf("│              │            │              │"); i++;
		gotoxy(x, i); printf("└───────┘            └───────┘"); i++;

		x = 13, i = 32;
		gotoxy(x, i); printf("┌───────┐            ┌───────┐"); i++;
		gotoxy(x, i); printf("│              │            │              │"); i++;
		gotoxy(x, i); printf("│  이전으로    │            │   결제수단   │"); i++;
		gotoxy(x, i); printf("│              │            │              │"); i++;
		gotoxy(x, i); printf("│              │            │              │"); i++;
		gotoxy(x, i); printf("│  돌아가기    │            │     선택     │"); i++;
		gotoxy(x, i); printf("│              │            │              │"); i++;
		gotoxy(x, i); printf("└───────┘            └───────┘"); i++;
	}
	void mileageControl::view() { // 총 가격 표시 요망
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
		gotoxy(x, i); printf("┌───────┐             ┌───────┐"); i++;
		gotoxy(x, i); printf("│              │             │              │"); i++;
		gotoxy(x, i); printf("│   마일리지   │             │   마일리지   │"); i++;
		gotoxy(x, i); printf("│              │             │              │"); i++;
		gotoxy(x, i); printf("│              │             │              │"); i++;
		gotoxy(x, i); printf("│     사용     │             │     적립     │"); i++;
		gotoxy(x, i); printf("│              │             │              │"); i++;
		gotoxy(x, i); printf("└───────┘             └───────┘"); i++;
	}
	void menuBuy::setpage(int p) {
		this->page = p;
	}
	int menuBuy::getpage() {
		return this->page;
	}
	void menuBuy::setcurrent_menu(int m) {
		this->current_menu = m;
	}
	int menuBuy::getcurrent_menu() {
		return this->current_menu;
	}
	void menuBuy::view(/*전체 클래스 DB*/) {
		clear_box1();
		gotoxy(22, 3); printf("< P A I K S     C O F F E E>");

		int x = 2, i = 5;
		gotoxy(x, i); printf("┌──────┬──────┬──────┬──────┬──────┐"); i++;
		gotoxy(x, i); printf("│            │            │            │            │            │"); i++;
		gotoxy(x, i); printf("│            │            │            │            │            │"); i++;
		gotoxy(x, i); printf("│            │            │            │            │            │"); i++;
		gotoxy(x, i); printf("├──────┴-┬────-┴─-─┬──-┴────-┬-┴──────┤"); i++;

		x = 2;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("├───────-┼────────┼────────┼───────-┤"); i++;

		x = 2;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("├───────-┼────────┼────────┼───────-┤"); i++;

		x = 2;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("├───────-┼────────┼────────┼───────-┤"); i++;

		x = 2;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("│               │                │                │               │"); i++;
		gotoxy(x, i); printf("└──────────────────────────────────┘"); i++;

		//메뉴리스트 찍는 과정
		for (int j = 0; j < 5; j++) {
			string a;
			int llength = 0;
			int starts[5] = { 4, 18, 32, 46, 60 };
			int qq = 0;
			//읽어오는 과정
			//a = (Shop).getMenulists[j].(getName()); (괄호)이런 친구들은 아직 만들어지지 않음
			llength = a.length;

			gotoxy((14 - llength) / 2 + starts[qq], 7);
			printf("%s", a);
			qq++;
		}

		//메뉴 찍는 과정
		for (int j = 0; j < 16; j++) {
			int portion; //split된 덩어리의 수
			string input;
			pair<int, int> start;
			pair<int, int> end;
			vector<string> ss;
			int k = 0, l = 0;
			int x1[4] = { 4, 21, 38, 55 };
			int x2[4] = { 18, 35, 52, 69 };
			int y1[4] = { 10, 17, 24, 31 };
			int y2[4] = { 15, 22, 29, 36 };

			//메뉴 읽어오기
			//input = (Shop).getMenulists[page].getMenus().at(j).getName();
			//길이에 따라 split
			ss = split("", '_');
			//split 여부에 따라
			portion = ss.size();
			//좌표 pair 만들기
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
		gotoxy(x, i); printf("┌───────────────────┐"); i++;
		gotoxy(x, i); printf("│                                      │"); i++;
		gotoxy(x, i); printf("└───────────────────┘");
	}
	void gifticonInput::view() { // x시작 76
		clear_box2();
		int x = 93, i = 4;
		gotoxy(x, i); printf("기 프 티 콘 을"); i += 2;
		gotoxy(x, i); printf("입 력 하 세 요"); i++;

		x = 86, i = 12;
		gotoxy(x, i); printf("┌────────────┐"); i++;
		gotoxy(x, i); printf("│                        │"); i++;
		gotoxy(x, i); printf("└────────────┘");
	}
	void optionControl::view() { // x시작 76
		clear_box2();
		int x = 95, i = 2;
		gotoxy(x, i); printf("<  옵  션  >"); i += 3;

		x = 90;
		gotoxy(x, i); printf("┌───┐  ┌───┐  ┌───┐"); i++;
		gotoxy(x, i); printf("│      │  │      │  │      │"); i++;
		gotoxy(x, i); printf("└───┘  └───┘  └───┘"); i += 2;

		gotoxy(x, i); printf("┌───┐  ┌───┐  ┌───┐"); i++;
		gotoxy(x, i); printf("│      │  │      │  │      │"); i++;
		gotoxy(x, i); printf("└───┘  └───┘  └───┘"); i += 2;

		gotoxy(x, i); printf("┌───┐  ┌───┐  ┌───┐"); i++;
		gotoxy(x, i); printf("│      │  │      │  │      │"); i++;
		gotoxy(x, i); printf("└───┘  └───┘  └───┘"); i += 2;

		gotoxy(x, i); printf("┌───┐  ┌───┐  ┌───┐"); i++;
		gotoxy(x, i); printf("│      │  │      │  │      │"); i++;
		gotoxy(x, i); printf("└───┘  └───┘  └───┘");
	}
	void couponControl::view() { // x시작 76
		clear_box2();
		int x = 86, i = 5;
		gotoxy(x, i); printf("쿠 폰 을   입 력 하 세 요 !!");

		i = 12;
		gotoxy(x, i); printf("┌────────────┐"); i++;
		gotoxy(x, i); printf("│                        │"); i++;
		gotoxy(x, i); printf("└────────────┘");
	}
	void giftcardControl::view() { // x시작 76
		clear_box2();
		int x = 85, i = 5;
		gotoxy(x, i); printf("상 품 권 을  입 력 하 세 요 !!");

		x = 86; i = 12;
		gotoxy(x, i); printf("┌────────────┐"); i++;
		gotoxy(x, i); printf("│                        │"); i++;
		gotoxy(x, i); printf("└────────────┘");
	}
	void payMethod::view() { // x시작 76
		clear_box2();
		int x = 93, i = 4;
		gotoxy(x, i); printf("결 제 수 단 을"); i += 2;
		x = 90;
		gotoxy(x, i); printf("선 택 해 주 세 요 !!");

		x = 86, i = 11;
		gotoxy(x, i); printf("┌────┐    ┌────┐"); i++;
		gotoxy(x, i); printf("│        │    │        │"); i++;
		gotoxy(x, i); printf("│  카드  │    │  현금  │"); i++;
		gotoxy(x, i); printf("│        │    │        │"); i++;
		gotoxy(x, i); printf("└────┘    └────┘");
	}
	void bill::view() {
		clear_box2();
		int x = 93, i = 4;
		gotoxy(x, i); printf("영  수  증  을"); i += 2;
		x = 87;
		gotoxy(x, i); printf("출 력 하 시 겠 습 니 까 ??");

		x = 86, i = 11;
		gotoxy(x, i); printf("┌────┐    ┌────┐"); i++;
		gotoxy(x, i); printf("│        │    │        │"); i++;
		gotoxy(x, i); printf("│  출력  │    │ 미출력 │"); i++;
		gotoxy(x, i); printf("│        │    │        │"); i++;
		gotoxy(x, i); printf("└────┘    └────┘");
	}
	void mileageUse::view() { // 시작 좌표 76
		clear_box2();
		int x = 86, i = 2;
		gotoxy(x, i); printf("마 일 리 지   사 용 금 액 을"); i += 2; x = 91;
		gotoxy(x, i); printf("입 력 해 주 세 요"); i += 2;

		x = 84;
		gotoxy(x, i); printf("┌──────────────┐"); i++;
		gotoxy(x, i); printf("│결제 금액                   │"); i++;
		gotoxy(x, i); printf("└──────────────┘"); i++;

		gotoxy(x, i); printf("┌──────────────┐"); i++;
		gotoxy(x, i); printf("│마일리지 금액               │"); i++;
		gotoxy(x, i); printf("└──────────────┘"); i += 2;

		x = 83;
		gotoxy(x, i); printf("┌───┐  ┌───┐  ┌───┐"); i++;
		gotoxy(x, i); printf("│  1000│  │  3000│  │  5000│  "); i++;
		gotoxy(x, i); printf("└───┘  └───┘  └───┘"); i += 2;

		gotoxy(x, i); printf("┌───┐  ┌───┐  ┌───┐"); i++;
		gotoxy(x, i); printf("│ 10000│  │   ALL│  │ Clear│  "); i++;
		gotoxy(x, i); printf("└───┘  └───┘  └───┘");
	}

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
