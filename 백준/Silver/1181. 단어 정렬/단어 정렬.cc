#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare(string a, string b)
{
	if (a.size() == b.size()) {
		return a < b;
	}
	else
		return a.size() < b.size();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<string>S;
	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		S.push_back(temp);
	}
	
	stable_sort(S.begin(), S.end(), compare); //오름차순 정렬

	string temp = " ";
	for (auto& t : S) {
		if (temp != t) {
			cout << t << '\n';
		}
		temp = t;
	}
	return 0;
}