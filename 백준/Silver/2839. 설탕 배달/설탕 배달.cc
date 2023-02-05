//Greedy Algorithm

#include <iostream>
using namespace std;
#define SIZE_S 3
#define SIZE_L 5

int main() {
	int kg;
	cin >> kg;
	int a = kg / SIZE_L;
	int b = 0;
	while (1) {
		if(a < 0){
			a = -1;
			break;
		}
		if ((kg -(a * SIZE_L)) % SIZE_S == 0) {
			b = (kg - (a * SIZE_L)) / SIZE_S;
			break;
		}
		a--; //애매하게 남았을때
	}

	cout << a+b;
	return 0;
}