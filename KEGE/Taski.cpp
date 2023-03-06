#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
inline void TASK_5() {
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
inline void TASK_11() {
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
inline void TASK_15() {
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
inline int TASK_16(int n) {
	if (n == 1 || n == 2 || n == 3) return 1;
	else if (n > 3) return TASK_16(n - 3) + TASK_16(n - 2);
	else return 0;
}
inline void TASK_17() {
	ifstream myfile;
	vector<int> Nums;
	int min_elem = 100000, maxsum = 0, elems = 0;
	myfile.open("107_17.txt");
	while (!myfile.eof()) {
		string temp;
		getline(myfile, temp);
		Nums.push_back(stoi(temp));
		if (min_elem > stoi(temp) && stoi(temp) % 21 == 0) min_elem = stoi(temp);
	}
	for (int i = 1; i < Nums.size(); i++) {
		if (!(Nums[i] % min_elem == 0 || Nums[i - 1] % min_elem == 0)) continue;
		elems++;
		if (maxsum < Nums[i - 1] + Nums[i]) maxsum = Nums[i - 1] + Nums[i];
	}
	cout << elems << " " << maxsum;
}
inline void TASK_25() {
	for (int i = 123456789; i <= 223456789; i++) {
		int counter = 0;
		int last = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0 && counter < 3) {
				counter++;
				last = j;
			}
			else break;
		}
		if (counter == 3) {
			std::cout << i << " " << last << endl;
		}
	}
}