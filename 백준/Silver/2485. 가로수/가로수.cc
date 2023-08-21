#include <iostream>
#include <vector>
#include <algorithm>
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

	int N;
	cin >> N;

	vector <int> Tree;
	vector <int> Distance;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		Tree.push_back(tmp);
	}

	//가로수 간격 저장
	sort(Tree.begin(), Tree.end()); //정렬
	for (int i = 0; i < N-1; i++) {
		Distance.push_back(Tree[i + 1] - Tree[i]);
	}

	//간격 최대공약수 구하기
	int gcd = Distance[0];
	for (int i = 1; i < Distance.size(); i++) {
		gcd = GCM(gcd, Distance[i]);
	}
	
	int count = 0;
	//간격을 최대공약수로 나누어 몇개를 심어야 하는지 체크
	for (int i = 0; i < Distance.size(); i++) {
		count += (Distance[i] / gcd) - 1;
	}


	cout << count << "\n";

	return 0;
}