#pragma once
#include<iostream>
#include<string>
#include"box.h"
class box4 : public box {
public:
	box4() {
		this->setPos(make_pair(1, 1));
		this->setHeight();
		this->setWideth();
		this->setName("box4");
	}
};
