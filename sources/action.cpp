#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <conio.h>
#include "utils.h"
#include "Error.h"
#include "User.h"

#define x first
#define y second

using namespace std;

class Everything {
public:
	Shop shop;
	User user;

	cardInput ci;
	cashInput ci2;
	discountControl dc;
	mileageControl mc;
	menuBuy mb;
	login lg;

	gifticonInput gi;
	optionControl oc;
	couponControl cc;
	giftcardControl gcc;
	payMethod pm;
	bill bl;
	mileageUse mu;
	int state[5];

	Error e
	void setState(int num1, int num2, int num3, int num4, int num5) {
		state[0] = num1;
		state[1] = num2;
		state[2] = num3;
		state[3] = num4;
		state[4] = num5;
	}
};

string getInput(int print) {//동그라미를 출력해야 하면 시작 x, 아니면 0
	string result = "";
	char temp = '0';
	int i = 0, j = 0;
	int y = 0, end = 0;
	if(print == 19){
		y = 26, end = 56;
	}
	else if(print == 88) {
		y = 13, end = 115;
	}


	temp = getch();
	for (i = 0; !((char)temp == '\n' || (char)temp == '\r'); i++) {
		if(print) {
			if (i < 0) i = 0;
			if (temp == 8) { // backspace일 때
				if (!result.empty())
					result.pop_back();
				if (i != 0)
					gotoxy(pirnt + i * 2 - 2, y);
					if(print + i * 2 <= end - 1)
						printf(" ");
				i -= 2;
			}
			else {
				result.push_back((char)temp);
				gotoxy(print + i * 2, y);
				if(print + i * 2 <= end - 1) printf("●");
			}
		}
		temp = getch();
	}

	return result;
}


void action_start(Everything E) {
	char c = NULL;
	if (cin>>c) { //입력 됐을 때 시작 상태
		E.setState(1, 0, 1, 0, 1);	
	}
}

