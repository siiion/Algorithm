#include <string>
#include <vector>

using namespace std;

class Mask {
    string phone_number;
public:
    Mask(string phone_number);
    string solve();
};
Mask::Mask(string phone_number) {
    this->phone_number = phone_number;
}
string Mask::solve() {
    for (int i = 0; i < phone_number.length()-4; i++) {
        phone_number[i] = '*';
    }
    return phone_number;
}

string solution(string phone_number) {
    string answer = "";
    Mask myMask(phone_number);
    answer = myMask.solve();
    return answer;
}