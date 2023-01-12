#include <string>
#include <vector>
#include <algorithm>

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

int solution(vector<int> arr) {
    int answer = 0;

    while (arr.size() != 1)
    {
        int tmp = lcm(arr.at(arr.size() - 1), arr.at(arr.size() - 2));
        arr.pop_back();
        arr.pop_back();
        arr.push_back(tmp);
    }

    answer = arr[0];

    return answer;
}