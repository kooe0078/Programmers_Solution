#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 1;
    stack<int> sum;

    sort(people.begin(), people.end());

    for (int i : people)
    {
        if (!sum.empty())
        {
            if (sum.top() + i >= limit)
            {
                sum.pop();
                answer++;
            }
            else
            {
                sum.push(i);
            }
        }
        else
        {
            sum.push(i);
        }

    }

    return answer;
}