#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
vector<int> arr;
int N, x, cnt = 0;

void TwoPointer() {
	sort(arr.begin(), arr.end()); //오름차순

	int left = 0, right = N - 1;
	int sum;
	while (left < right) {
		sum = arr[left] + arr[right];
		if (sum < x) {
			left++;
		}
		else if (sum > x) {
			right--;
		}
		else {
			left++; right--; cnt++;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tmp;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}
	cin >> x;

	TwoPointer();

	cout << cnt << '\n';
	return 0;
}