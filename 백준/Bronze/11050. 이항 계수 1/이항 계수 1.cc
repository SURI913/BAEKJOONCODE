#include <iostream>
#include <math.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, k;
	cin >> n>>k;
	cout << tgamma(n+1)/(tgamma((n-k)+1)*tgamma(k+1));
	return 0;

}