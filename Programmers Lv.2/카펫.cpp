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
            // 넓이 = b세로(y세로+2) * b가로(y타일/y세로+2)
            int width = (y_Height + 2) * (yellow / y_Height + 2);

            // 넓이 = b타일 수 + y타일 수
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