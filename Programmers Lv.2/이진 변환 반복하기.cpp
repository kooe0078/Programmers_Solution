#include <string>
#include <vector>

using namespace std;

string Tobinary(int num) // ������ ��ȯ
{
    string binary = "";

    while (num > 0)
    {
        if (num % 2 == 1) binary = "1" + binary;
        else binary = "0" + binary;
        num >>= 1; // ��Ʈ ���� ������
    }

    return binary;
}

vector<int> solution(string s) {
    vector<int> answer;
    string str = "";
    int repeatNum = 0;
    int deleteNum = 0;

    while (s != "1")
    {
        str = "";
        repeatNum++;

        for (auto i : s)
        {
            if (i == '1')
                str += i;
            else
                deleteNum++;
        }

        s = Tobinary(str.length());
    }

    answer.push_back(repeatNum);
    answer.push_back(deleteNum);

    return answer;
}