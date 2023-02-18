#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct person
{
	int age, idx;
	string name;
};

bool compare(const person& now, const person& last)
{
	if (now.age != last.age) return now.age < last.age;
	return now.idx < last.idx;
}

person J[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> J[i].age >> J[i].name;
		J[i].idx = i;
	}
	
	stable_sort(J, J + N, compare); //오름차순 정렬

	for (int i = 0; i < N; i++) {
		cout << J[i].age << ' ' << J[i].name << '\n';
	}
	return 0;
}