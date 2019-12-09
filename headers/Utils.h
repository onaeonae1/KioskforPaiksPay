#pragma once

#include "declare.h"

using namespace std;

void startView();
vector<string> split(string str, char delimiter);
pair<int, int> mouseEvent();
void gotoxy(int x, int y);
void clear_box1();
void clear_box2();
void clear_box3();
void clear_box4();
void clear_box5();
void menuview_1portion(pair<int, int> start, pair<int, int> end, string content);
void print_option(int y, int q);
void menuview_2portion(pair<int, int> start, pair<int, int> end, string content1, string content2);
void view();

