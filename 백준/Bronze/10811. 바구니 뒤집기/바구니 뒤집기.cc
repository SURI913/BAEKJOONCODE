#include <iostream>
#include <algorithm> //STL사용
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
		//역순 정렬 사용
		reverse(box + i, box + j + 1); //+1 이유
		//(frist, last) frist인덱스부터 last 전 인덱스까지 리버스 하는것이기 때문에
		// j만 넣으면 j전까지의 인덱스값까지 리버스함 j번까지 포함하기 위해서 +1을 한다.
		//i번부터 j번까지 역순으로 정렬
	}
    for (int i = 1; i <= N; i++) {
			cout << box[i] << " ";
		}

	return 0;
}