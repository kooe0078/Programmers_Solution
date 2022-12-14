using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long num = price * (long long)(count * (count + 1) / 2);

    if (money - num >= 0)
        answer = 0;
    else
        answer = num - money;

    return answer;
}