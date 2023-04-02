#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string answer;
	int N, B;
	cin >> N >> B;

	while (N != 0)
	{
		int temp = N % B;
		if (temp > 9) {
			//영어로 들어가면
			temp = temp - 10 + 'A';
			answer += temp;
		}
		else {
			answer += ('0' + temp);
		}
		N /= B;
	}
	reverse(answer.begin(), answer.end());
	cout << answer << '\n';
	return 0;
}