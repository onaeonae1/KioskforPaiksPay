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
		else {
		//아무 일 없음		
		}
	}
		else if ((y >= 32) && (y <= 49)) { //이전
			
			if ((x >= 13) && (x <= 60)) {
				//manuBuy로 돌아가는 버튼
			}
			else {
				//아무 일 없음
			}
		}
		else {
		//아무 일 없음
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
		else {
			//아무 일 없음
		}
	}
	else {
		//아무 일 없음
	}

}
void action_bill(int* state, pair<int, int> input) {
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
