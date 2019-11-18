#pragma once
#include<iostream>
#include<string>
using namespace std;
class box {
private:
	pair<int, int> pos;
	int wideth;
	int height;
	string name;
public:
	void setPos(pair<int, int>pos) {
		this->pos = pos;
	}
	void setWideth(int wideth) {
		this->wideth = wideth;
	}
	void setHeight(int height) {
		this->height = height; 
	}
	void setName(string name) {
		this->name = name;
	}
	void view() {

	}
	void mouseEvent() {

	}
	void eraseView() {
		//필드 기반으로 필요한 영역에 공백을 찍는다.
	}
};
