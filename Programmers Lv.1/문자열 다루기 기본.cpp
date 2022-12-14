#include <string>
#include <vector>

using namespace std;

bool solution(string s) {

    if (s.length() != 4 && s.length() != 6)
        return false;

    for (auto i : s)
    {
        if (isdigit(i) == 0)
            return false;
    }

    return true;
}