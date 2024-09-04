#include <iostream>
#include <set>
using namespace std;


int main() {
    int n, count = 0;
    set <string> name;
    bool is_dancing;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string tmp1, tmp2;
        cin >> tmp1>>tmp2;
        if (tmp1 == "ChongChong") {
            //춤추는 사람 등장
            name.insert( tmp1);
        }
        else if (tmp2 == "ChongChong") {
            name.insert( tmp2 );
        }
        set <string>::iterator iter1 = name.find(tmp1);
        if (iter1 != name.end()) name.insert(tmp2);
        set <string>::iterator iter2 = name.find(tmp2);
        if (iter2 != name.end()) name.insert(tmp1);
    }

        count += name.size();
        cout << count;
    return 0;
}