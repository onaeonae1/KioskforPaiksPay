#include<iostream>
#include<string>
#include<Windows.h>
#include<conio.h>

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
class menuBuy : public box1 {
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

		x = 29,  i = 14;
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
		gotoxy(x, i);printf("│              │            │              │"); i++;
		gotoxy(x, i);printf("│              │            │              │"); i++;
		gotoxy(x, i);printf("│     쿠폰     │            │    상품권    │"); i++;
		gotoxy(x, i);printf("│              │            │              │"); i++;
		gotoxy(x, i);printf("│              │            │              │"); i++;
		gotoxy(x, i);printf("│              │            │              │"); i++;
		gotoxy(x, i);printf("└───────┘            └───────┘"); i++;

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

int main() {
	//init();


	cardInput ci;
	cashInput ci2;
	discountControl dc;
	mileageControl mc;
	menuBuy mb;
	login lg;

	gifticonInput gi;
	optionControl oc;
	couponControl cc;
	giftcardControl gcc;
	payMethod pm;
	bill bl;
	mileageUse mu;

	view();
	while (1){
		char temp = (char)_getch();
		switch (temp) {
		case 'a':
			mb.view();
			break;
		case 'b':
			lg.view();
			break;
		case 'c':
			mc.view();
			break;
		case 'd':
			dc.view();
			break;
		case 'e':
			ci.view();
			break;
		case 'f':
			gi.view();
			break;
		case 'g':
			oc.view();
			break;
		case 'h':
			cc.view();
			break;
		case 'i':
			pm.view();
			break;
		case 'j':
			bl.view();
			break;
		case 'k':
			mu.view();
			break;
		case 'l':
			gcc.view();
			break;
		default:
			break;
		}
	}


	//while (true) {
		//mainMouse(); //이벤트 처리
	//}
}