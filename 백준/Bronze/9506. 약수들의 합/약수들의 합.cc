#include <iostream>
#include <vector>
using namespace std;

int main() {
	while (1) {
		int input, sum = 0;
		vector <int> arr;
		cin >> input;
		if (input == -1) break;

		for (int i = 1; i < input; i++) {
			//자기 자신을 제외한 약수
			if (input % i == 0) {
				arr.push_back(i); //약수 보관
				sum += i;
			}
		}

		//완전 수 일 때 출력
		if (sum == input) {
			cout << input << " = "; // 6 = 
			for (int i = 0; i <= arr.size(); i++) { // 1 + 2 + 3
				if (i == arr.size() - 1) {
					cout << arr[i] << '\n';
					break;
				}
				cout << arr[i] << " + ";
			}
		}
		else cout << input << " is NOT perfect." << '\n';
	}
	return 0;
}