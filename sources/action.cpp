#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <conio.h>
#include "utils.h"
#include "Error.h"
#include "User.h"

#define x first
#define y second

using namespace std;

class Everything {
public:
	Shop shop;
	User user;

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
	int state[5];

	int *setState(int num1, int num2, int num3, int num4, int num5) {
		state[0] = num1;
		state[1] = num2;
		state[2] = num3;
		state[3] = num4;
		state[4] = num5;
		return state;
	}
};

string getInput() {
	string result = "";
	char temp = '0';
	int i = 0, j = 0;


	temp = getch();
	for (i = 0; !((char)temp == '\n' || (char)temp == '\r'); i++) {
		if (i < 0) i = 0;
		if (temp == 8) { // backspace일 때
			if (!result.empty())
				result.pop_back();
			if (i != 0)
				gotoxy(3 + i * 2 - 2, 3); printf(" ");
			i -= 2;
		}
		else {
			result.push_back((char)temp);
			gotoxy(3 + i * 2, 3); printf("●");
			gotoxy(5, 10); printf("%c", temp);
		}

		temp = getch();
	}

	return result;
}


void action_start() {

}

void action_menuBuy(int* state, pair<int, int> input) {
	int x = input.first;
	int y = input.second;



	if (6 <= y && y <= 8) {
		if (4 <= x && x <= 15) {
			//메뉴리스트 1
		}
		else if (18 <= x && x <= 29) {
			//메뉴리스트 2
		}
		else if (32 <= x && x <= 43) {
			//메뉴리스트 3
		}
		else if (46 <= x && x <= 57) {
			//메뉴리스트 4
		}
		else if (60 <= x && x <= 71) {
			//메뉴리스트 5
		}
		else {
			//아무 일도 안 일어남
		}
	}
	else if (10 <= y && y <= 15) {
		if (4 <= x && x <= 18) {
			//메뉴 1
		}
		else if (21 <= x && x <= 35) {
			//메뉴 2
		}
		else if (38 <= x && x <= 52) {
			//메뉴 3
		}
		else if (55 <= x && x <= 69) {
			//메뉴 4
		}
		else {
			//아무 일도 안 일어남
		}
	}
	else if (17 <= y && y <= 22) {
		if (4 <= x && x <= 18) {
			//메뉴 5
		}
		else if (21 <= x && x <= 35) {
			//메뉴 6
		}
		else if (38 <= x && x <= 52) {
			//메뉴 7
		}
		else if (55 <= x && x <= 69) {
			//메뉴 8
		}
		else {
			//아무 일도 안 일어남
		}
	}
	else if (24 <= y && y <= 29) {
		if (4 <= x && x <= 18) {
			//메뉴 9
		}
		else if (21 <= x && x <= 35) {
			//메뉴 10
		}
		else if (38 <= x && x <= 52) {
			//메뉴 11
		}
		else if (55 <= x && x <= 69) {
			//메뉴 12
		}
		else {
			//아무 일도 안 일어남
		}
	}
	else if (31 <= y && y <= 36) {
		if (4 <= x && x <= 18) {
			//메뉴 13
		}
		else if (21 <= x && x <= 35) {
			//메뉴 14
		}
		else if (38 <= x && x <= 52) {
			//메뉴 15
		}
		else if (55 <= x && x <= 69) {
			//메뉴 16
		}
		else {
			//아무 일도 안 일어남
		}
	}
	else {
		//아무 일도 안 일어남
	}



}
void action_gifticon(Everything E) {
	string temp = getInput();
	
	if () //입력 성공 시
		E.setState(1, 0, 1, 0, 1);
	else //입력 실패 시
		E.setState(1, 1, 1, 1, 1);
}
void action_giftierr(Everything E) {
	E.setState(1, 1, 1, 0, 1);
}
void action_option() {

}

void action_login(Everything E) {
	string temp = getInput();
	
	if () //입력 성공 시
		E.setState(3, 0, 0, 0, 0);
	else //입력 실패 시
		E.setState(2, 0, 0, 2, 0);
}
void action_logerr(Everything E) {
	E.setState(2, 0, 0, 0, 0);
}

