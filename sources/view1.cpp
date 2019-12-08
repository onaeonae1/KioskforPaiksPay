#include<iostream>
#include <stdio,h>
#include<string>
#include<Windows.h>
#include<conio.h>
#include "Model.h"
#include "box1.h"
#include "box2.h"
#include "box3.h"
#include "box4.h"
#include "box5.h"
#include "Model.h"

using namespace std;

void gotoxy(int x, int y) {
	COORD posXY = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), posXY);
}
void clear_box1() {
	int x = 2, i = 1;
	for (i = 1; i < 43; i++) {
		gotoxy(x, i); printf("                                                                        ");
	}
	return;
}
void clear_box2() {
	int x = 76, i = 1;
	for (i = 1; i < 21; i++) {
		gotoxy(x, i); printf("                                                ");
	}
	return;
}
void clear_box3() {
	int x = 76, i = 22;
	for (i = 22; i < 32; i++) {
		gotoxy(x, i); printf("                                                ");
	}
	return;
}
void clear_box4() {
	int x = 76, i = 33;
	for (i = 33; i < 35; i++) {
		gotoxy(x, i); printf("                                                ");
	}
	return;
}
void clear_box5() {
	int x = 76, i = 27;
	for (i = 36; i < 43; i++) {
		gotoxy(x, i); printf("                                                ");
	}
	return;
}

class user {
	//장바구니 장바구니
	int id;//회원 ID
	int milage;//마일리지 데이터
};
class menuBuy : public box1 {
	int page;
	Menu current_menu;
public:
	void view() {
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


	}
	void setpage(int p) {
		this->page = p;
	}
	int getpage() {
		return this->page;
	}
	void setcurrent_menu(Menu m) {
		this->current_menu = m;
	}
	Menu getcurrent_menu() {
		return this->current_menu;
	}
};
class login : public box1 {
public:
	void view() {
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
};
class mileageControl : public box1 {
public:
	void view() { // 총 가격 표시 요망
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
};
class discountControl : public box1 {
public:
	void view() { // 총 가격 표시 요망
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
		gotoxy(x, i); printf("┌──────────────────────┐"); i++;
		gotoxy(x, i); printf("│                                            │"); i++;
		gotoxy(x, i); printf("│                                            │"); i++;
		gotoxy(x, i); printf("│             이전으로 돌아가기              │"); i++;
		gotoxy(x, i); printf("│                                            │"); i++;
		gotoxy(x, i); printf("│                                            │"); i++;
		gotoxy(x, i); printf("│                                            │"); i++;
		gotoxy(x, i); printf("└──────────────────────┘"); i++;
	}
};
class cardInput : public box1 {
public:
	void view() {
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
};
class cashInput : public box1 {
public:
	void view() {
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
};

class gifticonInput : public box2 {
public:
	void view() { // x시작 76
		clear_box2();
		int x = 93, i = 4;
		gotoxy(x, i); printf("기 프 티 콘 을"); i += 2;
		gotoxy(x, i); printf("입 력 하 세 요"); i++;

		x = 86, i = 12;
		gotoxy(x, i); printf("┌────────────┐"); i++;
		gotoxy(x, i); printf("│                        │"); i++;
		gotoxy(x, i); printf("└────────────┘");
	}

};
class optionControl : public box2 {
public:
	void view() { // x시작 76
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
};
class couponControl : public box2 { // 쿠폰을 입력하시오
public:
	void view() { // x시작 76
		clear_box2();
		int x = 86, i = 5;
		gotoxy(x, i); printf("쿠 폰 을   입 력 하 세 요 !!");

		i = 12;
		gotoxy(x, i); printf("┌────────────┐"); i++;
		gotoxy(x, i); printf("│                        │"); i++;
		gotoxy(x, i); printf("└────────────┘");
	}
};
class giftcardControl : public box2 { // 상품권을 입력하시오
public:
	void view() { // x시작 76
		clear_box2();
		int x = 85, i = 5;
		gotoxy(x, i); printf("상 품 권 을  입 력 하 세 요 !!");

		x = 86; i = 12;
		gotoxy(x, i); printf("┌────────────┐"); i++;
		gotoxy(x, i); printf("│                        │"); i++;
		gotoxy(x, i); printf("└────────────┘");
	}
};
class payMethod : public box2 { // 카드 / 현금 결제
public:
	void view() { // x시작 76
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
};
class bill : public box2 {
public:
	void view() {
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
};
class mileageUse : public box2 {
public:
	void view() { // 시작 좌표 76
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
};
void mainMouse(int x, int y, string a) {
	//마우스 들어온 x y 알고
	//이때 호출해야 할 박스 클래스를 알아서
	//그걸 호출하는거

}
void init() {




}
void view() {
	int i = 0;
	gotoxy(0, i); printf("┌────────────────────────────────────┬────────────────────────┐"); i++;
	for (i = 1; i < 21; i++) {
		gotoxy(0, i); printf("│"); gotoxy(74, i); printf("│"); gotoxy(124, i); printf("│");
	}
	gotoxy(0, i); printf("│"); gotoxy(74, i); printf("├────────────────────────┤");
	for (i = 22; i < 32; i++) {
		gotoxy(0, i); printf("│"); gotoxy(74, i); printf("│"); gotoxy(124, i); printf("│");
	}
	gotoxy(0, i); printf("│"); gotoxy(74, i); printf("├────────────────────────┤");
	for (i = 33; i < 35; i++) {
		gotoxy(0, i); printf("│"); gotoxy(74, i); printf("│"); gotoxy(124, i); printf("│");
	}
	gotoxy(0, i); printf("│"); gotoxy(74, i); printf("├────────────────────────┤");
	for (i = 36; i < 43; i++) {
		gotoxy(0, i); printf("│"); gotoxy(74, i); printf("│"); gotoxy(124, i); printf("│");
	}
	gotoxy(0, i); printf("└────────────────────────────────────┴────────────────────────┘");
}
