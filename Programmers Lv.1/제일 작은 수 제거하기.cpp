#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int temp = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[temp] >= arr[i]) temp = i;
    }

    arr.erase(arr.begin() + temp);

    if (arr.empty()) arr.push_back(-1);

    return arr;
}