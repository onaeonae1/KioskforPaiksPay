#pragma once
#include<iostream>
#include<string>
#include"box.h"
class box3 : public box {
public:
	box3() {
		this->setPos(make_pair(1, 1));
		this->setHeight();
		this->setWideth();
		this->setName("box3");
	}
};
