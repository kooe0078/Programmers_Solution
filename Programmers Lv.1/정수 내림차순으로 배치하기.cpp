#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    vector<int> arr;

    while (n)
    {
        arr.push_back(n % 10);
        n /= 10;
    }

    sort(arr.begin(), arr.end());

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        answer = answer * 10 + arr[i];
    }


    return answer;
}