#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	string temp_a;
	string temp_b;
	int result = 0;

	//수 바꾸기
	for (int i = 2; i >= 0; i--) {
		temp_a += a[i];
		temp_b += b[i];
	}
	
	//비교
	if (stoi(temp_a) < stoi(temp_b)) {
		result = stoi(temp_b);
	}
	else if(stoi(temp_a) > stoi(temp_b)) {
		result = stoi(temp_a);
	}
	else {
		result = stoi(temp_a); //동일할땐 둘중 아무거나
	}

	cout << result << endl;
	return 0;
}