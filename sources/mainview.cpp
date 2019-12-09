#include "mainview.h"

using namespace std;

void viewSwitch(Everything E) {
	viewState1(E, E.state[0]);
	viewState2(E, E.state[1]);
	viewState3(E, E.state[2]);
	viewState5(E, E.state[4]);
}

void viewState1(Everything E, int i) {
	switch (i) {
	case 0:
		clear_box1();
		break;
	case 1:
		E.mb->view();
		break;
	case 2:
		E.lg->view();
		break;
	case 3:
		E.mc->view();
		break;
	case 4:
		E.dc->view();
		break;
	case 5:
		E.ci->view();
		break;
	case 6:
		E.ci2->view();
		break;
	}
}

void viewState2(Everything E, int i) {
	switch (i) {
	case 0:
		clear_box2();
		break;
	case 1:
		E.gi->view();
		break;
	case 2:
		E.oc->view();
		break;
	case 3:
		E.cc->view();
		break;
	case 4:
		E.pm->view();
		break;
	case 5:
		E.bl->view();
		break;
	case 6:
		E.mu->view();
		break;
	case 7:
		E.gcc->view();
		break;
	}
}

void viewState3(Everything E, int i) {
	if (i) E.bc->view();
	else clear_box3();
}

void viewState5(Everything E, int i) {
	if (i) E.pb->view();
	else clear_box5();
}
