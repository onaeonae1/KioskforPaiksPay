#pragma once
#include<iostream>
#include<string>
#include"box.h"
class box5 : public box {
public:
	box5() {
		this->setPos(make_pair(1, 1));
		this->setHeight();
		this->setWideth();
		this->setName("box5");
	}
};
