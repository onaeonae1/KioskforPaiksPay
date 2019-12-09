#include "init.h"

using namespace std;

extern Everything E;

void initShop(Shop* shop) { //Shop -> Menuiist -> Menu �ʱ�ȭ
	ifstream in("shop.txt");
	int tpcounts; //�з��� ����
	if (in.is_open()) {
		in >> tpcounts; //���� �Է¹���
		for (int i = 0; i < tpcounts; i++) {
			string tpname; //Ÿ���̸�
			int elementcounts; //�ش� Ÿ���� �޴� ����
			in >> tpname; //�ش� Ÿ���� �޴� �̸�
			in >> elementcounts; //�ش� Ÿ�Կ� �ش��ϴ� �޴� ����
			//menulist ����
			Menulist* tempList = new Menulist(tpname);
			//in.ignore(256, '\n');
			//Menulist�� ��ü���� menu�� �߰�
			for (int j = 0; j < elementcounts; j++) {
				string temp;
				//getline(in, temp);
				in >> temp; //���� �� �� �о�� 
				vector<string> S = split(temp, '/');
				//�޴� ����
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
void initUser(User* user) { //����� �ʱ�ȭ
   //�Ʒ����� ������ �Ǵµ� �ٽ� �� �ʿ䰡 �ִ°�?
   //User�� �����ڿ��� �ʱ�ȭ�� ��
   //�������� ���ؼ� �ϴ� �����ص�
}
void initMileage(vector<Mileage>& mData) { //mileage.txt�� �ִ� ���ϸ����� �����ͼ� MileageData �ϼ��ϱ�
	ifstream in("mileage.txt");
	if (in.is_open()) {
		int num; //���ϸ��� ������ ����
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString;//�� �� �о����
			vector<string> S = split(tempString, '/'); //�߶����
			Mileage* tempMileage = new Mileage(S.at(0), S.at(1));
			mData.push_back(*tempMileage);
			delete(tempMileage);
		}
		in.close();
	}
}
void initGifti(vector<Gifticon>& gData) { //��밡���� ����Ƽ�� ������ �ҷ�����
	ifstream in("gifti.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //�� �� �о����
			vector<string> S = split(tempString, '/'); //�߶���� 
			//�޴� ����
			Menu* tempMenu = new Menu(S.at(1), S.at(2), S.at(3), S.at(4), S.at(5), S.at(6), true);
			Gifticon* tempGifti = new Gifticon(*tempMenu, S.at(0));
			gData.push_back(*tempGifti);
			delete(tempGifti);
			delete(tempMenu);
		}
	}
	in.close();
}

void setUsedGifti(vector<string>& usedGifti) { //������ ����Ƽ�� key���� ������Ʈ��
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
void initUsedGifti(vector<string>& usedGifti) { //������ ����Ƽ�� key���� �ҷ���
	ifstream in("UsedGifti.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //�� �� �о����

			usedGifti.push_back(tempString);
		}
	}
	in.close();
}
void initgiftiCard(vector<giftiCard>& gcData) {  //��밡���� ��ǰ�� ������ �ҷ�����
	ifstream in("gifticard.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //�� �� �о����
			vector<string> S = split(tempString, '/'); //�߶����
			//��ǰ�� ����
			giftiCard* gcard = new giftiCard(S.at(0), stoi(S.at(1)));
			gcData.push_back(*gcard);
			delete(gcard);
		}
	}
}
void initUsedGiftiCard(vector<string>& usedGiftiCard) { //������ ��ǰ�� key���� �ҷ���
	ifstream in("UsedGiftiCard.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //�� �� �о����

			usedGiftiCard.push_back(tempString);

		}
	}
	in.close();
}
void setUsedGiftiCard(vector<string>& UsedGiftiCard) { //������ ��ǰ�� key���� ������Ʈ��
	remove("UsedGiftiCard.txt");
	ofstream out("UsedGiftiCard.txt");
	string temp;
	if (out.is_open()) {
		out << UsedGiftiCard.size(); //���� ���
		for (int i = 0; i <UsedGiftiCard.size(); i++) {
			temp = UsedGiftiCard.at(i);
			out << temp << endl;
		}
	}
	out.close();
}
void initCoupon(vector<Coupon>& cData) { //��밡���� ���� ������ �ҷ�����
	ifstream in("coupon.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //�� �� �о����
			vector<string> S = split(tempString, '/'); //�߶����
			//���� ����
			Coupon* coup = new Coupon(S.at(0), stoi(S.at(1))); //key, value
			cData.push_back(*coup);
			delete(coup);
		}
	}
}
void initUsedCoupon(vector<string>& usedCoupon) { //������ ���� key���� �ҷ���
	ifstream in("UsedCoupon.txt");
	if (in.is_open()) {
		int num;
		in >> num;
		while (num--) {
			string tempString;
			in >> tempString; //�� �� �о����

			usedCoupon.push_back(tempString);

		}
	}
	in.close();
}
void setUsedCoupon(vector<string>& usedCoupon) { //������ ���� key���� ������Ʈ��
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
	vector<string>& UsedCoupon, vector<string>& UsedGifticard) { //��ü �ʱ�ȭ
	initShop(shop); //Shop Class�� ����, �ʱ�ȭ - > ����������� ���� �ҷ�����
	initUser(user); //User Class�� ����, �ʱ�ȭ -> Backet class ���� �ʱ�ȭ�ȴ�.
	initMileage(MileageData); // Mileage Class�� ����, �ʱ�ȭ : ���� ��Ȯ���� �κ��̴�.
	initGifti(GiftiData);//Gifticon Class�� ����, �ʱ�ȭ -> ����������� ���� �ҷ�����
	initCoupon(CouponData);
	initgiftiCard(GifticardData);
	initUsedGifti(UsedGifti);
	initUsedCoupon(UsedCoupon);
	initUsedGiftiCard(UsedGifticard);
	//Box1, Box2, Box3, Box4, Box5 ����. �ʱ�ȭ������ �ʱ�ȭ
}
void terminator(vector<string>& UsedGifti, 
	vector<string>& UsedCoupon, vector<string>& UsedGifticard) {
	setUsedCoupon(UsedCoupon);
	setUsedGifti(UsedGifti);
	setUsedGiftiCard(UsedGifticard);
}
void linkMileage(User& user, vector<Mileage>& mdata) { //������� Mileage�� MileageData���� ã�Ƽ� ��������
	string userkey = user.getKey();
	//�񱳸� �ؾ� �ϴµ� -> �׳� for���� ����������
	for (int i = 0; i < mdata.size(); i++) {
		Mileage m = mdata.at(i);
		string mkey = m.getKey();
		if (userkey == mkey) { //���� ������ Ű�� db�� key�� ��ġ�� ��
			user.setMileage(m); //��ũ �����ش�.
			break;
		}
	}
}