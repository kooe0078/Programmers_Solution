#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";

    s[0] = std::toupper(s[0]);

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == ' ')
            s[i + 1] = std::toupper(s[i + 1]);
        else if (s[i - 1] != ' ')
            s[i] = std::tolower(s[i]);
    }

    answer = s;

    return answer;
}