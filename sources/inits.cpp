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
void initUsedGifti(vector<string>& usedGifti) { //사용가능한 기프티콘 데이터 불러오기
	ifstream in("UsedGifti.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //한 줄 읽어오기
			
			usedGifti.push_back(*tempGifti);
			delete(tempGifti);
			delete(tempMenu);
		}
	}
	in.close();
}
void setUsedGifti(Everything E) {
	ofstream out("UsedGifti.txt");
	Gifticon temp;

	for (int i = 0; i < E.usedGifti.size(); i++) {
		temp = E.usedGifti.at(i);
		out << temp.getKey()
			<<endl;
	}
	out.close();
}
void initCoupon(vector<Coupon>& cData) { //사용가능한 쿠폰 불러오기
	ifstream in("coupon.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //한 줄 읽어오기
			vector<string> S = split(tempString, '/'); //잘라오기
			//쿠폰 생성
			Coupon* coup= new Coupon(S.at(0), stoi(S.at(1))); //key, value
			cData.push_back(*coup);
			delete(coup);
		}
	}
}
void initgiftiCard(vector<giftiCard>& gcData) {
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
