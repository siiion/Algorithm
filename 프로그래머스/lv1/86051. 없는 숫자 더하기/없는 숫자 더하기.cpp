#include <string>
#include <vector>

using namespace std;

class EmptySum {
    vector<int> numbers;
public:
    EmptySum(vector<int> numbers);
    int solve();
};
EmptySum::EmptySum(vector<int> numbers) {
    this->numbers = numbers;
}
int EmptySum::solve() {
    int empty;
    int result = 0;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j < numbers.size(); j++) {
            if (i == numbers[j]) {
                empty = -1;
                break;
            }
            else empty = i;
        }
        if (empty != -1) result += empty;
    }
    return result;
}

int solution(vector<int> numbers) {
    int answer = -1;
    EmptySum mySum(numbers);
    answer = mySum.solve();
    return answer;
}