#pragma once
#include "utils.h"
#include "views.h"

//입력 함수에 int curError = 0 추가 -> state[3] 사용
/* curError에서 0 -> 정상(print 불필요)/ 1 -> giftierr/ 2 -> logerr
 3 -> carderr/casherr  / 4 -> couponerr/gifitierr */
class Error {
	//x = 76 , y = 33,34
public:	
	void Errorview(int value) {
		switch (value)
		{
		case 0: {
			clear_box4();
		//출력 x
			break;
		}
		case 1: {
			clear_box4();
			int x = 76, i = 33;
			gotoxy(x, i); printf("기 프 티 콘 에 러!"); i++;
			gotoxy(x, i); printf("다시 입력하세요!"); i++;
			Sleep(3000);
			break;
		}
		case 2: {
			clear_box4();
			int x = 76, i = 33;
			gotoxy(x, i); printf("로 그 인 에 러!"); i++;
			gotoxy(x, i); printf("다시 입력하세요!"); i++;
			Sleep(3000);
			break;
		}
		case 3: {
			clear_box4();
			int x = 76, i = 33;
			gotoxy(x, i); printf("카 드/현 금 에 러!"); i++;
			gotoxy(x, i); printf("다시 입력하세요!"); i++;
			Sleep(3000);
			break;
		}
		case 4: {
			clear_box4();
			int x = 76, i = 33;
			gotoxy(x, i); printf("쿠 폰/상 품 권 에 러!"); i++;
			gotoxy(x, i); printf("다시 입력하세요!"); i++;
			Sleep(3000);
			break;
		}
		default: {
			clear_box4();
			//출력 x
			break;
		}
		}
		
	}

};
