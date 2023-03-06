#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
void TASK_5() {
	for (int i = 10000; i < 100000; i++) {
		string temp = to_string(i);
		int first, second;
		first = (int)temp[0] - '0' + (int)temp[2] - '0' + (int)temp[4] - '0';
		second = (int)temp[1] - '0' + (int)temp[3] - '0';
		string end = to_string(min(first, second));
		end += to_string(max(first, second));
		if (end == "621") {
			cout << i; return;
		}
	}
}

void TASK_11() {
	string Temp("1");
	Temp += string(98, '9');
	while (Temp.find("19") + 1 || Temp.find("299") + 1 || Temp.find("3999") + 1) {
		if (Temp.size() > 1)
			Temp.replace(Temp.find("19"), 2, "2");
		if (Temp.size() > 2)
			Temp.replace(Temp.find("299"), 2, "3");
		if (Temp.size() > 3)
			Temp.replace(Temp.find("3999"), 2, "1");
	}
	cout << Temp;
}

void TASK_15() {
	for (int A = 0; A < 500; A++) {
		int counter = 0;
		for (int x = 0; x < 500; x++) {
			for (int y = 0; y < 500; y++)
				if ((y + 2 * x < A) || (x > 15) || (y > 30))
					counter++;
		}
		if (counter == 500 * 500) {
			cout << A << endl;
			return;
		}
	}
}