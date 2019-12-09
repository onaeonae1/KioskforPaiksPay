#include<iostream>
#include<string>
#include<Windows.h>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<vector>
#include<conio.h>
#include"utils.h"
#include"Everything.h"
using namespace std;
Everything E;
string getInput(int print) {//동그라미를 출력해야 하면 시작 x, 아니면 0
	string result = "";
	char temp = '0';
	int i = 0, j = 0;
	int y = 0, end = 0;
	if (print == 19) {
		y = 26, end = 56;
	}
	else if (print == 88) {
		y = 13, end = 115;
	}


	temp = getch();
	for (i = 0; !((char)temp == '\n' || (char)temp == '\r'); i++) {
		if (print) {
			if (i < 0) i = 0;
			if (temp == 8) { // backspace일 때
				if (!result.empty())
					result.pop_back();
				if (i != 0)
					gotoxy(print + i * 2 - 2, y);
				if (print + i * 2 <= end - 1)
					printf(" ");
				i -= 2;
			}
			else {
				result.push_back((char)temp);
				gotoxy(print + i * 2, y);
				if (print + i * 2 <= end - 1) printf("●");
			}
		}
		temp = getch();
	}

	return result;
}


void action_start(Everything E) {
	char c = NULL;
	if (cin >> c) { //입력 됐을 때 시작 상태
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
}
void action_gifticon(Everything E) {
	gotoxy(89, 13);

	string id = getInput(88);
	//키보드 입력
	for (int i = 0; i < E.GiftiData.size(); i++) {
		if (id == E.GiftiData.at(i).getKey()) {//같은 경우
			for (int j = 0; j < E.UsedGifti.size(); j++) {
				if (id == E.UsedGifti.at(j)) {
					//존재, 사용함
					E.setState(1, 1, 1, 1, 1);
					exit(0);
					//에러 상태로 돌리고 종료
				}
				else {//존재하고 사용하지 않은경우, 사용하고 사용 깊티 벡터에 추가후 옵션창 띄움
					E.UsedGifti.push_back(E.GiftiData.at(i).getKey());
					Menu m = (E.GiftiData.at(i).getMenu()); //새 메뉴 생성
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
	Menu wanted_menu = E.mb->getcurrent_menu();
	//Menu wanted_menu = E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(E.mb->getcurrent_menu()); //원하는 메뉴
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
						wanted_Cmenu.optionChange(1,1);
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
					E.MileageData.at(i).setValue(E.MileageData.at(i).getValue() + E.user.getBucket().gettotal() / 10);
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
	else if (86 <= x && y <= 113) {
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
				if (temp == E.UsedCoupon.at(j)) {
					//존재, 사용함
					E.setState(4, 3, 0, 4, 0);
					exit(0);
					//에러 상태로 돌리고 종료
				}
				else {//존재하고 사용하지 않은경우, 사용하고 사용 쿠폰 벡터에 추가
					E.UsedCoupon.push_back(E.CouponData.at(i).getKey());
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
	for (int i = 0; i < E.GifticardData.size(); i++) { //Gifticon이랑 같다고 가정한 gifiticardData,Usedgifiticard
		if (temp == E.GifticardData.at(i).getKey()) { //같은 경우
			for (int j = 0; j < E.UsedGifticard.size(); j++) {
				if (temp == E.UsedGifticard.at(j)) {
					//존재, 사용함
					E.setState(4, 7, 0, 4, 0);
					exit(0);
					//에러 상태로 돌리고 종료
				}
				else {//존재하고 사용하지 않은경우, 사용하고 사용 상품권 벡터에 추가
					E.UsedGifticard.push_back(E.GifticardData.at(i).getKey());
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

	Bucket temp = E.user.getBucket();
	
	if (11 <= y && y <= 15) {
		if (86 <= x && x <= 97) {
			//영수증 출력
			billSetting(temp);
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

	//cout << "현금을 입력하시겠습니까?(y/n 으로만 표시)" << endl;
	string temp = getInput(0);

	if (temp == "y")//입력 성공 시)
		E.setState(6, 5, 0, 0, 0);
	else if (temp == "n")//입력 실패 시)
		E.setState(6, 0, 0, 3, 0);
	else {
		//아무것도 안함
	}
}

void action_casherr(Everything E) {
	E.e.Errorview(3);
	E.setState(6, 0, 0, 0, 0);
}

void mainMouse(Everything& E, pair<int, int> mousepos) { //입력받은 마우스의 좌표를 전달받고 클래스 호출하는 함수
	switch (E.state[0]) {
	case 100: { //초기화면
		action_start(E);
		setState(E.state, 1, 0, 1, 0, 1);
		break;
	}
	case 0: { //X
		break;
	}
	case 1: {
		switch (E.state[1]) {
		case 0: { //메뉴-X-장바구니-X-회원/비회원/키프티콘 버튼
		   //가용 버튼: 대분류, 메뉴, 기프티콘 버튼, 결제 버튼(장바구니 목록 있을 시)
		   //대분류: 바뀌는 것 없음
		   //메뉴: 1,2,1,0,1
		   //기프티콘 버튼: 1,1,1,0,1
		   //회원 결제:3,0,0,0,0
		   //비회원 결제: 4,0,0,0,0

			action_menuBuy(E, mousepos);

			break;
		}
		case 1: { //메뉴-기프티콘입력-장바구니
			switch (E.state[3]) {
			case 0: {//메뉴-기프티콘입력-장바구니-X
			   //가용 버튼: 없음, 기프티콘 코드만 입력 가능->상태를 바꿔준다 1,2,1,0,1 입력 성공시 옵션창 생성
			   //입력 성공: 1,0,1,0,1
			   //입력 실패: 1,1,1,1,1

				action_gifticon(E);
				break;
			}
			case 1: {//메뉴-기프티콘입력-장바구니-에러
			   //가용 버튼: 없음, 에러가 진행되며 에러 시간동안은 아무것도 못함
			   //에러 시간이 지나면 1,1,1,0,1

				action_giftierr(E);
				break;
			}
			default: {
				break;
			}
			}
			break;
		}
		case 2: { //메뉴-옵션-장바구니-X-X
		   //가용 버튼: 사이즈(R,L), 샷추가(1,2,3), 크림여부(O,X), 온도(ICE,HOT), 확인
		   //모든 종류를 최소한 하나의 버튼은 눌러야 확인 버튼 가능
		   //성공적 확인 버튼 누르면 장바구니 추가, 상태는 1,0,1,0,1

			action_option(E, mousepos);
			break;
		}
		default: {


		}
				 break;
		}
	}
	case 2: {
		switch (E.state[3]) {//로그인-X
		case 0: {//로그인-X-X-X-X
		   //가용 버튼 없음, 아이디만 입력하도록 함
		   //존재하는 ID일 경우 성공, 성공 시 상태는 3,0,0,0,0
		   //실패하면 에러가 뜨고 상태는 2,0,0,2,0

			action_login(E);
		}
		case 2: {//로그인-X-X-에러-X
		   //아무 동작 못하고 에러가 끝나면 상태 변경과 동시에 동작가능
		   //에러가 끝나면 상태는 2,0,0,0,0

			action_logerr(E);
		}
		}
	}
	case 3: {
		switch (E.state[1]) {
		case 0: { //마일리지 사용, 적립
		   //가용 버튼: 사용, 적립
		   //사용 시: 3,6,0,0,0
		   //적립 시: 4,0,0,0,0

			action_mileageControl(E, mousepos);
			break;
		}
		case 6: { //마일리지 사용, 적립 - 마일리지 액수 입력
		   //가용버튼 없음, 마일리지 얼마 사용할 지 입력
		   //입력이 성공적으로 끝나고 마일리지 사용이 되면
		   //상태는: 4,0,0,0,0

			action_mileageUse(E, mousepos);
			break;
		}
		default: {

		}
		}
		break;
	}
	case 4: {
		switch (E.state[1]) {
		case 0: { //할인
		   //가능한 행동 -> 쿠폰,상품권,이전,다음
		   //쿠폰 버튼 누를 시 -> [4,3,0,0,0] (할인 - 쿠폰)
		   //상품권 버튼 누를 시 -> [4,7,0,0,0] (할인 - 상품권)
		   //이전 버튼 누를 시 -> 회원 = [3,0,0,0,0] (마일리지 사용/적립) / 비회원 = [1,0,1,0,1](메뉴 + 장바구니 +비회원 결제)
		   //다음 버튼 누를 시 -> [4,4,0,0,0](결제 수단 선택)
			switch (E.state[2]) {
			case 0: { //장바구니 안 띄움(비활성화)
				switch (E.state[3]) {
				case 0: { //에러 비활성화
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 

						action_discountControl(E, mousepos);
						break;
					}
					}
				}
				}
			}
			}
		}
		case 3: { //할인 - 쿠폰 
		   //가능한 행동 -> 쿠폰 입력
		   //입력 성공 시 -> [4,0,0,0,0] (이전으로 되돌아감) 
		   //입력 실패 시 -> [4,3,0,4,0] (에러 띄움)
			switch (E.state[2]) {
			case 0: { //장바구니 안 띄움(비활성화)
				switch (E.state[3]) {
				case 0: { //에러 비활성화
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_coupon(E);
						break;
					}
					}
				}
				case 4: { //쿠폰,상품권 에러메세지 활성화
				//가능한 행동 -> 없음
				//에러 띄우고 슬립 후 [4,3,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_couponerr(E);
						break;
					}
					}
				}
				}
			}
			}
		}
		case 4: { //결제 수단 선택
		//가능한 행동 -> 카드,현금
		//카드 선택 시 -> [5,0,0,0,0]
		//현금 선택 시 -> [6,0,0,0,0]
			switch (E.state[2]) {
			case 0: { //장바구니 안 띄움(비활성화)
				switch (E.state[3]) {
				case 0: { //에러 비활성화
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_payMethod(E, mousepos);
						break;
					}
					}
				}
				}
			}
			}
		}
		case 7: { //할인 - 상품권
		   //가능한 행동 -> 상품권 입력
		   //입력 성공 시 -> [4,0,0,0,0] (이전으로 되돌아감) 
		   //입력 실패 시 -> [4,7,0,4,0] (에러 띄움)
			switch (E.state[2]) {
			case 0: { //장바구니 안 띄움(비활성화)
				switch (E.state[3]) {
				case 0: { //에러 비활성화
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_gifiticard(E);
						break;
					}
					}
				}
				case 4: { //쿠폰,상품권 에러메세지 활성화
				//가능한 행동 -> 없음
				//에러 띄우고 슬립 후 [4,7,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_gifitierr(E);
						break;
					}
					}
				}
				}
			}
			}
		}
		default: {

		}
		}
	}
	case 5: { //카드 입력
		switch (E.state[1]) {
		case 0: { //카드 입력
		   //가능한 행동 -> 카드 입력 성공 or 실패
		   //입력 성공 시 -> [5,5,0,0,0]으로 이동
		   //입력 실패 시 -> [5,0,0,3,0]으로 이동
			switch (E.state[2]) {
			case 0: { //장바구니 안 띄움(비활성화)
				switch (E.state[3]) {
				case 0: { //에러 비활성화
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 

						action_cardinput(E);
						break;
					}
					}
				}
				case 3: { //결제 에러 메세지 활성화
				   //가능한 행동 -> 없음
				   //에러 띄우고 슬립 후 [5,0,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_carderr(E);
						break;
					}
					}
				}
				}
			}
			}
		}
		case 5: { //카드 입력 - 영수증
		   //가능한 행동 -> 출력,미출력
		   //출력 선택 시 -> 파일 입출력으로 대체
		   //미출력 선택 시 -> 최종화면 출력
			switch (E.state[2]) {
			case 0: { //장바구니 안 띄움(비활성화)
				switch (E.state[3]) {
				case 0: { //에러 비활성화
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_bill(E, mousepos);
						break;
					}
					}
				}
				}
			}
			}
		}
		default: {

		}
		}
	}
	case 6: { //현금 입력
		switch (E.state[1]) {
		case 0: { //현금 입력
		   //가능한 행동 -> 넣을 돈 입력
		   //입력 성공 시(넣을 돈 > 총 결제 금액) -> [6,5,0,0,0]으로 이동
		   //입력 실패 시(넣을 돈 < 총 결제 금액) -> [6,0,0,3,0]으로 이동
			switch (E.state[2]) {
			case 0: { //장바구니 안 띄움(비활성화)
				switch (E.state[3]) {
				case 0: { //에러 비활성화
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_cashinput(E);
						break;
					}
					}
				}
				case 3: { //결제 에러 메세지 활성화
				   //가능한 행동 -> 없음
				   //에러 띄우고 슬립 후 [6,0,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_casherr(E);
						break;
					}
					}
				}
				}
			}
			}
		}
		case 5: { //현금 입력 - 영수증
		   //가능한 행동 -> 출력,미출력
		   //출력 선택 시 -> 파일 입출력으로 대체
		   //미출력 선택 시 -> 최종화면 출력
			switch (E.state[2]) {
			case 0: { //장바구니 안 띄움(비활성화)
				switch (E.state[3]) {
				case 0: { //에러 비활성화
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						break;
					}
					}
				}
				}
			}
			}
		}
		default: {

		}
		}
	}
	default: {
		//error
	}

	}
}
void initShop(Shop& shop) { //Shop -> Menuiist -> Menu 초기화
	ifstream in("shop.txt");
	int tpcounts; //분류의 갯수
	if (in.is_open()) {
		in >> tpcounts; //숫자 입력받음
		for (int i = 0; i < tpcounts; i++) {
			string tpname; //타입이름
			int elementcounts; //해당 타입의 메뉴 갯수
			in >> tpname; //해당 타입의 메뉴 이름
			in >> elementcounts; //해당 타입에 해당하는 메뉴 갯수
			//menulist 생성
			Menulist* tempList = new Menulist(tpname);
			//in.ignore(256, '\n');
			//Menulist에 구체적인 menu를 추가
			for (int j = 0; j < elementcounts; j++) {
				string temp;
				//getline(in, temp);
				in >> temp; //파일 한 줄 읽어옴 
				vector<string> S = split(temp, '/');
				//메뉴 생성
				Menu* tempMenu = new Menu(S.at(0), S.at(1), S.at(2), S.at(3), S.at(4), S.at(5));
				tempList->addMenu(*tempMenu);
				delete(tempMenu);
			}
			shop.addMenulists(*tempList);
			delete(tempList);
		}
		in.close();
	}
}
void initUser(User& user) { //사용자 초기화
   //아래에서 생성이 되는데 다시 할 필요가 있는가?
   //User는 생성자에서 초기화가 됨
   //가독성을 위해서 일단 선언해둠
}
void initMileage(vector<Mileage>& mData) { //mileage.txt에 있는 마일리지들 가져와서 MileageData 완성하기
	ifstream in("mileage.txt");
	if (in.is_open()) {
		int num; //마일리지 데이터 갯수
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString;//한 줄 읽어오기
			vector<string> S = split(tempString, '/'); //잘라오기
			Mileage* tempMileage = new Mileage(S.at(0), S.at(1));
			mData.push_back(*tempMileage);
			delete(tempMileage);
		}
		in.close();
	}
}
void initGifti(vector<Gifticon>& gData) { //사용가능한 기프티콘 데이터 불러오기
	ifstream in("gifti.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //한 줄 읽어오기
			vector<string> S = split(tempString, '/'); //잘라오기 
			//메뉴 생성
			Menu* tempMenu = new Menu(S.at(1), S.at(2), S.at(3), S.at(4), S.at(5), S.at(6), true);
			Gifticon* tempGifti = new Gifticon(*tempMenu, S.at(0));
			gData.push_back(*tempGifti);
			delete(tempGifti);
			delete(tempMenu);
		}
	}
	in.close();
}

