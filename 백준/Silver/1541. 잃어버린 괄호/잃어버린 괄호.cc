#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<char> operators;
vector<int> num;
vector<int> sumNums;
int minusCount = 0;
int result;

void Greedy() {
	//최소값 찾기: 모두 더해서 빼는 방식
	int sum = num[0];
	for (int i = 0; i < operators.size(); i++) {
		//+면 값을 먼저 다 더해줌
		if (operators[i] == '+') {
			sum += num[i + 1];
		}
		else if (operators[i] == '-') {
			//-일때는 더한 값 저장하고 마지막에 다 빼주는걸로
			sumNums.push_back(sum);
			sum = num[i + 1];
			minusCount++;
			//cout << sumNums.back() << '-';
		}
	}
	sumNums.push_back(sum);
	//cout << sumNums.back() << '\n';

	result = sumNums[0];
	for (int i = 0; i < minusCount; i++) {
		result -= sumNums[i + 1];
	}
}

void Print() {
	cout << result << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input, numLine;
	cin >> input;
	//입력받은 식 처리
	for (int i = 0; i <= input.size(); i++) {
		if (input[i] == '-' || input[i] == '+') {
			operators.push_back(input[i]);
			if (!numLine.empty()) {
				num.push_back(stoi(numLine));
				numLine.clear();
			}
			continue;
		}
		numLine += input[i];
	}
	num.push_back(stoi(numLine));

	Greedy();
	Print();

	return 0;
}