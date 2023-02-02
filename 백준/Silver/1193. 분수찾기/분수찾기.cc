#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	int i = 1;
	while (x > i) {
		x -= i;
		i++;
	} //x번째 대각선에 i번째 원소
	if(i % 2 == 1)//홀방향
		cout << i + 1 - x << '/' << x << endl;
	else //짝방향
		cout << x << '/' << i + 1 - x << endl;
	return 0;
}