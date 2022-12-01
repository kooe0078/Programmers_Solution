#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int half = nums.size() / 2;

    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    if (nums.size() >= half)
        return half;
    else
        answer = nums.size();

    return answer;
}