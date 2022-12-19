#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string tmp = "";
    vector<int> arr;

    for (auto i : s)
    {
        if (i == ' ')
        {
            arr.push_back(stoi(tmp));
            tmp.clear();
            continue;
        }
        tmp += i;
    }
    arr.push_back(stoi(tmp));

    sort(arr.begin(), arr.end());

    answer = to_string(arr.front()) + ' ' + to_string(arr.back());

    return answer;
}