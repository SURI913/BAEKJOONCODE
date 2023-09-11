#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int x,y,w,h;
	cin >> x >> y >> w >> h;
	
	vector <int> min = { x, y, h - y, w - x };

	int result = *min_element(min.begin(), min.end());
	cout << result << '\n';
	return 0;
}