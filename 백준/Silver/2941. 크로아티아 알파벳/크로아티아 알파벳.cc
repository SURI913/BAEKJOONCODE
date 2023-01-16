#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		//string의 npos는 no position으로 쓰레기 값이 출력된다
		if (input.find("c=") != string::npos) { //찾는문자가 있으면
			input.replace(input.find("c="), 2, "0"); //(위치, 범위, 바꿀char)
		}
		if (input.find("c-") != string::npos) {
			input.replace(input.find("c-"), 2, "0");
		}
		if (input.find("d-") != string::npos) {
			input.replace(input.find("d-"), 2, "0");
		}
		if (input.find("lj") != string::npos) {
			input.replace(input.find("lj"), 2, "0");
		}
		if (input.find("s=") != string::npos) {
			input.replace(input.find("s="), 2, "0");
		}
		if (input.find("nj") != string::npos) {
			input.replace(input.find("nj"), 2, "0");
		}
		if (input.find("dz=") != string::npos) {
			input.replace(input.find("dz="), 3, "0");
		}
		else if (input.find("z=") != string::npos) {
			input.replace(input.find("z="), 2, "0");
		}
	}
	cout << input.size() << endl;
	return 0;
}