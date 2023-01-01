#include <iostream>
using namespace std;

int main() {
	bool num[31] = { false };	//30명의 출석을 위한 배열 1~30사용
	for (int i = 0; i < 28; i++) {	
		int n;
		cin >> n; //불린 출석 28명
		num[n] = true;	//불리면 true
	}
	
	for (int i = 1; i < 31; i++) {
		if (num[i] != true) {	//false값 들어있는 것만 출력
			cout << i << endl;
		}
	}

	return 0;
}
