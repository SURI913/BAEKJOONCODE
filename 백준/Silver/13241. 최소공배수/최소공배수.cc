#include <iostream>
using namespace std;

//유클리드 호제법 O(logN)
//최대공약수 구하는 함수 
long long GCM(long long A, long long B) {
	long long temp = A % B;
	if (temp == 0) {
		return B;
	}
	else {
		return GCM(B, temp);
	}
	
}
//최대공배수 구하는 함수
long long LCM(long long A, long long B) {
	return (A * B) / GCM(A, B);
}

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	long long A, B;
	cin >> A >> B;

	cout << LCM(A, B) << "\n";

	return 0;
}