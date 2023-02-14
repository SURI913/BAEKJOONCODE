#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N; // N: 회의 수
	cin >> N;
	
	// 시간 쌍 입력 받는 pair선언
	vector<pair<int, int>> t;
	for (int i = 0; i < N; i++) {
		int start, end;
		cin >> start >> end;
		t.push_back(make_pair(end, start)); //끝시간 먼저 입력해야 sort로 끝나는 시간순서대로 정렬가능
	}

	sort(t.begin(), t.end()); //끝나는 시간순으로 정렬
	//frist = end?
	int timeE = t[0].first; //가장 먼저 끝나는 회의시간 count도 1부터 시작해야함
	int count = 1;
	for (int i = 1; i < N ; i++) {
		if (timeE <= t[i].second) {// 끝나는 회의시간보다 다음 시작시간이 더 크거나 같을 경우
			//회의 진행
			timeE = t[i].first; //강의 끝난시간 다시 정의
			count++;
		}
	}
	cout << count;
	return 0;

}