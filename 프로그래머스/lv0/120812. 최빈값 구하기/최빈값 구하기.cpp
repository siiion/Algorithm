#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int largest = 0;
    vector<int> count(1000);
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < array.size(); j++) {
            if (array[j] == i) count[i]++;
        }
    }
    for (int i = 0; i < count.size(); i++) {
        if (count[i] > largest) {
            largest = count[i];
            count[i] = 0;
            answer = i;
        }
    }
    for (int i = 0; i < count.size(); i++) {
        if (count[i] == largest) {
            answer = -1;
        }
    }
    return answer;
}