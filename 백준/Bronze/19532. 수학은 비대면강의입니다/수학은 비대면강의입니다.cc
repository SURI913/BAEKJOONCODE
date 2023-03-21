#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int out = 0;
    //x값 for
    for (int x = -999; x < 1000; x++) {
        //y값 for
        for (int y = -999; y < 1000; y++) {
            if (a * x + b * y == c && d * x + e * y == f) {
                cout << x << " " << y << '\n';
                break;
            }
        }
    }

    return 0;
}