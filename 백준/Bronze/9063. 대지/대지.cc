#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int n, x, y;
	cin >> n;

	vector <int> tmpX, tmpY;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		tmpX.push_back(x);
		tmpY.push_back(y);
	}
	int minX = *min_element(tmpX.begin(), tmpX.end());
	int maxX = *max_element(tmpX.begin(), tmpX.end());
	int minY = *min_element(tmpY.begin(), tmpY.end());
	int maxY = *max_element(tmpY.begin(), tmpY.end());

	cout << (maxX - minX) * (maxY - minY) << '\n';
	return 0;
}