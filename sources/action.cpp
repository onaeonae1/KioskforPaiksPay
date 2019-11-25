#pragma once
#include <iostream>
#include <string>
#include<Windows.h>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<vector>

#define x first
#define y second

using namespace std;

void mainMouse(int* state, pair<int, int> mousepos) { //입력받은 마우스의 좌표를 전달받고 클래스 호출하는 함수

}

void action_discountControl(int* state, pair <int, int> p1) {

	int x = p1.first;
	int y = p1.second;

	if ((y >= 22) && (y <= 29)) {
		if ((x >= 13) && (x <= 60)) {
			//couponcontrol로 넘어가는 버튼
		}

		else if ((x >= 43) && (x <= 60)) {
			//giftCardControl로 넘어가는 버튼
		}
		//이전
		else if ((y >= 32) && (y <= 49)) {
			if ((x >= 13) && (x <= 60)) {
				//manuBuy로 돌아가는 버튼
			}
		}
	}
}

void action_payMethod(int* state, pair <int, int> p1) {

	int x = p1.first;
	int y = p1.second;


	if ((y >= 11) && (y <= 15)) {
		if ((x >= 86) && (x <= 97)) {
			//cardInput으로 넘어가는 버튼
		}
		else if ((x >= 102) && (x <= 113)) {
			//cashInput으로 넘어가는 버튼
		}
	}

}
