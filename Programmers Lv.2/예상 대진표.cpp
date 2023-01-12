#include <iostream>

using namespace std;

int Func(int num)
{
    if (num % 2 == 0) return num / 2;
    else            return (num + 1) / 2;
}

int solution(int n, int a, int b)
{
    int answer = 1;

    while (n > 1)
    {
        if (a % 2 != 0 && a + 1 == b) break;

        answer++;
        a = Func(a);
        b = Func(b);
        n /= 2;
    }


    return answer;
}