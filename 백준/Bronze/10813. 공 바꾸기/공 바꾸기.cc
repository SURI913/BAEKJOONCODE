#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M; //바구니 몇개인가 , 입력 몇번 할 것인가(몇 번 바꿀것인가)
	//2차원 동적 할당
	int box[101] = {0, };
	for (int i = 1; i <= N; i++) {
		box[i] = i;
		//박스에 공 넣기
	}

	for (int k = 0; k < M; k++) {
		int i, j;
		cin >> i >> j;
		int temp = box[i];
		box[i] = box[j];
		box[j] = temp;
		//i번 바구니 공과 j번 바구니 공을 바꾼다.
	}

	for (int i = 1; i <= N; i++) {
		cout << box[i] << " ";
	}

	return 0;
}