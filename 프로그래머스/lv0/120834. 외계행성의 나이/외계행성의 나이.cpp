#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int age) {
    string answer = "";
    for (int i = age; i > 0; i /= 10) {
        answer += (i % 10) + 'a';
    }
    reverse(answer.begin(), answer.end());
    return answer;
}