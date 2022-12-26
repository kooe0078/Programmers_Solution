#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    stack<char> stk;

    for (auto i : s)
    {
        if (!stk.empty())
        {
            if (stk.top() == i)
                stk.pop();
            else
                stk.push(i);
        }
        else
            stk.push(i);
    }

    if (stk.empty())    return 1;
    else                return 0;
}