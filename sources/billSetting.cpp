#include "billSetting.h"

using namespace std;

void billSetting(Bucket& b) { //�������� ���Ͽ� ����Ѵ�.
   //bucket ������ �������� ����Ѵ�.
	ofstream ou("bill.txt");
	if (ou.is_open()) {
		ou << "<<<�������� ������ �����ϴ�.>>>" << endl;
		ou << "-------------------------------------" << endl;
		vector<Cmenu> mlist = b.getMenulist();
		ou << "��ȣ | �̸� | ���� ���� | ���� | �Ѿ�" << endl;
		ou << "-------------------------------------" << endl;
		for (int i = 0; i < mlist.size(); i++) {
			Menu m = mlist.at(i).getMenu();
			int price = mlist.at(i).getTotal();
			int count = mlist.at(i).getCnt();
			ou << i + 1 << " : " << m.getName() << " " << price << " ��" << " ��" << price * count << " ��" << endl;
		}
	}
}