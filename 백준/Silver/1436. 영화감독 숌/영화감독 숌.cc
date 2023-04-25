#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N; //시리즈 입력
	int title = 0, count = 0;
	while (count != N) {//count 가 666까지 가야하므로
		title++;
		int temp = title;
		while (temp != 0) {
			if (temp % 1000 == 666) {	//종말의 숫자라면
				count++;
				break;
			}
			else {
				temp /= 10;	//1의 자리 수 분리
			}
		}
	}
	cout << title << endl;
	return 0;
}