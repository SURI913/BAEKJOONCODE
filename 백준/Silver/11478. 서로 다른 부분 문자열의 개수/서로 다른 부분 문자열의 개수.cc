#include <iostream>
#include <string>
#include<set>	//맵을 사용하기 위한 헤더
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	string S;
	cin >> S;

	set<string> result;

	string temp;
	//분리
	for (int i = 0; i < S.size(); i++) {
		temp = " ";
		for (int j = i; j < S.size(); j++) {
			temp += S[j];
			result.insert(temp);
		}
	}
	//출력
	cout << result.size();
	return 0;
}