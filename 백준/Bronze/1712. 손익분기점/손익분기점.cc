#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int fc, vc, sc;
	cin >> fc >> vc >> sc;

	if (vc < sc) {
		int amount = (fc / (sc - vc) + 1);
		cout << amount;
	}
	else if (vc == sc || vc > sc) {
		cout << -1;
	}
	return 0;
}
