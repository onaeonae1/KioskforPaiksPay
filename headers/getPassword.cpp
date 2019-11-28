#include <iostream>
#include <string>
#include <cstring>
#include <conio.h>
#include "util.h"

using namespace std;

string getInput() {
	string result = "";
	char temp = '0';
	int i = 0, j = 0;


	temp = getch();
	for (i = 0; !((char)temp == '\n' || (char)temp == '\r'); i++) {
		if (i < 0) i = 0;
		if (temp == 8) { // backspace일 때
			if (!result.empty())
				result.pop_back();
			if(i != 0)
			gotoxy(3 + i * 2 - 2, 3); printf(" ");
			i -= 2;
		}
		else {
			result.push_back((char)temp);
			gotoxy(3 + i * 2, 3); printf("●");
			gotoxy(5, 10); printf("%c", temp);
		}
		
		temp = getch();
	}

	return result;
}

int main(void) {
	string a = getInput();

	gotoxy(5, 5);
	cout << a;
}
