#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M; //바구니 개수, 몇번 바꿀것인가
	int basket[101] = { 0, };
	for (int i = 1; i <= N; i++) {
		basket[i] = i;
	} //1번부터 N번까지 번호가 순서대로 들어감
	for (int l = 0; l < M; l++) {
		int i, j, k;
		cin >> i >> j >> k;
		//i번째 바구니부터 j번째 바구니의 순서를 회전시키는데
		//그 때 기준 바구니는 k번째 바구니라는 뜻
		rotate(basket + i, basket + k, basket + (j + 1)); // 시작 중간 끝, 시작과 끝은 i,k 해당원소를 포함한다.end는 포함x 
		//j 원소를 포함하기위해 +1한다
		//벡터로 작업시 반대로 i와 k에 -1씩해야함
		//push로 순차적으로 입력되기때문에 만약 5개를 입력했다면 0~4까지의 인덱스가 생성
		// rotate함수는 시작과 중간의 인수는 해당원소를 포함하기 때문에 i와k값에 정확하게 접근하려먼 -1을 해줘야함
	}
	for (int i = 1; i <= N; i++) {
		cout << basket[i] << ' ';
	}
	return 0;
}