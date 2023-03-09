#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	int i;
	cin >> S >> i;
	cout << S[i-1]; //인덱스 시작은 0부터이다
	return 0;
}