#pragma once
#include<vector>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<string>
#include<Windows.h>
#define x first
#define y second
using namespace std;
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