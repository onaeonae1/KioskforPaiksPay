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

public:
	Cmenu(Menu menu) {
		this->menu = menu;
		this->cnt = 1;
		if (this->menu.getShots() == 3) { //샷추가함
			this->exp += 500;
		}
		else {
			this->exp = 0;
		}
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
	bool compareTo(Menu menu1, Menu menu2) { // 기존 메뉴리스트 중 하나인 menu1과 새로 받은 menu2와의 비교
		if (menu1.getName() == menu2.getName())
			if (menu1.getSize() == menu2.getSize())
				if (menu1.getShots() == menu2.getShots())
					if (menu1.getCreams() == menu2.getCreams())
						return 1;
		return 0;
	}
	void add(Menu menu) {// 더하기 버튼을 클릭하여 수량 +1
		bool isEqual;
		int index = 0;
		for (int i = 0; i < Menulist.size(); i++) {
			isEqual = compareTo(Menulist[i].getMenu(), menu); //i번째 Menulist에 있는 Cmenu의 menu와 추가하고 싶은 menu의 원소들을 비교
			if (isEqual) {
				index = i;
				break;
			}
		}
		if (index != 0) {//만약 두 menu가 같다면 즉, index=0이 아니면 해당 index에 있는 메뉴의 수량을 +1
			Menulist[index].setCnt(1);
		}
		else {//만약 기존에 menulist에 존재하지 않는다면 menulist에 새로 추가
			Cmenu newMenu(menu);
			Menulist.push_back(newMenu);

		}
	}
	void minus(Menu menu) {// 빼기 버튼을 클릭하여 수량 -1
		bool isEqual;
		for (int i = 0; i < Menulist.size(); i++) {

			isEqual = compareTo(Menulist[i].getMenu(), menu);

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
	void remove(Menu menu) { // X버튼을 통한 메뉴 삭제
		bool isEqual;
		for (int i = 0; i < Menulist.size(); i++) {

			isEqual = compareTo(Menulist[i].getMenu(), menu);

			if (isEqual) {
				for (int j = i; j < Menulist.size(); j++) {
					Menulist[j] = Menulist[j + 1];
				}

				Menulist.pop_back();
				break;
			}
		}
	}
	int total() {//총 금액
		int sum = 0;
		for (int i = 0; i < Menulist.size(); i++) {
			sum += Menulist[i].getTotal();
		}
		return sum;
	}
};
