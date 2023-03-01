#include <string>
#include <iostream>
using namespace std;

int main() {
	string str;
	while (1) {
		getline(cin, str);
		cout << str << '\n';
		if (str == "") { //공백이면 벗어남
			break;
		}
	}
	return 0;
}