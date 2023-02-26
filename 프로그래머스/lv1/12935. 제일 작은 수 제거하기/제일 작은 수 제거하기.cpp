#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Removal {
    vector<int> arr;
public:
    Removal(vector<int> arr);
    vector<int> solve();
};
Removal::Removal(vector<int> arr) {
    this->arr = arr;
}
vector<int> Removal::solve() {
    vector<int> result;
    int smallest = arr[0];
    if (arr.size() == 1) result.push_back(-1);
    else {
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < smallest) smallest = arr[i];
        }
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != smallest) result.push_back(arr[i]);
        }
    }
    return result;
}

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    Removal myRemoval(arr);
    answer = myRemoval.solve();
    return answer;
}