#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#define MAX 10001

bool compare(string a, string b)
{
	if (a.size() == b.size()) {
		return a < b;
	}
	else
		return a.size() < b.size();
}

int result[MAX] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int check;
		cin >> check;
		result[check]++;
	}
	
	for (int i = 1; i < MAX; i++) {
		if (result[i] != 0) {
			while (result[i]--)
			{
				cout << i << '\n';
			}
		}
	}
	return 0;
}