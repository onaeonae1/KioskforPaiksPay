#include "init.h"

using namespace std;

extern Everything E;

void initShop(Shop* shop) { //Shop -> Menuiist -> Menu 초기화
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
			shop->addMenulists(*tempList);
			delete(tempList);
		}
		in.close();
	}
}
void initUser(User* user) { //사용자 초기화
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
	if (out.is_open()) {
		out << usedGifti.size() << endl;
		for (int i = 0; i < usedGifti.size(); i++) {
			temp = usedGifti.at(i);
			out << temp << endl;
		}
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
void initgiftiCard(vector<giftiCard>& gcData) {  //사용가능한 상품권 데이터 불러오기
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
	if (out.is_open()) {
		out << UsedGiftiCard.size(); //갯수 출력
		for (int i = 0; i <UsedGiftiCard.size(); i++) {
			temp = UsedGiftiCard.at(i);
			out << temp << endl;
		}
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
	if (out.is_open()) {
		out << usedCoupon.size() << endl;
		for (int i = 0; i < usedCoupon.size(); i++) {
			temp = usedCoupon.at(i);
			out << temp << endl;
		}
	}
	out.close();
}

void init(Shop* shop, User* user, vector<Gifticon>& GiftiData, vector<Mileage>& MileageData,
	vector<Coupon>& CouponData, vector<giftiCard>& GifticardData, vector<string>& UsedGifti,
	vector<string>& UsedCoupon, vector<string>& UsedGifticard) { //전체 초기화
	initShop(shop); //Shop Class를 생성, 초기화 - > 파일입출력을 통해 불러오기
	initUser(user); //User Class를 생성, 초기화 -> Backet class 또한 초기화된다.
	initMileage(MileageData); // Mileage Class를 생성, 초기화 : 아직 불확실한 부분이다.
	initGifti(GiftiData);//Gifticon Class를 생성, 초기화 -> 파일입출력을 통해 불러오기
	initCoupon(CouponData);
	initgiftiCard(GifticardData);
	initUsedGifti(UsedGifti);
	initUsedCoupon(UsedCoupon);
	initUsedGiftiCard(UsedGifticard);
	//Box1, Box2, Box3, Box4, Box5 생성. 초기화면으로 초기화
}
void terminator(vector<string>& UsedGifti, 
	vector<string>& UsedCoupon, vector<string>& UsedGifticard) {
	setUsedCoupon(UsedCoupon);
	setUsedGifti(UsedGifti);
	setUsedGiftiCard(UsedGifticard);
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