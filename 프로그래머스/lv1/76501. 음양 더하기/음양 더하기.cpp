#include <string>
#include <vector>

using namespace std;

class RealSum {
    vector<int> absolutes;
    vector<bool> signs;
public:
    RealSum(vector<int> absolutes, vector<bool> signs);
    vector<int> setArr();
    int solve();
};
RealSum::RealSum(vector<int> absolutes, vector<bool> signs) {
    this->absolutes = absolutes;
    this->signs = signs;
}
vector<int> RealSum::setArr() {
    vector<int> result;
    for (int i = 0; i < absolutes.size(); i++) {
        if (signs[i]) result.push_back(absolutes[i]);
        else result.push_back(-absolutes[i]);
    }
    return result;
}
int RealSum::solve() {
    vector<int> resultArr = setArr();
    int result = 0;
    for (int i = 0; i < resultArr.size(); i++) result += resultArr[i];
    return result;
}

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 123456789;
    RealSum mySum(absolutes, signs);
    answer = mySum.solve();
    return answer;
}