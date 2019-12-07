
#pragma once
#include"Model.h"
#include"Bucket.h"
#include"Mileage.h"
#include<fstream>
using namespace std;
class User {
private:
	//장바구니
	Bucket currentBucket;
	//회원분류 key
	string key;
	//마일리지 데이터->처음에는 의미x.
	//key와 일치하는 마일리지가 있다면 메인에서 연결됨
	Mileage userMileage;
	int usedMileage=0;
public:
	User() {
		key = "X";
		Mileage* temp = new Mileage();
		this->setMileage(*temp);
		delete(temp);
	}
	Bucket getBucket() {
		return this->currentBucket;
	}
	string getKey() {
		return this->key;
	}
	void setKey(string key) {
		this->key = key;
	}
	Mileage getMileage() {
		return this->userMileage;
	}
	void setMileage(Mileage& linkMileage) {
		this->userMileage = linkMileage;
	}
	void setUsedmileage(int num) {
		usedMileage += num;
	}
	int getUsedmileage() {
		return this->usedMileage;
	}
};
