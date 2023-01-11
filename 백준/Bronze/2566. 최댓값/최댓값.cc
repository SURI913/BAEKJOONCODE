#include <iostream>
using namespace std;
const int ROW = 9; //행
const int COL = 9; //열

void Max(int(*array)[COL]);

int main() {
	int array[ROW][COL] { 0 };
	
	//입력
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cin >> array[i][j];
		}
	}
	Max(array);

	return 0;
}

//열이 LOW인 2차원 배열을 가리키는 포인터
void Max(int(* array)[COL]) { //배열의 주소를 보냄
	int max = 0;
	int R_maxIndex = 0;
	int L_maxIndex = 0;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (max < array[i][j]) { 
				max = array[i][j];
				R_maxIndex = i;
				L_maxIndex = j;
			}
		}
	}
	cout << max << "\n" << R_maxIndex+1 << " " << L_maxIndex+1 << "\n";
}