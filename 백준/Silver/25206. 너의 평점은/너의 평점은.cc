#include <iostream>
#include <string>
using namespace std;

int main() {
	string lecture, grade; //강의명
	double credit; //이수학점
    double result = 0, sum = 0, resultSum = 0; //총결과, (계산용), 총학점
	for (int i = 0; i < 20; i++) {
		cin >> lecture >> credit >> grade;

		if (grade == "P") continue;

		if (grade == "A+") { result += 4.5 * credit; }
		else if (grade == "A0") { result += 4.0 * credit; }
		else if (grade == "B+") { result += 3.5 * credit; }
		else if (grade == "B0") { result += 3.0 * credit; }
		else if (grade == "C+") { result += 2.5 * credit; }
		else if (grade == "C0") { result += 2.0 * credit; }
		else if (grade == "D+") { result += 1.5 * credit; }
		else if (grade == "D0") { result += 1.0 * credit; }
		else if (grade == "F") { result += 0.0 * credit; }

		if (grade != "P") { sum += credit; }
	}

	cout << fixed;
	cout.precision(6);
	cout << result / sum;

	return 0;
}