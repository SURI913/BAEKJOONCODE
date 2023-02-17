#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	vector<int> num;
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		num.push_back(n);
	}

	sort(num.begin(), num.end()); //오름차순 정렬

	int a = 0;
	for (int i = 0; i < 5 ; i++) {
		a += num[i];
	}
	a /= 5;
	cout << a << endl;
	cout << num[2];
	return 0;
}