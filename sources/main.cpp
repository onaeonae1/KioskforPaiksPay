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
void mainMouse(int *state, pair<int, int> mousepos) { //입력받은 마우스의 좌표를 전달받고 클래스 호출하는 함수
	int a = mousepos.first;
	int b = mousepos.second;

	//state 문제는 everything이 완성되면 합쳐서 수정하기!
	switch (state[0]) {
	case 0: { //초기화면
		break;
	}
	case 1: {
		switch (state[1]) {
		case 0: { //메뉴

			break;
		}
		case 1: { //메뉴-기프티콘입력

			break;
		}
		case 2: { //메뉴-옵션

			break;
		}
		case 4: { //메뉴-결제선택

			break;
		}
		default: {

		}
		}
		break;
	}

	case 2: {
		switch (state[1]) {
		case 0: { //로그인

			break;
		}
		default: {

		}
		}
		break;
	}
	case 3: {
		switch (state[1]) {
		case 0: { //마일리지 사용, 적립

			break;
		}
		case 6: { //마일리지 사용, 적립 - 마일리지 액수 입력

			break;
		}
		default: {

		}
		}
		break;
	}
	case 4: {
		switch (state[1]) {
		case 0: { //할인

			break;
		}
		case 3: { //할인 - 쿠폰

			break;
		}
		case 7: { //할인 - 상품권

			break;
		}
		default: {

		}
		}
		break;
	}
	case 5: {
		switch (state[1]) {
		case 0: { //카드 입력

			break;
		}
		case 5: { //카드 입력 - 영수증

			break;
		}
		default: {

		}
		}
		break;
	}
	case 6: {
		switch (state[1]) {
		case 0: { //현찰 입력

			break;
		}
		case 5: { //현찰 입력 - 영수증

			break;
		}
		default: {

		}
		}
		break;
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
	//미완성
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
