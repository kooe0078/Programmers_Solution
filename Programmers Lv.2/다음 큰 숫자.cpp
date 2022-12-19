#include <string>
#include <vector>
#include <algorithm>

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

int SearchNextNum(string str, int num) // string ���¿��� ������ ��
{
    int findNum = num + 1;
    string nextNum = "";

    while (true)
    {
        nextNum = Tobinary(findNum);
        nextNum.erase(remove(nextNum.begin(), nextNum.end(), '0'), nextNum.end());

        if (nextNum == str)
            break;

        findNum++;
    }

    return findNum;
}

int solution(int n) {
    int answer = 0;
    string binary = "";

    binary = Tobinary(n);
    binary.erase(remove(binary.begin(), binary.end(), '0'), binary.end());

    answer = SearchNextNum(binary, n);

    return answer;
}