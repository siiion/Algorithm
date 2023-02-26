#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> index;
    index = emergency;
    sort(index.begin(), index.end());
    for (int i = 0; i < emergency.size(); i++) {
        for (int j = 0; j < index.size(); j++) {
            if (emergency[i] == index[j])
                answer.push_back(emergency.size() - j);
        }
    }
    return answer;
}