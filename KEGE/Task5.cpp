#include <iostream>
#include <string>
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