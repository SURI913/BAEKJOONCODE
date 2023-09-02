#include <iostream>
#include <cmath>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	// 창문 및 사람 수

	//값이 변화하는 지점인 1, 4, 9 , 16 ,25에 대해서 생각해 보면 각각 특정 숫자(1, 2, 3, 4, 5)의 제곱 수임을 알 수 있다.

	cout << int(sqrt((N)));
	//N에 루트를 씌운 부분의 정수 부분만큼 열려있다.

	return 0;
}