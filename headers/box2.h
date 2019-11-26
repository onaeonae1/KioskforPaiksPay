#pragma once
#include<iostream>
#include<string>
#include"box.h"
class box2 : public box {
public:
	box2() {
		this->setPos(make_pair(1, 1));
		this->setHeight();
		this->setWideth();
		this->setName("box2");
	}
};
