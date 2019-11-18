#include<iostream>
#include<string>
#include<Windows.h>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<vector>
#include"utils.h"
#include"box.h"
#include"Model.h"
#include"User.h"
#define x first
#define y second
using namespace std;
void mainMouse(pair<int, int> mousepos) { //입력받은 마우스의 좌표를 전달받고 클래스 호출하는 함수

}
void initShop(Shop& shop) {
	ifstream in("shop.txt");
	int tpcounts; //분류의 갯수
	if (in.is_open()) {
		in >> tpcounts; //숫자 입력받음
		for (int i = 0; i < tpcounts; i++) {
			string tpname; //타입이름
			int elementcounts; //해당 타입의 메뉴 갯수
			in >> tpname;
			in >> elementcounts;
			for (int j = 0; j < elementcounts; j++) {
				string temp;
				in >> temp;
				for (int k = 0; k < temp.size(); k++) {
					vector<string> elements = split(temp,'/');
				}
			}

		}
	}
}
void init(Shop& shop) { //초기화
	initShop(shop);
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
	Shop Coffeeshop; //사용할 메뉴
	User CurrentUser;
	bool flag = true;
	//startView();
	//system("cls");
	init(Coffeeshop); //초기화
	while (flag) {
		pair<int, int> mousepos = mouseEvent();
		cout << mousepos.first << mousepos.second << endl;
		mainMouse(mousepos);
	}
	return 0;
}
