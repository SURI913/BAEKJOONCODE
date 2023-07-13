#include <iostream>
#include<set>
#include <algorithm>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	set<int> setA, setB, result;
	int A, B;	//A, B집합 입력갯수
	cin >> A >> B;	

	//A입력
	for (int i = 0; i < A; i++) {
		int number;
		cin >> number;
		setA.insert(number);
	}
	//B
	for (int i = 0; i < B; i++) {
		int number;
		cin >> number;
		setB.insert(number);
	}

	set_symmetric_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(result, result.end()));//첫번째 인풋시작, 인풋끝, 두번째 인풋시작, 인풋끝, 아웃풋 시작
	cout << result.size() << "\n";
	return 0;
}