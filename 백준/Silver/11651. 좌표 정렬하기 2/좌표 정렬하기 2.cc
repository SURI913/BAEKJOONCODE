#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair <int, int> xy1, pair<int, int> xy2) {	//compare은 bool값 반환
	if (xy1.second == xy2.second) {	//x좌표가 같다면
		return xy1.first < xy2.first;	//x좌표가 같지 않다면 x좌표를 오름차순으로
	}
	return xy1.second < xy2.second;		//y좌표를 오름순으로
}

int main() {
	int N;
	cin >> N;

	//벡터 2차원으로 입력
	vector <pair <int, int> > XY;	//pair로 2차원 선언
	for (int i = 0; i < N; i++) {
		int temp1, temp2;
		cin >> temp1 >> temp2;
		XY.push_back(make_pair(temp1, temp2)); //temp1 = frist, tmep2 = second
	}

	sort(XY.begin(), XY.end(), compare);

	for (auto& result : XY) {
		cout << result.first << " " << result.second << '\n';
	}

	return 0;
}