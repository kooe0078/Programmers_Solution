#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = -1;
    long n = num;

    for (int trying = 0; trying < 500; trying++)
    {
        if (n == 1)
        {
            answer = trying;
            break;
        }

        if (n % 2 == 0)
            n = n / 2;
        else
            n = (n * 3) + 1;
    }

    return answer;
}