#include<iostream>
using namespace std;
int main() {
	int max = 0, input;
	cin >> input;
	double* grade = new double[input];
	double result = 0;

	//최고점수
	for (int i = 0; i < input; i++) {
		cin >> grade[i];
		if (max < grade[i]) {
			max = grade[i];
		}
	}

	//바꾼 점수
	for (int i = 0; i < input; i++) {
		grade[i] = grade[i] / max * 100;
		result += grade[i];
	}
	result /= input;

	//출력
	//출력값의 절대오차 또는 상대오차가 10-2 이하
	cout << fixed;
	cout.precision(6);
	cout << result << endl;

	return 0;
}