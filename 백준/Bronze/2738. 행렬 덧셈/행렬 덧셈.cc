#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	//2차원 배열 동적 할당 방법
	int** array1 = new int*[N] { 0 }; //2차원 배열의 행의 수만큼 동적 할당
	for (int i = 0; i < N; i++) { //열의 수만큼 동적 할당.
		array1[i] = new int[M]; //행으로 쓸 인덱스에 열만큼 동적할당한다
	}

	int** array2 = new int* [N] { 0 };
	for (int i = 0; i < N; i++) {
		array2[i] = new int[M];
	}

	//배열 값 input 받아 초기화
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> array1[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> array2[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << array1[i][j] + array2[i][j] << " ";
			if (j == M - 1) {
				cout << endl;
			}
		}
	}


	//배열 할당 해제
	for (int i = 0; i < N; i++) { //열 해제
		delete[] array1[i];
	}
	delete[] array1; //행 해제

	for (int i = 0; i < N; i++) {
		delete[] array2[i];
	}
	delete[] array2;
	return 0;
}