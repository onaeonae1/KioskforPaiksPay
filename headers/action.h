#pragma once

#include "declare.h"

using namespace std;

class Everything;

string getInput(int print);


void action_start(Everything E);

void action_menuBuy(Everything E, pair<int, int> input);
void action_gifticon(Everything E);
void action_giftierr(Everything E);
void action_option(Everything E, pair<int, int> input);
void action_login(Everything E);
void action_logerr(Everything E);

void action_mileageControl(Everything E, pair<int, int> input);
void action_mileageUse(Everything E, pair<int, int> input);
void action_discountControl(Everything E, pair <int, int> p1);

void action_coupon(Everything E);
void action_couponerr(Everything E);
void action_payMethod(Everything E, pair <int, int> p1);
void action_gifiticard(Everything E);
void action_gifitierr(Everything E);

void action_cardinput(Everything E);

void action_carderr(Everything E);
void action_bill(Everything E, pair<int, int> input);

void action_cashinput(Everything E);

void action_casherr(Everything E);