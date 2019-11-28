#pragma once
#include<vector>
using namespace std;
class Mileage {
private:
	string key; //사용자 구분 key
	int value; //값
public:
	Mileage() { //기본 생성자
		key = "X";
		value = 0;
	}
	Mileage(string key,  string value) {
		this->key = key;
		this->value = stoi(value);
	}
	void setKey(string key) {
		this->key = key;
	}
	void setValue(int value) {
		this->value = value;
	}
	string getKey() {
		return this->key;
	}
	int getValue() {
		return this->value; 
	}
};
