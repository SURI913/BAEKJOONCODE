#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//결과 배열
int result[500001] = { 0, };
//카드 백터
vector <int> YourCard, MyCard;
int main() {
	// 이분탐색으로
	int N,M;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		YourCard.push_back(temp);	//정렬해야하는 벡터
	}

	sort(YourCard.begin(), YourCard.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;
		MyCard.push_back(temp);
	}

	for (int i = 0; i < M; i++) {
		int right = N - 1;	//맨끝 인덱스
		int left = 0;	//맨앞 인덱스

		while (left <= right)
		{
			int mid = (right+left) / 2;
			if (YourCard[mid] == MyCard[i]) {
				result[i] = 1;
				break;
			}
			if (YourCard[mid] > MyCard[i]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		cout << result[i] << " ";
	}
	return 0;
}