#pragma once
#include <iostream>
#include <vector>
#include "Model.h"
using namespace std;
class Cmenu { //Bucket의 메뉴는 다음과 같이 수정되어 들어간다.
private:
	Menu menu;//메뉴
	int cnt;//수량
	int exp;//옵션에 따른 추가금액
	vector<int> optionManage{ 0,0,0,0 }; //영수증에 출력될 옵션 정보
public:
	Cmenu(Menu menu) {
		this->menu = menu;
		this->cnt = 1;
		this->exp = 0;
		if ((menu.getoptionSet()).at(2) == 1) { //샷을 건드릴 수 있는 메뉴라면
			optionManage.at(2) = 2; //2샷을 기본으로 하도록
		}
	}
	void optionChange(int index, int value) {
		if (index >= 0 && index <= 3) {
			optionManage.at(index) = value;
		}
	}
	void setExp() { //옵션에 따른 추가금액 계산
		if (this->optionManage.at(1) == 1) { //사이즈업
			this->exp += 1000;
		}
		if (this->optionManage.at(2) == 3) { //샷추가
			this->exp += 500;
		}
	}
	vector<int> getoptionManage() {
		return this->optionManage;
	}
	Menu getMenu() {
		return this->menu;
	}
	int getCnt() {
		return this->cnt;
	}
	int getExp() {
		return this->exp;
	}
	void setCnt(int num) {
		this->cnt += num;
	}
	int getTotal() {
		return (this->exp + this->menu.getPrice());
	}
};
class Bucket {
private:
	vector<Cmenu> Menulist;

public:
	bool compareTo(Cmenu cm1, Cmenu cm2) { // 기존 메뉴리스트 중 하나인 menu1과 새로 받은 menu2와의 비교
		bool ret = true;
		Menu m1 = cm1.getMenu();
		Menu m2 = cm2.getMenu();
		if (m1.getName() == m2.getName()) {
			vector<int> op1 = cm1.getoptionManage();
			vector<int> op2 = cm2.getoptionManage();
			for (int i = 0; i < 4; i++) { //메뉴 비교
				ret = ret & (op1.at(i) && op2.at(i));
			}
		}
		else {
			ret = false;
		}
		return ret;
	}
	void add(Cmenu cm1) {// 더하기 버튼을 클릭하여 수량 +1
		bool isEqual;
		int index = 0;
		for (int i = 0; i < Menulist.size(); i++) {
			isEqual = compareTo(Menulist.at(i), cm1); //i번째 Menulist에 있는 Cmenu의 menu와 추가하고 싶은 menu의 원소들을 비교
			if (isEqual) {
				index = i;
				break;
			}
		}
		if (index != 0) {//만약 두 menu가 같다면 즉, index=0이 아니면 해당 index에 있는 메뉴의 수량을 +1
			Menulist[index].setCnt(1);
		}
		else {//만약 기존에 menulist에 존재하지 않는다면 menulist에 새로 추가
			Menulist.push_back(cm1);

		}
	}
	void minus(Cmenu cm1) {// 빼기 버튼을 클릭하여 수량 -1
		bool isEqual;
		for (int i = 0; i < Menulist.size(); i++) {

			isEqual = compareTo(Menulist.at(i), cm1);

			if (isEqual) {
				//개수가 1개면 메뉴 자체를 삭제
				if (Menulist[i].getCnt() <= 1) {
					for (int j = i; j < Menulist.size(); j++) {
						Menulist[j] = Menulist[j + 1];
					}
					//원래 있던 벡터 마지막에 남는 것 제거
					Menulist.pop_back();
					break;
				}
				//수량 -1
				Menulist[i].setCnt(-1);
				break;
			}
		}
	}
	void remove(Cmenu cm1) { // X버튼을 통한 메뉴 삭제
		bool isEqual;
		for (int i = 0; i < Menulist.size(); i++) {

			isEqual = compareTo(Menulist[i], cm1);

			if (isEqual) {
				for (int j = i; j < Menulist.size(); j++) {
					Menulist[j] = Menulist[j + 1];
				}

				Menulist.pop_back();
				break;
			}
		}
	}
	vector<Cmenu> getMenulist() {
		return this->Menulist;
	}
	int total() {//총 금액
		int sum = 0;
		for (int i = 0; i < Menulist.size(); i++) {
			sum += Menulist[i].getTotal();
		}
		return sum;
	}
};
