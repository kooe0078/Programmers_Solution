#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int bpy = brown + yellow;

    for (int y_Height = 1; y_Height <= (yellow / y_Height); y_Height++)
    {
        if (yellow % y_Height == 0)
        {
            // ���� = b����(y����+2) * b����(yŸ��/y����+2)
            int width = (y_Height + 2) * (yellow / y_Height + 2);

            // ���� = bŸ�� �� + yŸ�� ��
            if (width == bpy)
            {
                answer.push_back(yellow / y_Height + 2);
                answer.push_back(y_Height + 2);
                break;
            }
        }
    }

    return answer;
}