void action_menuBuy(Everything E, pair<int, int> input) {
	int x = input.first;
	int y = input.second;

	if (6 <= y && y <= 8) {
		if (4 <= x && x <= 15) {
			//메뉴리스트 1
			E.mb->setpage(0);
		}
		else if (18 <= x && x <= 29) {
			//메뉴리스트 2
			E.mb->setpage(1);
		}
		else if (32 <= x && x <= 43) {
			//메뉴리스트 3
			E.mb->setpage(2);
		}
		else if (46 <= x && x <= 57) {
			//메뉴리스트 4
			E.mb->setpage(3);
		}
		else if (60 <= x && x <= 71) {
			//메뉴리스트 5
			E.mb->setpage(4);
		}
	}
	else if (10 <= y && y <= 15) {
		if (4 <= x && x <= 18) {
			//메뉴 1
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(0));
		}
		else if (21 <= x && x <= 35) {
			//메뉴 2
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(1));
		}
		else if (38 <= x && x <= 52) {
			//메뉴 3
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(2));
		}
		else if (55 <= x && x <= 69) {
			//메뉴 4
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(3));
		}
			E.setState(1, 2, 1, 0, 1);
	}
	else if (17 <= y && y <= 22) {
		if (4 <= x && x <= 18) {
			//메뉴 5
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(4));
		}
		else if (21 <= x && x <= 35) {
			//메뉴 6
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(5));
		}
		else if (38 <= x && x <= 52) {
			//메뉴 7
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(6));
		}
		else if (55 <= x && x <= 69) {
			//메뉴 8
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(7));
		}
		E.setState(1, 2, 1, 0, 1);
	}
	else if (24 <= y && y <= 29) {
		if (4 <= x && x <= 18) {
			//메뉴 9
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(8));
		}
		else if (21 <= x && x <= 35) {
			//메뉴 10
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(9));
		}
		else if (38 <= x && x <= 52) {
			//메뉴 11
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(10));
		}
		else if (55 <= x && x <= 69) {
			//메뉴 12
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(11));
		}
		E.setState(1, 2, 1, 0, 1);
	}
	else if (31 <= y && y <= 36) {
		if (4 <= x && x <= 18) {
			//메뉴 13
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(12));
		}
		else if (21 <= x && x <= 35) {
			//메뉴 14
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(13));
		}
		else if (38 <= x && x <= 52) {
			//메뉴 15
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(14));
		}
		else if (55 <= x && x <= 69) {
			//메뉴 16
			E.mb->setcurrent_menu(E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(15));
		}
		E.setState(1, 2, 1, 0, 1);
	}
	else if(38 <= y && y <= 40) {
		if (83 <= x && x <= 92) {
			//회원결제
			E.setState(2, 0, 0, 0, 0);
		}
		else if (95 <= x && x <= 104) {
			//비회원결제
			E.setState(4, 0, 0, 0, 0);
		}
		else if (107 <= x && x <= 116) {
			//기프티콘
			E.setState(1, 1, 1, 0, 1);
		}
	}
}
void action_gifticon(Everything E) {
	gotoxy(89, 13);
	
	string id = getInput(88);
	//키보드 입력
	for (int i = 0; i < E.GiftiData.size(); i++) {
		if (id == E.GiftiData.at(i).getKey()) {//같은 경우
			for (int j = 0; j < E.UsedGifti.size(); j++) {
				if (id == E.UsedGifti.at(j).getKey()) {
					//존재, 사용함
					E.setState(1, 1, 1, 1, 1);
					exit(0);
					//에러 상태로 돌리고 종료
				}
				else {//존재하고 사용하지 않은경우, 사용하고 사용 깊티 벡터에 추가후 옵션창 띄움
					E.UsedGifti.push_back(E.GiftiData.at(i));
					
					Menu m=(E.GiftiData.at(i).getMenu()); //새 메뉴 생성
					m.setIsGifti(true); 

					E.mb->setcurrent_menu(m); //메뉴 설정
					E.setState(1, 0, 1, 0, 1);

					exit(0);
				}
			}
			
		}
		else {//존재도 안함
			E.setState(1, 1, 1, 1, 1);
			exit(0);
		}
	}
}
void action_giftierr(Everything E) {
	E.e.Errorview(1);
	E.setState(1, 1, 1, 0, 1);
}
void action_option(Everything E, pair<int, int> input) {
	int x = input.first;
	int y = input.second;
	Menu wanted_menu = E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(E.mb->getcurrent_menu()); //원하는 메뉴
	Cmenu wanted_Cmenu(wanted_menu); //원하는 메뉴를 장바구니에 넣기 위해 생성

	vector<int> true_options; // 해당 메뉴의 옵션 중 T인 옵션들의 인덱스들의 벡터



	//option 중 true인 옵션들의 인덱스들만 모아서 넣음
	for (int i = 0; i < 4; i++) {
		if (wanted_menu.getoptionSet().at(i) == true) {
			true_options.push_back(i);
		}
	}
	while (1) {
		if (5 <= y && y <= 7) {
			if (90 <= x && x <= 103) {
				//옵션 1-1
				if (true_options.size() >= 1) { //옵션 존재
					switch (true_options.at(0)) {
					case 0: {//temperature
						wanted_Cmenu.optionChange(0, 1);
						break;
					}
					case 1: {//size
						wanted_Cmenu.optionChange(1.1);
						break;
					}
					case 2: {//shot
						if (wanted_Cmenu.getoptionManage().at(2) == 1) {
							wanted_Cmenu.optionChange(2, 0);
						}
						else {
							wanted_Cmenu.optionChange(2, 1);
						}
						break;
					}
					case 3: {//cream
						wanted_Cmenu.optionChange(3, 1);
						break;
					}
					}
				}
			}
			else if (110 <= x && x <= 123) {
				//옵션 1-2
				if (true_options.size() >= 1) { //옵션 존재
					switch (true_options.at(0)) {
					case 0: {//temperature
						wanted_Cmenu.optionChange(0, 2);
						break;
					}
					case 1: {//size
						wanted_Cmenu.optionChange(1, 2);
						break;
					}
					case 2: {//shot
						if (wanted_Cmenu.getoptionManage().at(2) == 2) {
							wanted_Cmenu.optionChange(2, 0);
						}
						else {
							wanted_Cmenu.optionChange(2, 2);
						}
						break;
					}
					case 3: {//cream
						wanted_Cmenu.optionChange(3, 2);
						break;
					}
					}
				}
			}
		}
		else if (9 <= y && y <= 11) {
			if (90 <= x && x <= 103) {
				//옵션 2-1
				if (true_options.size() >= 2) { //옵션 존재
					switch (true_options.at(1)) {
					case 0: {//temperature
						wanted_Cmenu.optionChange(0, 1);
						break;
					}
					case 1: {//size
						wanted_Cmenu.optionChange(1, 1);
						break;
					}
					case 2: {//shot
						if (wanted_Cmenu.getoptionManage().at(2) == 1) {
							wanted_Cmenu.optionChange(2, 0);
						}
						else {
							wanted_Cmenu.optionChange(2, 1);
						}
						break;
					}
					case 3: {//cream
						wanted_Cmenu.optionChange(3, 1);
						break;
					}
					}
				}
			}
			else if (110 <= x && x <= 123) {
				//옵션 2-2
				if (true_options.size() >= 2) { //옵션 존재
					switch (true_options.at(1)) {
					case 0: {//temperature
						wanted_Cmenu.optionChange(0, 2);
						break;
					}
					case 1: {//size
						wanted_Cmenu.optionChange(1, 2);
						break;
					}
					case 2: {//shot
						if (wanted_Cmenu.getoptionManage().at(2) == 2) {
							wanted_Cmenu.optionChange(2, 0);
						}
						else {
							wanted_Cmenu.optionChange(2, 2);
						}
						break;
					}
					case 3: {//cream
						wanted_Cmenu.optionChange(3, 2);
						break;
					}
					}
				}
			}
		}
		else if (13 <= y && y <= 15) {
			if (90 <= x && x <= 103) {
				//옵션 3-1
				if (true_options.size() >= 3) { //옵션 존재
					switch (true_options.at(2)) {
					case 0: {//temperature
						wanted_Cmenu.optionChange(0, 1);
						break;
					}
					case 1: {//size
						wanted_Cmenu.optionChange(1, 1);
						break;
					}
					case 2: {//shot
						if (wanted_Cmenu.getoptionManage().at(2) == 1) {
							wanted_Cmenu.optionChange(2, 0);
						}
						else {
							wanted_Cmenu.optionChange(2, 1);
						}
						break;
					}
					case 3: {//cream
						wanted_Cmenu.optionChange(3, 1);
						break;
					}
					}
				}
			}
			else if (110 <= x && x <= 123) {
				//옵션 3-2
				if (true_options.size() >= 3) { //옵션 존재
					switch (true_options.at(2)) {
					case 0: {//temperature
						wanted_Cmenu.optionChange(0, 2);
						break;
					}
					case 1: {//size
						wanted_Cmenu.optionChange(1, 2);
						break;
					}
					case 2: {//shot
						if (wanted_Cmenu.getoptionManage().at(2) == 2) {
							wanted_Cmenu.optionChange(2, 0);
						}
						else {
							wanted_Cmenu.optionChange(2, 2);
						}
						break;
					}
					case 3: {//cream
						wanted_Cmenu.optionChange(3, 2);
						break;
					}
					}
				}
			}
		}
		else if (17 <= y && y <= 19) {
			if (90 <= x && x <= 103) {
				//옵션 4-1
				if (true_options.size() >= 4) { //옵션 존재
					switch (true_options.at(3)) {
					case 0: {//temperature
						wanted_Cmenu.optionChange(0, 1);
						break;
					}
					case 1: {//size
						wanted_Cmenu.optionChange(1, 1);
						break;
					}
					case 2: {//shot
						if (wanted_Cmenu.getoptionManage().at(2) == 1) {
							wanted_Cmenu.optionChange(2, 0);
						}
						else {
							wanted_Cmenu.optionChange(2, 1);
						}
						break;
					}
					case 3: {//cream
						wanted_Cmenu.optionChange(3, 1);
						break;
					}
					}
				}
			}
			else if (110 <= x && x <= 123) {
				//옵션 4-2
				if (true_options.size() >= 4) { //옵션 존재
					switch (true_options.at(3)) {
					case 0: {//temperature
						wanted_Cmenu.optionChange(0, 2);
						break;
					}
					case 1: {//size
						wanted_Cmenu.optionChange(1, 2);
						break;
					}
					case 2: {//shot
						if (wanted_Cmenu.getoptionManage().at(2) == 2) {
							wanted_Cmenu.optionChange(2, 0);
						}
						else {
							wanted_Cmenu.optionChange(2, 2);
						}
						break;
					}
					case 3: {//cream
						wanted_Cmenu.optionChange(3, 2);
						break;
					}
					}
				}
			}
		}


		//옵션이 제대로 클릭 되었으면 다음
		//제대로 안됐으면 옵션을 다 누를때 까지 기다림
		int count = 0;
		if (wanted_Cmenu.getMenu().getoptionSet().at(3) == false) {//샷추가 활성화 안되어 있을 때
			for (int i = 0; i < true_options.size(); i++) {
				if (wanted_Cmenu.getoptionManage().at(true_options.at(i)) != 0) {
					count++;
				}
			}
		}
		else {//활성화 되어 있을 때
			for (int i = 0; i < true_options.size(); i++) {
				if (wanted_Cmenu.getoptionManage().at(true_options.at(i)) != 0) {//만약 모든 옵션이 0 이 아닐경우. 입력이 되어있을 경우
					count++;
				}
				else if (true_options.at(i) == 2) {//활성화 되어 있는데 i 값이 2라면 i++해서 그냥 다음 옵션 비교함
					i++;
					count++;
				}
			}
		}
		
		//모든 옵션이 선택 되었을 경우, 메뉴 추가 후, state 바꾸고, break해서 나감
		if (count == true_options.size()) {
			E.user.getBucket().add(wanted_Cmenu);
			E.setState(1, 0, 1, 0, 1);
			break;
		}
	}
}
void action_login(Everything E) {
	gotoxy(20, 26);
	string id = getInput(19);
	for (int i = 0; i < E.MileageData.size(); i++) {
		if (E.MileageData.at(i).getKey() == id) {//존재
			E.setState(3, 0, 0, 0, 0);//상태설정
			E.user.setKey(id);//아이디 설정
			E.user.setMileage(E.MileageData.at(i));//마일리지설정
			break;
		}
		else {//존재하지않음
			E.setState(2, 0, 0, 2, 0);
			break;
		}
	}
	//키보드 입력
	//키보드 입력 제대로 되면 E.setState(3,0,0,0,0);
	//로그인 실패하면 E.setState(2,0,0,2,0);
	
}
void action_logerr(Everything E) {
	E.e.Errorview(2);
	E.setState(2, 0, 0, 0, 0);
}