void setUsedGifti(vector<string>& usedGifti) { //소진된 기프티콘 key들을 업데이트함
	remove("UsedGifti.txt");
	ofstream out("UsedGifti.txt");
	string temp;

	for (int i = 0; i < usedGifti.size(); i++) {
		temp = usedGifti.at(i);
		out << temp
			<< endl;
	}
	out.close();
}
void initUsedGifti(vector<string>& usedGifti) { //소진된 기프티콘 key들을 불러옴
	ifstream in("UsedGifti.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //한 줄 읽어오기

			usedGifti.push_back(tempString);
		}
	}
	in.close();
}
void initgiftiCard(vector<giftiCard>& gcData){  //사용가능한 상품권 데이터 불러오기
	ifstream in("gifticard.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //한 줄 읽어오기
			vector<string> S = split(tempString, '/'); //잘라오기
			//상품권 생성
			giftiCard* gcard = new giftiCard(S.at(0), stoi(S.at(1)));
			gcData.push_back(*gcard);
			delete(gcard);
		}
	}
}
void initUsedGiftiCard(vector<string>& usedGiftiCard) { //소진된 상품권 key들을 불러옴
	ifstream in("UsedGiftiCard.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //한 줄 읽어오기

			usedGiftiCard.push_back(tempString);

		}
	}
	in.close();
}
void setUsedGiftiCard(vector<string>& UsedGiftiCard) { //소진된 상품권 key들을 업데이트함
	remove("UsedGiftiCard.txt");
	ofstream out("UsedGiftiCard.txt");
	string temp;

	for (int i = 0; i < E.UsedGifticard.size(); i++) {
		temp = E.UsedGifticard.at(i);
		out << temp
			<< endl;
	}
	out.close();
}
void initCoupon(vector<Coupon>& cData) { //사용가능한 쿠폰 데이터 불러오기
	ifstream in("coupon.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //한 줄 읽어오기
			vector<string> S = split(tempString, '/'); //잘라오기
			//쿠폰 생성
			Coupon* coup = new Coupon(S.at(0), stoi(S.at(1))); //key, value
			cData.push_back(*coup);
			delete(coup);
		}
	}
}
void initUsedCoupon(vector<string>& usedCoupon) { //소진된 쿠폰 key들을 불러옴
	ifstream in("UsedCoupon.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //한 줄 읽어오기

			usedCoupon.push_back(tempString);

		}
	}
	in.close();
}
void setUsedCoupon(vector<string>& usedCoupon) { //소진된 쿠폰 key들을 업데이트함
	remove("UsedCoupon.txt");
	ofstream out("UsedCoupon.txt");
	string temp;

	for (int i = 0; i < E.UsedCoupon.size(); i++) {
		temp = E.UsedCoupon.at(i);
		out << temp
			<< endl;
	}
	out.close();
}

