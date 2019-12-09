#pragma once
#include<vector>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<string>
#include<iostream>
#include<Windows.h>
#define tx first
#define ty second
using namespace std;
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
vector<string> split(string str, char delimiter) {
	vector<string> internal;
	stringstream ss(str);
	string temp;

	while (getline(ss, temp, delimiter)) {
		internal.push_back(temp);
	}

	return internal;
}
pair<int, int> mouseEvent() { //마우스를 직접 받고, 좌표를 전달하는 함수
	pair<int, int> ret = make_pair(0, 0);
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
				return make_pair(rec.Event.MouseEvent.dwMousePosition.X, rec.Event.MouseEvent.dwMousePosition.Y);
			}
		}
	}
}

void gotoxy(int x, int y) { //gotoxy
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
