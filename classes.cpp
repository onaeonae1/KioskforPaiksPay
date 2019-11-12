#include<iostream>
#include<string>
using namespace std;
class box {
private:
	int x;
	int y;
	int wideth;
	int height;
	string name;
public:
	void view() {

	}
	void mouseEvent() {

	}
};
class box1 : public box { //메인
	 
};
class box2 : public box { //팝업

};
class box3 : public box {  //장바구니

};
class box4 : public box { //에러

};
class box5 : public box { //버튼 모아놓은 것 ex) 결제

};
class menuBuy : public box1 {

};
class login : public box1 {

};
class mileageControl : public box1 {

};
class discountControl : public box1 {

};
class cardInput : public box1 {

};
class cashInput : public box1 {

};

class gifticonInput : public box2 {

};
class optionControl : public box2 {

};
class couponControl : public box2 {

};
class payMethod : public box2 {

};
class bill : public box2 {

};
class mileageUse : public box2 {

};
void mainMouse(int x, int y, string a) {
	//마우스 들어온 x y 알고
	//이때 호출해야 할 박스 클래스를 알아서
	//그걸 호출하는거

}
void init() {

}
int main() {
	init();
	while (true) {
		mainMouse(); //이벤트 처리
	}
}
