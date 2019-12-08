#include<iostream>
#include <stdio.h>
#include<string>
#include<Windows.h>
#include<conio.h>
#include "Model.h"
#include "utils.h"

using namespace std;

/*void gotoxy(int x, int y) {
	COORD posXY = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), posXY);
}*/
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


void menuview_1portion(pair<int, int> start, pair<int, int> end, string content) {
	int y = start.second + 3; // 맨 위에서 4번째 칸
	int temp = end.first - start.first;
	int t = content.length();
	gotoxy((temp - t) / 2, y);
	printf("%s", content);

	return;
}

void print_option(int y, int q) {
	string a;
	string b;
	string c;
	switch (q) {
	case 0:
		a = "Hot / Ice";
		b = "Hot";
		c = "Ice";
		break;
	case 1:
		a = "사이즈";
		b = "레귤러(R)";
		c = "라지(L)";
		break;
	case 2:
		a = "샷추가";
		b = "연하게";
		c = "1샷 추가";
		break;
	case 3:
		a = "휘핑크림";
		b = "휘핑크림O";
		c = "휘핑크림X";
	}

	gotoxy(80, y); printf("%s", a);
	gotoxy(92, y); printf("%s", b);
	gotoxy(106, y); printf("%s", c);
}

void menuview_2portion(pair<int, int> start, pair<int, int> end, string content1, string content2) {
	int y = start.second + 1;
	int temp = end.first - start.first;
	int t = content1.length();
	gotoxy((temp - t) / 2, y);
	printf("%s", content1);

	y = start.second + 4;
	t = content2.length();
	gotoxy((temp - t) / 2, y);
	printf("%s", content2);

	return;
}




class menuBuy : public box1 {
private:
	int page;//몇 번째 카테고리를 보고 있는지를 저장
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


		//메뉴리스트 찍는 과정
		for (int j = 0; j < 5; j++) {
			string a;
			int llength = 0;
			int starts[5] = { 4, 18, 32, 46, 60 };
			int qq = 0;
			//읽어오는 과정
			a = E.shop.getMenulists()[j].getType();
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
			input = E.shop.getMenulists()[page].getMenus()[j].getName();
			//길이에 따라 split
			ss = split(input, '_');
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
		for (int q = 0; q < 4; q++) {
			if (!(E.shop.getMenulists().at(E.mb.getpage()).getMenus().at(E.mb.getcurrent_menu()).getoptionSet().at(q))) {
				gotoxy(x, i); printf("┌─────┐      ┌─────┐"); i++;
				gotoxy(x, i); printf("│          │      │          │"); i++;
				gotoxy(x, i); printf("└─────┘      └─────┘"); i += 2;


				print_option(i - 3, q);
			}
		}

		/*
		gotoxy(x, i); printf("┌───┐  ┌───┐  ┌───┐"); i++;
		gotoxy(x, i); printf("│      │  │      │  │      │"); i++;
		gotoxy(x, i); printf("└───┘  └───┘  └───┘"); i += 2;
		gotoxy(x, i); printf("┌───┐  ┌───┐  ┌───┐"); i++;
		gotoxy(x, i); printf("│      │  │      │  │      │"); i++;
		gotoxy(x, i); printf("└───┘  └───┘  └───┘"); i += 2;
		gotoxy(x, i); printf("┌───┐  ┌───┐  ┌───┐"); i++;
		gotoxy(x, i); printf("│      │  │      │  │      │"); i++;
		gotoxy(x, i); printf("└───┘  └───┘  └───┘");
		*/
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