void action_mileageControl(Everything E, pair<int, int> input) {
	int x = input.first;
	int y = input.second;

	E.user.getBucket().settotal(E.user.getBucket().gettotal());

	if (13 <= x && x <= 30) {
		if (22 <= y && y <= 29) {
			E.setState(3, 6, 0, 0, 0);
		}
	}
	else if (44 <= x && x <= 61) {
		if (22 <= y && y <= 29) {
			for (int i = 0; i < E.MileageData.size(); i++) {
				if (E.MileageData.at(i).getKey() == E.user.getKey()) {//존재
					E.MileageData.at(i).setValue(E.MileageData.at(i).getValue+E.user.getBucket().gettotal() / 10);
					E.setState(4, 0, 0, 0, 0);// 마일리지 데이터 벡터에 10퍼센트 적립 후 상태변경
					break;
				}
			}
		}
	}
}
void action_mileageUse(Everything E, pair<int, int> input) {
	int x = input.first;
	int y = input.second;
	

	if (13 <= y && y <= 15) {
		if (83 <= x && x <= 92) {
			//마일리지 1000원 추가 사용
			if (E.user.getBucket().gettotal() >= 1000) {
				E.user.getBucket().settotal(-1000);
				E.user.setUsedmileage(1000);
			}
		}
		else if (95 <= x && x <= 104) {
			//마일리지 3000원 추가 사용
			if (E.user.getBucket().gettotal() >= 3000) {
				E.user.getBucket().settotal(-3000);
				E.user.setUsedmileage(3000);
			}
		}
		else if (107 <= x && x <= 116) {
			//마일리지 5000원 추가 사용
			if (E.user.getBucket().gettotal() >= 5000) {
				E.user.getBucket().settotal(-5000);
				E.user.setUsedmileage(5000);
			}
		}
		else {
			//아무 일도 안 일어남
		}
	}
	else if (17 <= y && y <= 19) {
		if (83 <= x && x <= 92) {
			//마일리지 10000원 추가 사용
		
			if (E.user.getBucket().gettotal() >= 10000) {
				E.user.getBucket().settotal(-10000);
				E.user.setUsedmileage(10000);
			}
		}
		else if (95 <= x && x <= 104) {
			//모든 마일리지 사용
			if (E.user.getBucket().gettotal() >= E.user.getMileage().getValue()) {
				E.user.getBucket().settotal(-E.user.getMileage().getValue());
				E.user.setUsedmileage(E.user.getMileage().getValue());
			}
		}
		else if (107 <= x && x <= 116) {
			//마일리지 입력칸을 모두 비우고, 사용하기로 한 마일리지를 0으로 만듬
			E.user.getBucket().settotal(E.user.getUsedmileage());
			E.user.setUsedmileage(0);
		}
		else {
			//아무 일도 안 일어남
		}
	}
	else if (86<=x && y<=113) {
		if (y == 7) {//결제
			E.setState(4, 0, 0, 0, 0);
		}
	}
}
void action_discountControl(Everything E, pair <int, int> p1) {

	int x = p1.first;
	int y = p1.second;

	if ((y >= 22) && (y <= 29)) {
		if ((x >= 13) && (x <= 60)) {
			E.setState(4, 3, 0, 0, 0);
			//couponcontrol로 넘어가는 버튼
		}
		else if ((x >= 43) && (x <= 60)) {
			E.setState(4, 7, 0, 0, 0);
			//giftCardControl로 넘어가는 버튼
		}
		else {
			//아무 일 없음		
		}
	}
	else if ((y >= 32) && (y <= 49)) { //이전

		if ((x >= 13) && (x <= 30)) {
			if (E.user.getKey() == "X") {
				//E.mb.getpage();
				//E.mb.getcurrent_menu();
				E.setState(1, 0, 1, 0, 1);
				//manuBuy로 돌아가는 버튼(비회원)
			}
			else {
				E.setState(3, 0, 0, 0, 0);
				//마일리지 사용/적립으로 돌아가는 버튼(회원)
			}
		}
		else if ((x >= 43) && (x <= 60)) {
			E.setState(4, 4, 0, 0, 0);
			//payMethod로 넘어가는 버튼
		}
	}
	else {
		//아무 일 없음
	}
}

