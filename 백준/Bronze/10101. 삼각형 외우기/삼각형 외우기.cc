#include <iostream>
using namespace std;

int main() {
	
	int A, B, C;
	cin >> A >> B >> C;
	if (A == 60 && B == 60 && C == 60) {
		cout << "Equilateral\n";
	}
	else if (A + B + C == 180 && A == B || A == C || B == C) {
		cout << "Isosceles\n";
	}
	else if (A + B + C == 180) {
		cout << "Scalene\n";
	}
	else if (A + B + C != 180) {
		cout << "Error\n";
	}
	return 0;
}