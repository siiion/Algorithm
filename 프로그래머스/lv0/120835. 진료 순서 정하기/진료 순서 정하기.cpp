#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> original = emergency;
    int index;
    sort(emergency.begin(), emergency.end());
    reverse(emergency.begin(), emergency.end());
    for (int i = 0; i < original.size(); i++) {
        for (int j = 0; j < emergency.size(); j++) {
            if (emergency[j] == original[i]) {
                answer.push_back(j+1);
                break;
            }
        }
    }
    return answer;
}