#include<iostream>
#include<string>
#include<Windows.h>
#include<stdlib.h>
#include"box.h"
#define x first
#define y second
using namespace std;
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

};
class login : public box1 {

};
class mileageControl : public box1 {

};
class discountControl : public box1 {

};
class cardInput : public box1 {

};
class cashInput : public box1 {

};

class gifticonInput : public box2 {

};
class optionControl : public box2 {

};
class couponControl : public box2 {

};
class payMethod : public box2 {

};
class bill : public box2 {

};
class mileageUse : public box2 {

};
pair<int, int> mouseEvent() { //마우스를 직접 받고, 좌표를 전달하는 함수
	pair<int, int> ret = make_pair(0,0);
	HANDLE       hIn, hOut;
	DWORD        dwNOER;
	INPUT_RECORD rec;
	COORD        pos = { 0,1 };
	hIn = GetStdHandle(STD_INPUT_HANDLE);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleMode(hIn, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);
	while (TRUE)
	{
		ReadConsoleInput(hIn, &rec, 1, &dwNOER);
		if (rec.EventType == KEY_EVENT && rec.Event.KeyEvent.bKeyDown == TRUE &&
			rec.Event.KeyEvent.wVirtualKeyCode == VK_ESCAPE)
		{
			break;
		}
		if (rec.EventType == MOUSE_EVENT)
		{
			if (rec.Event.MouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED)
			{
				SetConsoleCursorPosition(hOut, pos);
				//printf("X:%2d, Y:%2d", rec.Event.MouseEvent.dwMousePosition.X, rec.Event.MouseEvent.dwMousePosition.Y);
				return make_pair( rec.Event.MouseEvent.dwMousePosition.X, rec.Event.MouseEvent.dwMousePosition.Y);
			}
		}
	}
}
void mainMouse(pair<int, int> mousepos) { //입력받은 마우스의 좌표를 전달받고 클래스 호출하는 함수

}
void init() { //초기화
	//Shop Class를 생성, 초기화 - > 파일입출력을 통해 불러오기
	//Gifticon Class를 생성, 초기화 -> 파일입출력을 통해 불러오기
	//Mileage Class를 생성, 초기화 : 아직 불확실한 부분이다.
	//User Class를 생성, 초기화
	//Backet Class를 생성, 초기화
	//Box1, Box2, Box3, Box4, Box5 생성. 초기화면으로 초기화
}
void startView() { //맨처음 화면
	printf("\n");
	printf("P R E S S   E N T E R   A N Y   K E Y   T O   S T A R T \n");
	printf("\n");
	while (true) {
		char temp = NULL;
		cin >> temp;
		if (temp != NULL) {
			break;
		}
		Sleep(500);
	}
	printf("W e l c o m e   T o    P a i k ' s   P a y ");
	printf("\n");
	Sleep(1000);
	return;
}
int main() {
	bool flag = true;
	startView();
	system("cls");
	init(); //초기화
	while (flag) {
		pair<int, int> mousepos = mouseEvent();
		mainMouse(mousepos);
	}
	return 0;
}
