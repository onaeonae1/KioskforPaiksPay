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

void mainMouse(int* state, pair<int, int> mousepos) { //�Է¹��� ���콺�� ��ǥ�� ���޹ް� Ŭ���� ȣ���ϴ� �Լ�

}

void action_discountControl(int* state, pair <int, int> p1) {

	int x = p1.first;
	int y = p1.second;

	if ((y >= 22) && (y <= 29)) {
		if ((x >= 13) && (x <= 60)) {
			//couponcontrol�� �Ѿ�� ��ư
		}

		else if ((x >= 43) && (x <= 60)) {
			//giftCardControl�� �Ѿ�� ��ư
		}
		//����
		else if ((y >= 32) && (y <= 49)) {
			if ((x >= 13) && (x <= 60)) {
				//manuBuy�� ���ư��� ��ư
			}
		}
	}
}

void action_payMethod(int* state, pair <int, int> p1) {

	int x = p1.first;
	int y = p1.second;


	if ((y >= 11) && (y <= 15)) {
		if ((x >= 86) && (x <= 97)) {
			//cardInput���� �Ѿ�� ��ư
		}
		else if ((x >= 102) && (x <= 113)) {
			//cashInput���� �Ѿ�� ��ư
		}
	}

}
