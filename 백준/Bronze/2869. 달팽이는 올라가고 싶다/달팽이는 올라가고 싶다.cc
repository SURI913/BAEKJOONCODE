#include <iostream>
using namespace std;
int main() {
	int day = 1; //1일째 시작
	int A, B, V; //낮에 올라가는 길이, 밤에 떨어지는 길이, 올라가야할 길이
	cin >> A >> B >> V;
	if (A < V) {
		day += (V - A) / (A - B); //정상에 닿으면 미끄러지지 않음

		if ((V - A) % (A - B) != 0) { // 남은 칸 만큼 하루를 더 올라야하므로
			day++;
		}
	}
	
	cout << day;
	return 0;
}