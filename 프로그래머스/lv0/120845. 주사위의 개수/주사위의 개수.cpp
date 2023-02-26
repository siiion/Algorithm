#include <string>
#include <vector>

using namespace std;

// int fillHorizontal(int boxH, int n) {
//     int result = 0;
//     result = boxH / n;
//     return result;
// }

// int fillVertical(int boxY, int n) {
//     int result = 0;
//     result = boxY / n;
//     return result;
// }

// int fillHeight(int boxH, int n) {
//     int result = 0;
//     result = boxH / n;
//     return result;
// }

int solution(vector<int> box, int n) {
    int answer = 1;
    // answer = fillHorizontal(box[0], n) * fillVertical(box[1], n) * fillHeight(box[2], n);
    for (int i = 0; i < box.size(); i++) {
        answer *= box[i] / n;
    }
    return answer;
}