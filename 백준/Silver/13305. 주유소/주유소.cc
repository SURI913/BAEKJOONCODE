#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/// <summary>
/// 그리디 알고리즘
/// 
/// </summary>
/// <returns></returns>

vector<long long> oil;
vector<long long> km;
long long result = 0;
void Greedy() {
	long long current = oil[0];
	for (int i = 0; i < km.size(); i++) {
		current =  min(current,oil[i]);
		result += current * km[i];
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	long long len, k;
	cin >> N;
	for (int i = 0; i < N-1; i++) {
		cin >> len;
		km.push_back(len);
	}
	for (int i = 0; i < N; i++) {
		cin >> k;
		oil.push_back(k);
	}
	Greedy();
	cout << result << '\n';

	return 0;
}