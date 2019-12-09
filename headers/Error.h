#pragma once
#include<vector>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<string>
#include<iostream>
#include<Windows.h>
class Error {
	//x = 76 , y = 33,34
public:
	void gotoXY(int x, int y) { //gotoxy
		COORD posXY = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), posXY);
	}
	void clearBOX4() {
		int x = 76, i = 33;
		for (i = 33; i < 35; i++) {
			gotoXY(x, i); printf("                                                ");
		}
		return;
	}
	void Errorview(int value) {
		switch (value)
		{
		case 0: {
			clearBOX4();
			//출력 x
			break;
		}
		case 1: {
			clearBOX4();
			int x = 76, i = 33;
			gotoXY(x, i); printf("기 프 티 콘 에 러!"); i++;
			gotoXY(x, i); printf("다시 입력하세요!"); i++;
			Sleep(3000);
			break;
		}
		case 2: {
			clearBOX4();
			int x = 76, i = 33;
			gotoXY(x, i); printf("로 그 인 에 러!"); i++;
			gotoXY(x, i); printf("다시 입력하세요!"); i++;
			Sleep(3000);
			break;
		}
		case 3: {
			clearBOX4();
			int x = 76, i = 33;
			gotoXY(x, i); printf("카 드/현 금 에 러!"); i++;
			gotoXY(x, i); printf("다시 입력하세요!"); i++;
			Sleep(3000);
			break;
		}
		case 4: {
			clearBOX4();
			int x = 76, i = 33;
			gotoXY(x, i); printf("쿠 폰/상 품 권 에 러!"); i++;
			gotoXY(x, i); printf("다시 입력하세요!"); i++;
			Sleep(3000);
			break;
		}
		default: {
			clearBOX4();
			//출력 x
			break;
		}
		}

	}

};
