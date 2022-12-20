#include <string>
#include <vector>

using namespace std;

string Tobinary(int num, int length) // ������ ��ȯ
{
    string binary = "";

    while (num > 0)
    {
        if (num % 2 == 1)   binary = "1" + binary;
        else                binary = "0" + binary;
        num >>= 1; // ��Ʈ ���� ������
    }

    while (binary.length() < length) // �������� �ڸ����� ���� ���̿� ���� ���� ��� ����
        binary = "0" + binary;

    return binary;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; i++)
    {
        string tmp = "";
        string ar_1 = Tobinary(arr1[i], n);
        string ar_2 = Tobinary(arr2[i], n);

        for (int j = 0; j < n; j++)
        {
            if (ar_1[j] == '1' || ar_2[j] == '1')
            {
                tmp += "#";
            }
            else
            {
                tmp += " ";
            }
        }
        answer.push_back(tmp);
    }


    return answer;
}