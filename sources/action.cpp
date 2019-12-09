#include "action.h"

using namespace std;

string getInput(int print) {//���׶�̸� ����ؾ� �ϸ� ���� x, �ƴϸ� 0
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


	temp = _getch();
	for (i = 0; !((char)temp == '\n' || (char)temp == '\r'); i++) {
		if (print) {
			if (i < 0) i = 0;
			if (temp == 8) { // backspace�� ��
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
				if (print + i * 2 <= end - 1) printf("��");
			}
		}
		temp = _getch();
	}

	return result;
}


void action_start(Everything E) {
	char c = NULL;
	if (cin >> c) { //�Է� ���� �� ���� ����
		E.setState(1, 0, 1, 0, 1);
	}
}

void action_menuBuy(Everything E, pair<int, int> input) {
	int x = input.first;
	int y = input.second;

	if (6 <= y && y <= 8) {
		if (4 <= x && x <= 15) {
			//�޴�����Ʈ 1
			E.mb->setpage(0);
		}
		else if (18 <= x && x <= 29) {
			//�޴�����Ʈ 2
			E.mb->setpage(1);
		}
		else if (32 <= x && x <= 43) {
			//�޴�����Ʈ 3
			E.mb->setpage(2);
		}
		else if (46 <= x && x <= 57) {
			//�޴�����Ʈ 4
			E.mb->setpage(3);
		}
		else if (60 <= x && x <= 71) {
			//�޴�����Ʈ 5
			E.mb->setpage(4);
		}
	}
	else if (10 <= y && y <= 15) {
		if (4 <= x && x <= 18) {
			//�޴� 1
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(0));
		}
		else if (21 <= x && x <= 35) {
			//�޴� 2
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(1));
		}
		else if (38 <= x && x <= 52) {
			//�޴� 3
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(2));
		}
		else if (55 <= x && x <= 69) {
			//�޴� 4
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(3));
		}
		E.setState(1, 2, 1, 0, 1);
	}
	else if (17 <= y && y <= 22) {
		if (4 <= x && x <= 18) {
			//�޴� 5
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(4));
		}
		else if (21 <= x && x <= 35) {
			//�޴� 6
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(5));
		}
		else if (38 <= x && x <= 52) {
			//�޴� 7
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(6));
		}
		else if (55 <= x && x <= 69) {
			//�޴� 8
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(7));
		}
		E.setState(1, 2, 1, 0, 1);
	}
	else if (24 <= y && y <= 29) {
		if (4 <= x && x <= 18) {
			//�޴� 9
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(8));
		}
		else if (21 <= x && x <= 35) {
			//�޴� 10
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(9));
		}
		else if (38 <= x && x <= 52) {
			//�޴� 11
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(10));
		}
		else if (55 <= x && x <= 69) {
			//�޴� 12
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(11));
		}
		E.setState(1, 2, 1, 0, 1);
	}
	else if (31 <= y && y <= 36) {
		if (4 <= x && x <= 18) {
			//�޴� 13
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(12));
		}
		else if (21 <= x && x <= 35) {
			//�޴� 14
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(13));
		}
		else if (38 <= x && x <= 52) {
			//�޴� 15
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(14));
		}
		else if (55 <= x && x <= 69) {
			//�޴� 16
			E.mb->setcurrent_menu(E.shop->getMenulists().at(E.mb->getpage()).getMenus().at(15));
		}
		E.setState(1, 2, 1, 0, 1);
	}
	else if (38 <= y && y <= 40) {
		if (83 <= x && x <= 92) {
			//ȸ������
			E.setState(2, 0, 0, 0, 0);
		}
		else if (95 <= x && x <= 104) {
			//��ȸ������
			E.setState(4, 0, 0, 0, 0);
		}
		else if (107 <= x && x <= 116) {
			//����Ƽ��
			E.setState(1, 1, 1, 0, 1);
		}
	}
	else if (106 <= x && x <= 107) {//������ư
		int size = E.user->getBucket().getMenulist().size();
		int indexY = y - 22; //���° �޴� ��ư���� ���� 0�̸� 22�� ������, ù���� �޴��� ������, at(0)�ϸ��

		E.user->getBucket().add(E.user->getBucket().getMenulist().at(indexY)); //�ش� �޴� ���� +1

	}
	else if (112 <= x && x <= 113) {//���ҹ�ư
		int size = E.user->getBucket().getMenulist().size();
		int indexY = y - 22; //���° �޴� ��ư���� ���� 0�̸� 22�� ������, ù���� �޴��� ������, at(0)�ϸ��

		E.user->getBucket().minus(E.user->getBucket().getMenulist().at(indexY)); //�ش� �޴� ���� +1


	}
	else if (121 <= x && x <= 122) {//���� ��ư
		int size = E.user->getBucket().getMenulist().size();
		int indexY = y - 22; //���° �޴� ��ư���� ���� 0�̸� 22�� ������, ù���� �޴��� ������, at(0)�ϸ��

		E.user->getBucket().remove(E.user->getBucket().getMenulist().at(indexY)); //�ش� �޴� ����
	}
}
void action_gifticon(Everything E) {
	gotoxy(89, 13);

	string id = getInput(88);
	//Ű���� �Է�
	for (int i = 0; i < E.GiftiData.size(); i++) {
		if (id == E.GiftiData.at(i).getKey()) {//���� ���
			for (int j = 0; j < E.UsedGifti.size(); j++) {
				if (id == E.UsedGifti.at(j)) {
					//����, �����
					E.setState(1, 1, 1, 1, 1);
					exit(0);
					//���� ���·� ������ ����
				}
				else {//�����ϰ� ������� �������, ����ϰ� ��� ��Ƽ ���Ϳ� �߰��� �ɼ�â ���
					E.UsedGifti.push_back(E.GiftiData.at(i).getKey());
					Menu m = (E.GiftiData.at(i).getMenu()); //�� �޴� ����
					m.setIsGifti(true);

					E.mb->setcurrent_menu(m); //�޴� ����
					E.setState(1, 0, 1, 0, 1);

					exit(0);
				}
			}

		}
		else {//���絵 ����
			E.setState(1, 1, 1, 1, 1);
			exit(0);
		}
	}
}
void action_giftierr(Everything E) {
	E.e->Errorview(1);
	E.setState(1, 1, 1, 0, 1);
}
void action_option(Everything E, pair<int, int> input) {
	int x = input.first;
	int y = input.second;
	Menu wanted_menu = E.mb->getcurrent_menu();
	//Menu wanted_menu = E.shop.getMenulists().at(E.mb->getpage()).getMenus().at(E.mb->getcurrent_menu()); //���ϴ� �޴�
	Cmenu wanted_Cmenu(wanted_menu); //���ϴ� �޴��� ��ٱ��Ͽ� �ֱ� ���� ����

	vector<int> true_options; // �ش� �޴��� �ɼ� �� T�� �ɼǵ��� �ε������� ����



	//option �� true�� �ɼǵ��� �ε����鸸 ��Ƽ� ����
	for (int i = 0; i < 4; i++) {
		if (wanted_menu.getoptionSet().at(i) == true) {
			true_options.push_back(i);
		}
	}
	while (1) {
		if (5 <= y && y <= 7) {
			if (90 <= x && x <= 103) {
				//�ɼ� 1-1
				if (true_options.size() >= 1) { //�ɼ� ����
					switch (true_options.at(0)) {
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
				//�ɼ� 1-2
				if (true_options.size() >= 1) { //�ɼ� ����
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
				//�ɼ� 2-1
				if (true_options.size() >= 2) { //�ɼ� ����
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
				//�ɼ� 2-2
				if (true_options.size() >= 2) { //�ɼ� ����
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
				//�ɼ� 3-1
				if (true_options.size() >= 3) { //�ɼ� ����
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
				//�ɼ� 3-2
				if (true_options.size() >= 3) { //�ɼ� ����
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
				//�ɼ� 4-1
				if (true_options.size() >= 4) { //�ɼ� ����
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
				//�ɼ� 4-2
				if (true_options.size() >= 4) { //�ɼ� ����
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


		//�ɼ��� ����� Ŭ�� �Ǿ����� ����
		//����� �ȵ����� �ɼ��� �� ������ ���� ��ٸ�
		int count = 0;
		if (wanted_Cmenu.getMenu().getoptionSet().at(3) == false) {//���߰� Ȱ��ȭ �ȵǾ� ���� ��
			for (int i = 0; i < true_options.size(); i++) {
				if (wanted_Cmenu.getoptionManage().at(true_options.at(i)) != 0) {
					count++;
				}
			}
		}
		else {//Ȱ��ȭ �Ǿ� ���� ��
			for (int i = 0; i < true_options.size(); i++) {
				if (wanted_Cmenu.getoptionManage().at(true_options.at(i)) != 0) {//���� ��� �ɼ��� 0 �� �ƴҰ��. �Է��� �Ǿ����� ���
					count++;
				}
				else if (true_options.at(i) == 2) {//Ȱ��ȭ �Ǿ� �ִµ� i ���� 2��� i++�ؼ� �׳� ���� �ɼ� ����
					i++;
					count++;
				}
			}
		}

		//��� �ɼ��� ���� �Ǿ��� ���, �޴� �߰� ��, state �ٲٰ�, break�ؼ� ����
		if (count == true_options.size()) {
			E.user->getBucket().add(wanted_Cmenu);
			E.setState(1, 0, 1, 0, 1);
			break;
		}
	}
}
void action_login(Everything E) {
	gotoxy(20, 26);
	string id = getInput(19);
	for (int i = 0; i < E.MileageData.size(); i++) {
		if (E.MileageData.at(i).getKey() == id) {//����
			E.setState(3, 0, 0, 0, 0);//���¼���
			E.user->setKey(id);//���̵� ����
			E.user->setMileage(E.MileageData.at(i));//���ϸ�������
			break;
		}
		else {//������������
			E.setState(2, 0, 0, 2, 0);
			break;
		}
	}
	//Ű���� �Է�
	//Ű���� �Է� ����� �Ǹ� E.setState(3,0,0,0,0);
	//�α��� �����ϸ� E.setState(2,0,0,2,0);

}
void action_logerr(Everything E) {
	E.e->Errorview(2);
	E.setState(2, 0, 0, 0, 0);
}

void action_mileageControl(Everything E, pair<int, int> input) {
	int x = input.first;
	int y = input.second;

	E.user->getBucket().settotal(E.user->getBucket().gettotal());

	if (13 <= x && x <= 30) {
		if (22 <= y && y <= 29) {
			E.setState(3, 6, 0, 0, 0);
		}
	}
	else if (44 <= x && x <= 61) {
		if (22 <= y && y <= 29) {
			for (int i = 0; i < E.MileageData.size(); i++) {
				if (E.MileageData.at(i).getKey() == E.user->getKey()) {//����
					E.MileageData.at(i).setValue(E.MileageData.at(i).getValue() + E.user->getBucket().gettotal() / 10);
					E.setState(4, 0, 0, 0, 0);// ���ϸ��� ������ ���Ϳ� 10�ۼ�Ʈ ���� �� ���º���
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
			//���ϸ��� 1000�� �߰� ���
			if (E.user->getBucket().gettotal() >= 1000) {
				E.user->getBucket().settotal(-1000);
				E.user->setUsedmileage(1000);
			}
		}
		else if (95 <= x && x <= 104) {
			//���ϸ��� 3000�� �߰� ���
			if (E.user->getBucket().gettotal() >= 3000) {
				E.user->getBucket().settotal(-3000);
				E.user->setUsedmileage(3000);
			}
		}
		else if (107 <= x && x <= 116) {
			//���ϸ��� 5000�� �߰� ���
			if (E.user->getBucket().gettotal() >= 5000) {
				E.user->getBucket().settotal(-5000);
				E.user->setUsedmileage(5000);
			}
		}
		else {
			//�ƹ� �ϵ� �� �Ͼ
		}
	}
	else if (17 <= y && y <= 19) {
		if (83 <= x && x <= 92) {
			//���ϸ��� 10000�� �߰� ���

			if (E.user->getBucket().gettotal() >= 10000) {
				E.user->getBucket().settotal(-10000);
				E.user->setUsedmileage(10000);
			}
		}
		else if (95 <= x && x <= 104) {
			//��� ���ϸ��� ���
			if (E.user->getBucket().gettotal() >= E.user->getMileage().getValue()) {
				E.user->getBucket().settotal(-E.user->getMileage().getValue());
				E.user->setUsedmileage(E.user->getMileage().getValue());
			}
		}
		else if (107 <= x && x <= 116) {
			//���ϸ��� �Է�ĭ�� ��� ����, ����ϱ�� �� ���ϸ����� 0���� ����
			E.user->getBucket().settotal(E.user->getUsedmileage());
			E.user->setUsedmileage(0);
		}
		else {
			//�ƹ� �ϵ� �� �Ͼ
		}
	}
	else if (86 <= x && y <= 113) {
		if (y == 7) {//����
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
			//couponcontrol�� �Ѿ�� ��ư
		}
		else if ((x >= 43) && (x <= 60)) {
			E.setState(4, 7, 0, 0, 0);
			//giftCardControl�� �Ѿ�� ��ư
		}
		else {
			//�ƹ� �� ����		
		}
	}
	else if ((y >= 32) && (y <= 49)) { //����

		if ((x >= 13) && (x <= 30)) {
			if (E.user->getKey() == "X") {
				//E.mb.getpage();
				//E.mb.getcurrent_menu();
				E.setState(1, 0, 1, 0, 1);
				//manuBuy�� ���ư��� ��ư(��ȸ��)
			}
			else {
				E.setState(3, 0, 0, 0, 0);
				//���ϸ��� ���/�������� ���ư��� ��ư(ȸ��)
			}
		}
		else if ((x >= 43) && (x <= 60)) {
			E.setState(4, 4, 0, 0, 0);
			//payMethod�� �Ѿ�� ��ư
		}
	}
	else {
		//�ƹ� �� ����
	}
}

void action_coupon(Everything E) {
	gotoxy(89, 13);
	string temp = getInput(88);
	//���� �� Gifticon ����
	for (int i = 0; i < E.CouponData.size(); i++) { //Gifticon�̶� ���ٰ� ������ CouponData,UsedCoupon
		if (temp == E.CouponData.at(i).getKey()) { //���� ���
			for (int j = 0; j < E.UsedCoupon.size(); j++) {
				if (temp == E.UsedCoupon.at(j)) {
					//����, �����
					E.setState(4, 3, 0, 4, 0);
					exit(0);
					//���� ���·� ������ ����
				}
				else {//�����ϰ� ������� �������, ����ϰ� ��� ���� ���Ϳ� �߰�
					E.UsedCoupon.push_back(E.CouponData.at(i).getKey());
					E.user->getBucket().settotal((E.user->getBucket().gettotal()) - 3000); //������ �ϰ������� 3000���� �ִٰ� ����

					E.setState(4, 0, 0, 0, 0);

					exit(0);
				}
			}

		}
		else {//���絵 ����
			E.setState(4, 3, 0, 4, 0);
			exit(0);
		}
	}
}
void action_couponerr(Everything E) {
	E.e->Errorview(4);
	E.setState(4, 3, 0, 0, 0);

}
void action_payMethod(Everything E, pair <int, int> p1) {

	int x = p1.first;
	int y = p1.second;


	if ((y >= 11) && (y <= 15)) {
		if ((x >= 86) && (x <= 97)) {
			E.setState(5, 0, 0, 0, 0);
			//cardInput���� �Ѿ�� ��ư
		}
		else if ((x >= 102) && (x <= 113)) {
			E.setState(6, 0, 0, 0, 0);
			//cashInput���� �Ѿ�� ��ư
		}
		else {
			//�ƹ� �� ����
		}
	}
	else {
		//�ƹ� �� ����
	}

}
void action_gifiticard(Everything E) {

	gotoxy(89, 13);
	string temp = getInput(88);
	//���� �� Gifticon ����
	for (int i = 0; i < E.GifticardData.size(); i++) { //Gifticon�̶� ���ٰ� ������ gifiticardData,Usedgifiticard
		if (temp == E.GifticardData.at(i).getKey()) { //���� ���
			for (int j = 0; j < E.UsedGifticard.size(); j++) {
				if (temp == E.UsedGifticard.at(j)) {
					//����, �����
					E.setState(4, 7, 0, 4, 0);
					exit(0);
					//���� ���·� ������ ����
				}
				else {//�����ϰ� ������� �������, ����ϰ� ��� ��ǰ�� ���Ϳ� �߰�
					E.UsedGifticard.push_back(E.GifticardData.at(i).getKey());
					E.user->getBucket().settotal((E.user->getBucket().gettotal()) - 3000); //��ǰ�ǵ� �ϰ������� 3000���� �ִٰ� ����

					E.setState(4, 0, 0, 0, 0);

					exit(0);
				}
			}

		}
		else {//���絵 ����
			E.setState(4, 7, 0, 4, 0);
			exit(0);
		}
	}
}
void action_gifitierr(Everything E) {
	E.e->Errorview(4);
	E.setState(4, 7, 0, 0, 0);
}

void action_cardinput(Everything E) {

	//cout << "ī�带 �Է��Ͻðڽ��ϱ�?(y/n ���θ� ǥ��)" << endl;
	string temp = getInput(0);

	if (temp == "y")//�Է� ���� ��)
		E.setState(5, 5, 0, 0, 0);
	else if (temp == "n")//�Է� ���� ��)
		E.setState(5, 0, 0, 3, 0);

}

void action_carderr(Everything E) {
	E.e->Errorview(3);
	E.setState(5, 0, 0, 0, 0);
}
void action_bill(Everything E, pair<int, int> input) {
	int x = input.first;
	int y = input.second;

	Bucket temp = E.user->getBucket();

	if (11 <= y && y <= 15) {
		if (86 <= x && x <= 97) {
			//������ ���
			billSetting(temp);
		}
		else if (102 <= x && x <= 113) {
			//������ �����
		}
		else {
			//�ƹ� �ϵ� �� �Ͼ
		}
	}
	else {
		//�ƹ� �ϵ� �� �Ͼ
	}
}

void action_cashinput(Everything E) {

	//���� �Է�

	//cout << "������ �Է��Ͻðڽ��ϱ�?(y/n ���θ� ǥ��)" << endl;
	string temp = getInput(0);

	if (temp == "y")//�Է� ���� ��)
		E.setState(6, 5, 0, 0, 0);
	else if (temp == "n")//�Է� ���� ��)
		E.setState(6, 0, 0, 3, 0);
	else {
		//�ƹ��͵� ����
	}
}

void action_casherr(Everything E) {
	E.e->Errorview(3);
	E.setState(6, 0, 0, 0, 0);
}