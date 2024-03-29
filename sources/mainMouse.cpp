#include "mainMouse.h"

using namespace std;

void mainMouse(Everything& E, pair<int, int> mousepos) { //입력받은 마우스의 좌표를 전달받고 클래스 호출하는 함수
	switch (E.state[0]) {
	case 100: { //초기화면
		action_start(E);
		E.setState(1, 0, 1, 0, 1);
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
		   //회원 결제:2,0,0,0,0
		   //비회원 결제: 4,0,0,0,0

			action_menuBuy(E, mousepos);

			break;
		}
		case 1: { //메뉴-기프티콘입력-장바구니
			switch (E.state[3]) {
			case 0: {//메뉴-기프티콘입력-장바구니-X
			   //가용 버튼: 없음, 기프티콘 코드만 입력 가능->상태를 바꿔준다 1,2,1,0,1 입력 성공시 옵션창 생성
			   //입력 성공: 1,0,1,0,1
			   //입력 실패: 1,1,1,1,1

				action_gifticon(E);
				break;
			}
			case 1: {//메뉴-기프티콘입력-장바구니-에러
			   //가용 버튼: 없음, 에러가 진행되며 에러 시간동안은 아무것도 못함
			   //에러 시간이 지나면 1,1,1,0,1

				action_giftierr(E);
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

			action_option(E, mousepos);
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

			action_login(E);
		}
		case 2: {//로그인-X-X-에러-X
		   //아무 동작 못하고 에러가 끝나면 상태 변경과 동시에 동작가능
		   //에러가 끝나면 상태는 2,0,0,0,0

			action_logerr(E);
		}
		}
	}
	case 3: {
		switch (E.state[1]) {
		case 0: { //마일리지 사용, 적립
		   //가용 버튼: 사용, 적립
		   //사용 시: 3,6,0,0,0
		   //적립 시: 4,0,0,0,0

			action_mileageControl(E, mousepos);
			break;
		}
		case 6: { //마일리지 사용, 적립 - 마일리지 액수 입력
		   //가용버튼 없음, 마일리지 얼마 사용할 지 입력
		   //입력이 성공적으로 끝나고 마일리지 사용이 되면
		   //상태는: 4,0,0,0,0

			action_mileageUse(E, mousepos);
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

						action_discountControl(E, mousepos);
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
						action_coupon(E);
						break;
					}
					}
				}
				case 4: { //쿠폰,상품권 에러메세지 활성화
				//가능한 행동 -> 없음
				//에러 띄우고 슬립 후 [4,3,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_couponerr(E);
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
						action_payMethod(E, mousepos);
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
						action_gifiticard(E);
						break;
					}
					}
				}
				case 4: { //쿠폰,상품권 에러메세지 활성화
				//가능한 행동 -> 없음
				//에러 띄우고 슬립 후 [4,7,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_gifitierr(E);
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

						action_cardinput(E);
						break;
					}
					}
				}
				case 3: { //결제 에러 메세지 활성화
				   //가능한 행동 -> 없음
				   //에러 띄우고 슬립 후 [5,0,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_carderr(E);
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
						action_bill(E, mousepos);
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
						action_cashinput(E);
						break;
					}
					}
				}
				case 3: { //결제 에러 메세지 활성화
				   //가능한 행동 -> 없음
				   //에러 띄우고 슬립 후 [6,0,0,0,0]으로 되돌아감
					switch (E.state[4]) {
					case 0: { //버튼 비활성화 
						action_casherr(E);
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