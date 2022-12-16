#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int temp = 0;

    // 유클리드 호제법
    while (b > 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int temp = 0;

    if (n > m)
    {
        temp = n;
        n = m;
        m = temp;
    }

    int i = gcd(m, n);
    int j = lcm(m, n);

    answer.push_back(i);
    answer.push_back(j);

    return answer;
}