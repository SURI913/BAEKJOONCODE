#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector <int> point, temp;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		point.push_back(temp);
	}

	temp = point;	//원본과 복사본 분리해서 작업

	sort(temp.begin(), temp.end());
	//unique 중복된 값을 지우는데 반환값이 중복된 값 하나를 포함하기대문에 erase로 마지막값을 지워주는 것
	temp.erase(unique(temp.begin(), temp.end()), temp.end()); //중복값 제거
	//중복된 값 없이 숫자를 순서대로 정렬한 것

	for (int i = 0; i < N; i++) {
		cout << lower_bound(temp.begin(), temp.end(), point[i]) - temp.begin()	 << " ";
		//몇번째로 작은 수인지 출력
		//lower_bound함수는 찾으려는 값보다 같거나 큰 숫자가 배열 몇번째에서 처음 등장하는지 출력하는 함수
		//temp에서 point[i]의 값이 몇번째에서 처음 등장하는지 찾음
	}

	return 0;
}