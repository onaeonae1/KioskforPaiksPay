#include<iostream>
#include<string>
#include<Windows.h>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<vector>
#include"utils.h"
#include"box.h"
#include"Model.h"
#include"User.h"
#include"Bucket.h"
#include"Gifticon.h"
#define x first
#define y second
using namespace std;
int *setState(int *state, int num1, int num2, int num3, int num4, int num5) {
	state[0] = num1;
	state[1] = num2;
	state[2] = num3;
	state[3] = num4;
	state[4] = num5;
	return state;
}
class Everything {
public:
	Shop shop;
	Gifticon gifticon;
	Mileage mileage;
	User user;
	Bucket bucket;

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
};
void mainMouse(Everything E, pair<int, int> mousepos) { //입력받은 마우스의 좌표를 전달받고 클래스 호출하는 함수

	switch (E.state[0]) {
	case 100: { //초기화면
		//action_start();
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

			//action_menuBuy();

			break;
		}
		case 1: { //메뉴-기프티콘입력-장바구니
			switch (E.state[3]) {
			case 0: {//메뉴-기프티콘입력-장바구니-X
				//가용 버튼: 없음, 기프티콘 코드만 입력 가능->상태를 바꿔준다 1,2,1,0,1 입력 성공시 옵션창 생성
				//입력 성공: 1,0,1,0,1
				//입력 실패: 1,1,1,1,1

				//action_gifiticon();
				break;
			}
			case 1: {//메뉴-기프티콘입력-장바구니-에러
				//가용 버튼: 없음, 에러가 진행되며 에러 시간동안은 아무것도 못함
				//에러 시간이 지나면 1,1,1,0,1

				//action_giftierr();
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

			//action_option();
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

			//action_login();
		}
		case 2: {//로그인-X-X-에러-X
			//아무 동작 못하고 에러가 끝나면 상태 변경과 동시에 동작가능
			//에러가 끝나면 상태는 2,0,0,0,0

			//action_logerr();
		}
		}
	}
	case 3: {
		switch (E.state[1]) {
		case 0: { //마일리지 사용, 적립
			//가용 버튼: 사용, 적립
			//사용 시: 3,6,0,0,0
			//적립 시: 4,0,0,0,0

			//action_mileageControl();
			break;
		}
		case 6: { //마일리지 사용, 적립 - 마일리지 액수 입력
			//가용버튼 없음, 마일리지 얼마 사용할 지 입력
			//입력이 성공적으로 끝나고 마일리지 사용이 되면
			//상태는: 4,0,0,0,0

			//action_milageUse();
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

						//action_discountControl();
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
						//action_coupon();
						break;
					}
					}
				}
				case 4: { //쿠폰,상품권 에러메세지 활성화
				//가능한 행동 -> 없음
				//에러 띄우고 슬립 후 [4,3,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
					//	action_couponerr();
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
						//action_payMethod();
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
						//action_gifiticard();
						break;
					}
					}
				}
				case 4: { //쿠폰,상품권 에러메세지 활성화
				//가능한 행동 -> 없음
				//에러 띄우고 슬립 후 [4,7,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						//action_gifitierr();
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

					//	action_cardinput();
						break;
					}
					}
				}
				case 3: { //결제 에러 메세지 활성화
				   //가능한 행동 -> 없음
				   //에러 띄우고 슬립 후 [5,0,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						//action_carderr();
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
						//action_bill();
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
						//action_cashinput();
						break;
					}
					}
				}
				case 3: { //결제 에러 메세지 활성화
				   //가능한 행동 -> 없음
				   //에러 띄우고 슬립 후 [6,0,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						//action_casherr();
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
void init(Shop& shop, User& user, vector<Mileage>& mdata, vector<Gifticon>& gdata) { //전체 초기화
	initShop(shop); //Shop Class를 생성, 초기화 - > 파일입출력을 통해 불러오기
	initUser(user); //User Class를 생성, 초기화
	initMileage(mdata); // Mileage Class를 생성, 초기화 : 아직 불확실한 부분이다.
	initGifti(gdata);//Gifticon Class를 생성, 초기화 -> 파일입출력을 통해 불러오기
	//Backet Class를 생성, 초기화
	//Box1, Box2, Box3, Box4, Box5 생성. 초기화면으로 초기화
}
void deleteGifti(string key, vector<Gifticon>& gData) { //사용한 기프티콘을 key에 따라 txt 에서 제거
	/* 미완성 
	ifstream in("gifti.txt");
	if (in.is_open()) {
		int num;
		in >> num; //gifti 갯수
	}
	for (int i = 0; i < gData.size(); i++) {
		Gifticon& g = gData.at(i);
		string gkey = g.getKey();
		if (key == gkey) { //일치 -> 삭제

		}
	}
	*/
}
void billSetting() { //영수증을 파일에 출력한다.

}
void linkMileage(User& user, vector<Mileage>& mdata) { //사용자의 Mileage를 MileageData에서 찾아서 연결해줌
	string userkey = user.getKey();
	//비교를 해야 하는데 -> 그냥 for문을 돌려버리기
	for (int i = 0; i < mdata.size(); i++) {
		Mileage m = mdata.at(i);
		string mkey = m.getKey();
		if (userkey == mkey) { //일치
			user.setMileage(m); //링크 시켜준다.
			break;
		}
	}
}
int main() {
	Shop Coffeeshop; //사용할 메뉴
	User CurrentUser; //현재 사용자
	vector<Mileage> MileageData; //전체 마일리지 데이터
	vector<Gifticon> GiftiData; //사용 가능한 기프티콘 데이터
	bool flag = true;
	//	startView();
   //	system("cls");

	int state[5];
	init(Coffeeshop, CurrentUser, MileageData, GiftiData); //초기화
	while (flag) {
		pair<int, int> mousepos = mouseEvent();
		cout << mousepos.first << mousepos.second << endl;
		mainMouse(state, mousepos);
	}
	return 0;
}
