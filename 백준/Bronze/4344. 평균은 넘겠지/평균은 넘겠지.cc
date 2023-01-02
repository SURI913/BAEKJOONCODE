#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int c; //케이스 갯수
	int count = 0;	//평균이상 카운트
	int student = 0; //학생 수
	double average = 0; //평균
	cin >> c;
	double* grade;
	double* result = new double[c] {0}; //동적 메모리 할당

	for (int i = 0; i < c; i++) {
		cin >> student;
		grade = new double[student] {0};
		count = 0;
		average = 0;

		for (int j = 0; j < student; j++) {
			cin >> grade[j];//학생 점수
			average += grade[j];
		}
		average /= student; //평균내기

		for (int j = 0; j < student; j++) {
			if (grade[j] > average) {	//학생 점수가 평균 이상이면
				count++;
			}
		}
		
		result[i] = (double)count / student * 100; //결과저장
	}

	//출력
	for (int i = 0; i < c; i++) {
		cout << fixed;
		cout.precision(3);
		cout << round(result[i]*1000)/1000 << "%" << endl;
		//round 소숫점아래 3자리 반올림 출력 *1000 )/1000필수
	}
	return 0;
}