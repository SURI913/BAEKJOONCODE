#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string n;
	vector<char> num;
	cin >> n;
	
	for (int i = 0; i < n.size(); i++) {
		num.push_back(n[i]);
	}
	sort(num.begin(), num.end(), greater<>()); //내림차순을 위한 임시객체 call, less<>()을 쓰면 오름차순 명시적으로 지정 가능
	//compare 함수 대신이다.
	for (auto& n : num) {
		cout << n;
	}
	return 0;
}