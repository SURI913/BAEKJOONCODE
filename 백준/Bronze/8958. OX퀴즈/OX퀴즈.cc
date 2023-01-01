#include<iostream>
#include<string>
using namespace std;

int main() {
	int size, count;
	string quiz;
	cin >> size;
	int* sum = new int[size] { 0 };

	for (int i = 0; i < size; i++) {
		cin >> quiz;
		count = 0;

		for (int j = 0; j < quiz.length(); j++) {
			if (quiz[j] == 'O') {
				count = count + 1; //값 누적 시, 누적 값+1
				sum[i] += count;
			}
			else {	//X인 경우, 모든 누적값 초기화
				count = 0;
			}
		}
	}
	
	//출력
	for (int i = 0; i < size; i++) {
		cout << sum[i] << endl;
	}

	return 0;
}