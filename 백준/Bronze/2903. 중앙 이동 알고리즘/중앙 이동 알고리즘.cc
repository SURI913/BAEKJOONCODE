#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N; //N번
	int formerDot = 2; //한 줄에 점 갯수
	
	for (int i = N; i > 0; i--) {
		//횟수만큼 반복한다
		formerDot += (formerDot - 1);
	}
	cout << formerDot * formerDot << '\n';
	return 0;
}