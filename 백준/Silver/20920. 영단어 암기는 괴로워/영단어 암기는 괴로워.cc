#include <iostream>
#include<utility>
#include<algorithm>
#include <map>
#include <vector>
using namespace std;

bool comp(pair<string, int>a, pair<string, int>b) {
    if (a.second == b.second) { //빈도수가 같을 경우
        if (a.first.length() == b.first.length()) // 글자수가 같을 경우
            return a.first < b.first; //글자 오름차순
        else return a.first.length() > b.first.length(); //글자수 내림차순
    }
    else return a.second > b.second; //빈도수 내림차순
}


int main() {
    map<string, int> checking;
    vector <pair<string, int>>my_dictionary;

    int n, m;
    cin >> n >> m;

    //단어 입력 및 빈도 체크
    while (n--) {
        string tmp;
        cin >> tmp;
        if (tmp.length() < m) continue; //길이 짧으면 저장 x
        checking[tmp]++;
     }

    for (auto word : checking) {
        my_dictionary.push_back({ word.first, word.second });
    }
    //단어 정렬
    sort(my_dictionary.begin(), my_dictionary.end(), comp);

    for (auto s : my_dictionary) {
        cout << s.first << '\n';
    }

    return 0;
}