void action_coupon(Everything E) {
	gotoxy(89, 13);
	string temp = getInput(88);
	//한주 꺼 Gifticon 복붙
	for (int i = 0; i < E.CouponData.size(); i++) { //Gifticon이랑 같다고 가정한 CouponData,UsedCoupon
		if (temp == E.CouponData.at(i).getKey()) { //같은 경우
			for (int j = 0; j < E.UsedCoupon.size(); j++) {
				if (temp == E.UsedCoupon.at(j).getKey()) {
					//존재, 사용함
					E.setState(4, 3, 0, 4, 0);
					exit(0);
					//에러 상태로 돌리고 종료
				}
				else {//존재하고 사용하지 않은경우, 사용하고 사용 쿠폰 벡터에 추가
					E.UsedCoupon.push_back(E.CouponData.at(i));
					E.user.getBucket().settotal((E.user.getBucket().gettotal()) - 3000); //쿠폰은 일괄적으로 3000원만 있다고 가정
					
					E.setState(4, 0, 0, 0, 0);

					exit(0);
				}
			}

		}
		else {//존재도 안함
			E.setState(4, 3, 0, 4, 0);
			exit(0);
		}
	}
}
void action_couponerr(Everything E) {
	E.e.Errorview(4);
	E.setState(4, 3, 0, 0, 0);

}
void action_payMethod(Everything E, pair <int, int> p1) {

	int x = p1.first;
	int y = p1.second;


	if ((y >= 11) && (y <= 15)) {
		if ((x >= 86) && (x <= 97)) {
			E.setState(5, 0, 0, 0, 0);
			//cardInput으로 넘어가는 버튼
		}
		else if ((x >= 102) && (x <= 113)) {
			E.setState(6, 0, 0, 0, 0);
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
void action_gifiticard(Everything E) {
	
	gotoxy(89, 13);
	string temp = getInput(88);
	//한주 꺼 Gifticon 복붙
	for (int i = 0; i < E.gifiticardData.size(); i++) { //Gifticon이랑 같다고 가정한 gifiticardData,Usedgifiticard
		if (temp == E.gifiticardData.at(i).getKey()) { //같은 경우
			for (int j = 0; j < E.Usedgifiticard.size(); j++) {
				if (temp == E.Usedgifiticard.at(j).getKey()) {
					//존재, 사용함
					E.setState(4, 7, 0, 4, 0);
					exit(0);
					//에러 상태로 돌리고 종료
				}
				else {//존재하고 사용하지 않은경우, 사용하고 사용 상품권 벡터에 추가
					E.Usedgifiticard.push_back(E.gifiticardData.at(i));
					E.user.getBucket().settotal((E.user.getBucket().gettotal()) - 3000); //상품권도 일괄적으로 3000원만 있다고 가정

					E.setState(4, 0, 0, 0, 0);

					exit(0);
				}
			}

		}
		else {//존재도 안함
			E.setState(4, 7, 0, 4, 0);
			exit(0);
		}
	}
}
void action_gifitierr(Everything E) {
	E.e.Errorview(4);
	E.setState(4, 7, 0, 0, 0);
}

void action_cardinput(Everything E) {

	//cout << "카드를 입력하시겠습니까?(y/n 으로만 표시)" << endl;
	string temp = getInput(0);

	if (temp == "y")//입력 성공 시)
		E.setState(5, 5, 0, 0, 0);
	else if (temp == "n")//입력 실패 시)
		E.setState(5, 0, 0, 3, 0);

}

void action_carderr(Everything E) {
	E.e.Errorview(3);
	E.setState(5, 0, 0, 0, 0);
}
void action_bill(Everything E, pair<int, int> input) {
	int x = input.first;
	int y = input.second;

	if (11 <= y && y <= 15) {
		if (86 <= x && x <= 97) {
			//영수증 출력
			//main.cpp에 billSetting 함수 사용
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

void action_cashinput(Everything E) {

	//현금 입력

	if () //입력 성공 시
		E.setState(6, 5, 0, 0, 0);
	else //입력 실패 시
		E.setState(6, 0, 0, 3, 0);
}

void action_casherr(Everything E) {
	E.e.Errorview(3);
	E.setState(6, 0, 0, 0, 0);
}
