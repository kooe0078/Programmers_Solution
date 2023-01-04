#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int num = 0;

    sort(people.begin(), people.end());

    while (people.size() > num) {
        int back = people.back();
        people.pop_back();

        if (people[num] + back <= limit) {
            answer++;
            num++;
        }
        else
            answer++;
    }

    return answer;
}