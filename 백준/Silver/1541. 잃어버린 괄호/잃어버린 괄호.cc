#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> ops;
vector<int> nums;
int result;

int Greedy() {
    vector<int> groupSums;

    int sum = nums[0];
    for (int i = 0; i < (int)ops.size(); i++) {
        if (ops[i] == '+') {
            sum += nums[i + 1];
        }
        else { // '-'
            groupSums.push_back(sum);
            sum = nums[i + 1];
        }
    }
    groupSums.push_back(sum);

    int result = groupSums[0];
    for (int i = 1; i < (int)groupSums.size(); i++) {
        result -= groupSums[i];
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;

    string buf;
    for (int i = 0; i < (int)input.size(); i++) {
        char c = input[i];
        if (c == '+' || c == '-') {
            ops.push_back(c);
            nums.push_back(stoi(buf));
            buf.clear();
        }
        else {
            buf += c;
        }
    }
    nums.push_back(stoi(buf));

    cout << Greedy() << '\n';
    return 0;
}
