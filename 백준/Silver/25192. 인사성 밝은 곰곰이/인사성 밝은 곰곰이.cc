#include <iostream>
#include <set>
using namespace std;


int main() {
    int n, count = 0;
    set <string> id;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        if (tmp == "ENTER") {
            //뉴비 등장
            count += id.size();
            id.clear();
            continue;
        }
        id.insert(tmp);
    }
    count += id.size();
    cout << count;
    return 0;
}