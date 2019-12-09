#include "viewUtil.h"

void clear_box1() {
	int x = 2, i = 1;
	for (i = 1; i < 43; i++) {
		gotoxy(x, i); printf("                                                                        ");
	}
	return;
}
void clear_box2() {
	int x = 76, i = 1;
	for (i = 1; i < 21; i++) {
		gotoxy(x, i); printf("                                                ");
	}
	return;
}
void clear_box3() {
	int x = 76, i = 22;
	for (i = 22; i < 32; i++) {
		gotoxy(x, i); printf("                                                ");
	}
	return;
}
void clear_box4() {
	int x = 76, i = 33;
	for (i = 33; i < 35; i++) {
		gotoxy(x, i); printf("                                                ");
	}
	return;
}
void clear_box5() {
	int x = 76, i = 27;
	for (i = 36; i < 43; i++) {
		gotoxy(x, i); printf("                                                ");
	}
	return;
}




void menuview_1portion(pair<int, int> start, pair<int, int> end, string content) {
	int y = start.second + 3; // 맨 위에서 4번째 칸
	int temp = end.first - start.first;
	int t = content.length();
	gotoxy((temp - t) / 2, y);
	printf("%s", content);

	return;
}

void print_option(int y, int q) {
	string a;
	string b;
	string c;
	switch (q) {
	case 0:
		a = "Hot / Ice";
		b = "Hot";
		c = "Ice";
		break;
	case 1:
		a = "사이즈";
		b = "레귤러(R)";
		c = "라지(L)";
		break;
	case 2:
		a = "샷추가";
		b = "연하게";
		c = "1샷 추가";
		break;
	case 3:
		a = "휘핑크림";
		b = "휘핑크림O";
		c = "휘핑크림X";
	}

	gotoxy(80, y); printf("%s", a);
	gotoxy(92, y); printf("%s", b);
	gotoxy(106, y); printf("%s", c);
}

void menuview_2portion(pair<int, int> start, pair<int, int> end, string content1, string content2) {
	int y = start.second + 1;
	int temp = end.first - start.first;
	int t = content1.length();
	gotoxy((temp - t) / 2, y);
	printf("%s", content1);

	y = start.second + 4;
	t = content2.length();
	gotoxy((temp - t) / 2, y);
	printf("%s", content2);

	return;
}

void view() {
	int i = 0;
	gotoxy(0, i); printf("┌────────────────────────────────────┬────────────────────────┐"); i++;
	for (i = 1; i < 21; i++) {
		gotoxy(0, i); printf("│"); gotoxy(74, i); printf("│"); gotoxy(124, i); printf("│");
	}
	gotoxy(0, i); printf("│"); gotoxy(74, i); printf("├────────────────────────┤");
	for (i = 22; i < 32; i++) {
		gotoxy(0, i); printf("│"); gotoxy(74, i); printf("│"); gotoxy(124, i); printf("│");
	}
	gotoxy(0, i); printf("│"); gotoxy(74, i); printf("├────────────────────────┤");
	for (i = 33; i < 35; i++) {
		gotoxy(0, i); printf("│"); gotoxy(74, i); printf("│"); gotoxy(124, i); printf("│");
	}
	gotoxy(0, i); printf("│"); gotoxy(74, i); printf("├────────────────────────┤");
	for (i = 36; i < 43; i++) {
		gotoxy(0, i); printf("│"); gotoxy(74, i); printf("│"); gotoxy(124, i); printf("│");
	}
	gotoxy(0, i); printf("└────────────────────────────────────┴────────────────────────┘");
}
