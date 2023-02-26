#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Divison {
    vector<int> arr;
    int divisor;
public:
    Divison(vector<int> arr, int divisor);
    vector<int> solve();
};
Divison::Divison(vector<int> arr, int divisor) {
    this->arr = arr;
    this->divisor = divisor;
    sort(this->arr.begin(), this->arr.end());
}
vector<int> Divison::solve() {
    vector<int> result;
    bool check = false;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % divisor == 0) {
            result.push_back(arr[i]);
            check = true;
        }
    }
    if (check == false) result.push_back(-1);
    return result;
}

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    Divison myDiv(arr, divisor);
    answer = myDiv.solve();
    return answer;
}