void init(Shop& shop, User& user, vector<Mileage>& mdata, vector<Gifticon>& gdata) { //전체 초기화
	initShop(shop); //Shop Class를 생성, 초기화 - > 파일입출력을 통해 불러오기
	initUser(user); //User Class를 생성, 초기화 -> Backet class 또한 초기화된다.
	initMileage(mdata); // Mileage Class를 생성, 초기화 : 아직 불확실한 부분이다.
	initGifti(gdata);//Gifticon Class를 생성, 초기화 -> 파일입출력을 통해 불러오기

	//Box1, Box2, Box3, Box4, Box5 생성. 초기화면으로 초기화
}
void billSetting(Bucket& b) { //영수증을 파일에 출력한다.
   //bucket 정보를 바탕으로 출력한다.
	ofstream ou("bill.txt");
	if (ou.is_open()) {
		ou << "<<<영수증은 다음과 같습니다.>>>" << endl;
		ou << "-------------------------------------" << endl;
		vector<Cmenu> mlist = b.getMenulist();
		ou << "번호 | 이름 | 개당 가격 | 갯수 | 총액" << endl;
		ou << "-------------------------------------" << endl;
		for (int i = 0; i < mlist.size(); i++) {
			Menu m = mlist.at(i).getMenu();
			int price = mlist.at(i).getTotal();
			int count = mlist.at(i).getCnt();
			ou << i + 1 << " : " << m.getName() << " " << price << " 원" << " 개" << price * count << " 원" << endl;
		}
	}
}
void linkMileage(User& user, vector<Mileage>& mdata) { //사용자의 Mileage를 MileageData에서 찾아서 연결해줌
	string userkey = user.getKey();
	//비교를 해야 하는데 -> 그냥 for문을 돌려버리기
	for (int i = 0; i < mdata.size(); i++) {
		Mileage m = mdata.at(i);
		string mkey = m.getKey();
		if (userkey == mkey) { //현재 유저의 키와 db의 key가 일치할 때
			user.setMileage(m); //링크 시켜준다.
			break;
		}
	}
}
int main() {

	//Everything E;

	bool flag = true;


	init(E.shop, E.user, E.MileageData, E.GiftiData); //초기화
	Bucket b = E.user.getBucket();
	Menu* m = new Menu("메뉴1", "1", "1", "1", "1", "1");
	Cmenu *mc = new Cmenu(*m);
	b.add(*mc);
	Bucket alpha = E.user.getBucket();
	billSetting(alpha);

	//billSetting(E.user.getBucket());
	billSetting(b);
	//vector<int> v(5);
	/*
	while (flag) {
	   pair<int, int> mousepos = mouseEvent();
	   cout << mousepos.first << mousepos.second << endl;
	   mainMouse(E, mousepos);

	}
	*/
	return 0;
}
