#include<iostream>
using namespace std;

void hanso(int i);
void check(int i[]);
int main() {
	int input;
	cin >> input;
	hanso(input);
	return 0;
}

void hanso(int size) {
	int result[1001];
	int count = 0; //한수 카운트

	for (int i = 1; i <= size; i++) {
		if (i < 100) {	//1~99까지는 한수이다.
			count++;
		}
		else if (i == 1000) { //1000은 한수 x
			break;
		}
		else {
			int j = 0;
			int temp = i;
			while (temp != 0) {
				result[j] = temp % 10; //1의 자릿수 분리
				temp /= 10;	 //10의자릿수 이상 분리
				j++;//배열 인덱스 옮기기
			}

			if (result[0] - result[1] == result[1] - result[2]) {	//각 값의 차가 동일한지 체크
				count++;
			}
		}
	}
	cout << count << endl;
}