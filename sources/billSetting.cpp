#include "billSetting.h"

using namespace std;

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