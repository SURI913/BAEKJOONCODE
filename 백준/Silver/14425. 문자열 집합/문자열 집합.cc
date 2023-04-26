#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//카드 백터
vector <string> YourString, MyString;
int main() {
	// 이분탐색으로
	int N,M;
	cin >> N >> M;
	
	//결과를 위한 카운트
	int cnt = 0;

	//입력
	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		YourString.push_back(temp);	//정렬해야하는 벡터
	}

	sort(YourString.begin(), YourString.end()); //글자 순서대로 정렬함 A-Z

	for (int i = 0; i < M; i++) {
		string temp;
		cin >> temp;
		MyString.push_back(temp);
	}

	for (int i = 0; i < M; i++) {
		int right = N - 1;	//맨끝 인덱스
		int left = 0;	//맨앞 인덱스

		while (left <= right)
		{
			int mid = (right+left) / 2;
			if (YourString[mid] == MyString[i]) {
				cnt++;
				break;
			}
			if (YourString[mid] > MyString[i]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
	}

	cout << cnt << '\n';
	return 0;
}