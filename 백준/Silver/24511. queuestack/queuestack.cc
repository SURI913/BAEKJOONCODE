#include <iostream>
#include<queue>
#include<stack>

using namespace std;
bool q_st_flag[100000];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// 첫번째 입력: 자료구조 갯수
	int N;
	std::cin >> N;
	queue<int> q;
	stack<int> st;

	//두번째 입력: 큐냐 스택이냐
	for (int i = 0; i < N; i++) {
		cin >> q_st_flag[i]; //1아니면 0을 받음
	}

	//세번째 입력: 초기값
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (q_st_flag[i] == 0) //큐 일때만 값 저장하면
		{
			st.push(input); //1 4
		}
	}
	while (!st.empty()) {
		q.push(st.top()); // 4 1
		st.pop();
	}

	//네번째 입력 : 갯수
	int count;
	cin >> count;

	//다섯번째 입력: 순차적으로 넣을 값
	for (int i = 0; i < count; i++) {
		int input;
		cin >> input;
		q.push(input);
	}
	
	//출력
	for (int i = 0; i < count; i++) {
		
		cout << q.front() << " ";
		q.pop();
	}

	return 0;

}