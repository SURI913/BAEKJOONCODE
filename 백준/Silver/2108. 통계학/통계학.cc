#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
#define MAX 8001 //절대값이 4000을 넘지 않는다. -의 경우 4000밑으로 부터 셈
int arithmetic_mean(vector<int> n) { //산술평균
	int temp = 0;
	for (int i = 0; i <n.size(); i++) {
		temp += n[i];
	}
	return round((double)temp / n.size());
}

int median(vector<int> n) { //중앙값
	return n[n.size() / 2];
}

int mode(vector<int> n) {
	int cnt[MAX] = { 0, };
	if (n.size() == 1) return n[0];
	else {
		for (int i = 0; i < n.size(); i++) {
			//정렬한 벡터가 들어옴 주의
			if (n[i] > 0) {
				cnt[4000 + n[i]]++;
			}
			else
				cnt[4000 - abs(n[i])]++;
		}

		int max = 0;
		int idx;
		//가장 많이 나온 값
		for (int i = 0; i < MAX; i++) {
			if (max < cnt[i]) {
				max = cnt[i];
				idx = i;
			}
		}

		//중복
		for (int i = idx + 1; i < 8001; i++) {
			if (cnt[i] == max) {
				idx = i;
				break;
			}
		}

		return idx - 4000;
	}
}

int range(vector <int> n) {
	return (n[n.size() - 1] - n[0]);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	vector<int> num;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		num.push_back(n);
	}
	sort(num.begin(), num.end());

	cout << arithmetic_mean(num) << '\n';
	cout << median(num)<< '\n';
	cout << mode(num) << '\n';
	cout << range(num) << '\n';
	
	return 0;
}