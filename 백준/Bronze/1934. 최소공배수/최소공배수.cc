#include <iostream>
using namespace std;

//유클리드 호제법
//최대공약수 구하는 함수 
int GCM(int A, int B) {
	int temp = A % B;
	if (temp == 0) {
		return B;
	}
	else {
		return GCM(B, temp);
	}
}

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	//최대 공약수= A*B/최소공배수
	for (int i = 0; i < T; i++) {
		int A, B;
		cin >> A >> B;
		cout << (A * B) / GCM(A, B) << "\n";
	}

	return 0;
}