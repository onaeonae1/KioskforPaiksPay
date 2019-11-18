#pragma once
#include<iostream>
#include<string>
#include"box.h"
class box1 : public box{
public:
	box1() {
		this->setPos(make_pair(1, 1));
		this->setHeight();
		this->setWideth();
		this->setName("box1");
	}
};
