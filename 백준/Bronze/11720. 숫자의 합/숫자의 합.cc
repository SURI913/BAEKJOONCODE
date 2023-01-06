#include <iostream>
using namespace std;

void sum(int);

int main() {
	int size=0;
	cin >> size;
	sum(size);
	return 0;
}

void sum(int size) {
	int sum = 0;
	char input;
	for (int i = 0; i < size; i++) {
		cin >> input;	 //문자 하나 입력받기
		sum += input - 48;	//char형이므로 '0'으로 보정 '0' = 아스키 코드48
	}
	cout << sum << endl;
}
