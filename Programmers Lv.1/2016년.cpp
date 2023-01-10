#include <string>
#include <vector>
#include <numeric>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> day = { "FRI","SAT","SUN","MON","TUE","WED","THU" };
    vector<int> month = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    int tmp = 0;

    tmp = accumulate(month.begin(), month.begin() + (a - 1), 0);
    tmp = (tmp + b - 1) % 7;

    answer = day[tmp];

    return answer;
}