void action_mileageControl(int* state, pair<int, int> input) {
	int x = input.first;
	int y = input.second;


	if (13 <= x && x <= 30) {
		if (22 <= y && y <= 29) {
			//마일리지 사용 버튼 처리
		}
	}
	else if (44 <= x && x <= 61) {
		if (22 <= y && y <= 29) {
			//마일리지 적립 버튼 처리
		}
	}

}
void action_mileageUse(int* state, pair<int, int> input) {
	int x = input.first;
	int y = input.second;

	if (13 <= y && y <= 15) {
		if (83 <= x && x <= 92) {
			//마일리지 1000원 추가 사용
		}
		else if (95 <= x && x <= 104) {
			//마일리지 3000원 추가 사용
		}
		else if (107 <= x && x <= 116) {
			//마일리지 5000원 추가 사용
		}
		else {
			//아무 일도 안 일어남
		}
	}
	else if (17 <= y && y <= 19) {
		if (83 <= x && x <= 92) {
			//마일리지 10000원 추가 사용
		}
		else if (95 <= x && x <= 104) {
			//모든 마일리지 사용
		}
		else if (107 <= x && x <= 116) {
			//마일리지 입력칸을 모두 비우고, 사용하기로 한 마일리지를 0으로 만듬
		}
		else {
			//아무 일도 안 일어남
		}
	}
}

void action_discountControl(Everything E, pair <int, int> p1) {

	int x = p1.first;
	int y = p1.second;

	if ((y >= 22) && (y <= 29)) {
		if ((x >= 13) && (x <= 60)) {
			E.setState(4, 3, 0, 0, 0);
			//couponcontrol로 넘어가는 버튼
		}
		else if ((x >= 43) && (x <= 60)) {
			E.setState(4, 7, 0, 0, 0);
			//giftCardControl로 넘어가는 버튼
		}
		else {
			//아무 일 없음		
		}
	}
	else if ((y >= 32) && (y <= 49)) { //이전

		if ((x >= 13) && (x <= 30)) {
			if (E.user.getKey() == "X")
				E.setState(1, 0, 1, 0, 1);
			//manuBuy로 돌아가는 버튼(비회원)
			else {
				E.setState(3, 0, 0, 0, 0);
				//마일리지 사용/적립으로 돌아가는 버튼(회원)
			}
		}
		else if((x >=43) && (x <= 60)) {
			E.setState(4, 4, 0, 0, 0);
			//결제 수단 선택 버튼
		}
	}
	else {
		//아무 일 없음
	}
}
void action_coupon(Everything E) {

	string temp = getInput();

	if () //입력 성공 시
		E.setState(4, 0, 0, 0, 0);
	else //입력 실패 시
		E.setState(4, 3, 0, 4, 0);
	

}
void action_couponerr(Everything E) {
	
	E.setState(4, 3, 0, 0, 0);

}
void action_payMethod(Everything E, pair <int, int> p1) {

	int x = p1.first;
	int y = p1.second;


	if ((y >= 11) && (y <= 15)) {
		if ((x >= 86) && (x <= 97)) {
			E.setState(5, 0, 0, 0, 0);
			//cardInput으로 넘어가는 버튼
		}
		else if ((x >= 102) && (x <= 113)) {
			E.setState(6, 0, 0, 0, 0);
			//cashInput으로 넘어가는 버튼
		}
		else {
			//아무 일 없음
		}
	}
	else {
		//아무 일 없음
	}

}
void action_gifiticard(Everything E) {
	
	string temp = getInput();

	if () //입력 성공 시
		E.setState(4, 0, 0, 0, 0);
	else //입력 실패 시
		E.setState(4, 7, 0, 4, 0);

}
void action_gifitierr(Everything E) {
	
	E.setState(4, 7, 0, 0, 0);
}

void action_cardinput(Everything E) {
	
	//cout << "카드를 입력하시겠습니까?(y/n 으로만 표시)" << endl;
	string temp = getInput();

	if(temp == "y")//입력 성공 시)
		E.setState(5, 5, 0, 0, 0);
	else if(temp == "n")//입력 실패 시)
		E.setState(5, 0, 0, 3, 0);

}

void action_carderr(Everything E) {

	E.setState(5, 0, 0, 0, 0);
}
void action_bill(Everything E, pair<int, int> input) {
	int x = input.first;
	int y = input.second;

	if (11 <= y && y <= 15) {
		if (86 <= x && x <= 97) {
			//영수증 출력
		}
		else if (102 <= x && x <= 113) {
			//영수증 미출력
		}
		else {
			//아무 일도 안 일어남
		}
	}
	else {
		//아무 일도 안 일어남
	}
}

void action_cashinput(Everything E) {

	//현금 입력

	if () //입력 성공 시
		E.setState(6, 5, 0, 0, 0);
	else //입력 실패 시
		E.setState(6, 0, 0, 3, 0);
}

void action_casherr(Everything E) {
	E.setState(6, 0, 0, 0, 0);
}
