#include <iostream>
#include <cstring>
using namespace std;
void TASK_11() {
	string Temp("1");
	Temp += string(98, '9');
	while (Temp.find("19") + 1 || Temp.find("299") + 1 || Temp.find("3999") + 1) {
		if (Temp.size() > 1)
			Temp.replace(Temp.find("19"), 2, "2");
		if(Temp.size() > 2)
			Temp.replace(Temp.find("299"), 2, "3");
		if (Temp.size() > 3)
			Temp.replace(Temp.find("3999"), 2, "1");
	}
	cout << Temp;
}