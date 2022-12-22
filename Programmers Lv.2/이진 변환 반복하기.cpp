#include <string>
#include <vector>

using namespace std;

string Tobinary(int num) // 이진수 변환
{
    string binary = "";

    while (num > 0)
    {
        if (num % 2 == 1) binary = "1" + binary;
        else binary = "0" + binary;
        num >>= 1; // 비트 단위 연산자
    }

    return binary;
}

vector<int> solution(string s) {
    vector<int> answer;
    string str = "";
    int cycle = 0;
    int num = 0;

    while (s != "1")
    {
        cycle++;

        for (auto i : s)
        {
            if (i == '1')
                str += i;
            else
                num++;
        }

        s = Tobinary(str.length());
    }

    answer.push_back(cycle);
    answer.push_back(num);

    return answer;
}