#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int temp = 0;

    for (auto i : s)
    {
        if (temp % 2 == 0)
            answer += toupper(i);
        else
            answer += tolower(i);

        temp++;
        if (i == ' ')
            temp = 0;
    }

    return answer;
}