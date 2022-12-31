#include <iostream>
using namespace std;
int main() {
	int size, total, count =0;
	cin >> size;
	int *list = new int [size];
	for (int i = 0; i < size; i++) {
		cin >> list[i];
	}
	cin >> total;
	for (int i = 0; i < size; i++) {
		if (total == list[i]) {
			count++;
		}
	}
	cout << count;
	return 0;
}