#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    for (long i = 1; i * i <= n; i++)
    {
        if (sqrt(n) == i)
            return pow(i + 1, 2);
    }

    return -1;
}