#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int most = -1;
    int count = 0;
    for (int i = 0; i < array.size(); i++) {
        for (int j = i; j < array.size(); j++) {
            if (array[i] == array[j]) count++;
        }
        if (count > most) {
            most = count;
            answer = array[i];
        } else if (count == most) answer = -1;
        count = 0;
    }
    return answer;
}