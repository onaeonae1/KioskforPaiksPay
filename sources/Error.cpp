#include "Error.h"

using namespace std;
//�Է� �Լ��� int curError = 0 �߰� -> state[3] ���
/* curError���� 0 -> ����(print ���ʿ�)/ 1 -> giftierr/ 2 -> logerr
 3 -> carderr/casherr  / 4 -> couponerr/gifitierr */

void Error::Errorview(int value) {
	switch (value)
	{
	case 0: {
		clear_box4();
		//��� x
		break;
	}
	case 1: {
		clear_box4();
		int x = 76, i = 33;
		gotoxy(x, i); printf("�� �� Ƽ �� �� ��!"); i++;
		gotoxy(x, i); printf("�ٽ� �Է��ϼ���!"); i++;
		Sleep(3000);
		break;
	}
	case 2: {
		clear_box4();
		int x = 76, i = 33;
		gotoxy(x, i); printf("�� �� �� �� ��!"); i++;
	gotoxy(x, i); printf("�ٽ� �Է��ϼ���!"); i++;
		Sleep(3000);
		break;
	}
	case 3: {
		clear_box4();
		int x = 76, i = 33;
		gotoxy(x, i); printf("ī ��/�� �� �� ��!"); i++;
		gotoxy(x, i); printf("�ٽ� �Է��ϼ���!"); i++;
		Sleep(3000);
		break;
	}
	case 4: {
		clear_box4();
		int x = 76, i = 33;
		gotoxy(x, i); printf("�� ��/�� ǰ �� �� ��!"); i++;
		gotoxy(x, i); printf("�ٽ� �Է��ϼ���!"); i++;
		Sleep(3000);
		break;
	}
	default: {
		clear_box4();
		//��� x
		break;
	}
	}
}
