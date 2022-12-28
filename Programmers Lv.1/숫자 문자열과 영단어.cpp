#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    int answer = 0;
    map<string, int> numMap;
    numMap["zero"] = 0;
    numMap["one"] = 1;
    numMap["two"] = 2;
    numMap["three"] = 3;
    numMap["four"] = 4;
    numMap["five"] = 5;
    numMap["six"] = 6;
    numMap["seven"] = 7;
    numMap["eight"] = 8;
    numMap["nine"] = 9;

    size_t position = 0;
    for (auto iter = numMap.begin(); iter != numMap.end(); ++iter)
    {
        while ((position = s.find(iter->first)) != string::npos)
        {
            s.replace(position, iter->first.size(), to_string(iter->second));
        }
    }
    answer = stoi(s);

    return answer;
}