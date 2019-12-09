#pragma once
#include "utils.h"

//각각의 box를 clear해주는 함수
void clear_box1();
void clear_box2();
void clear_box3();
void clear_box4();
void clear_box5();

//읽어온 값들을 출력해주는 함수
void menuview_1portion(pair<int, int> start, pair<int, int> end, string content);
void menuview_2portion(pair<int, int> start, pair<int, int> end, string content1, string content2);
void print_option(int y, int q);

//화면 틀 찍는 함수
void view();
