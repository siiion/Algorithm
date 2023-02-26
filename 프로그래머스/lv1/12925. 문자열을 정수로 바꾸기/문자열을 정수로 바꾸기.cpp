#include <string>
#include <vector>
#include <string>

using namespace std;

class StrToNum {
    public:
    int change(string s);
    bool checkPM(char m);
};

bool StrToNum::checkPM(char m) {
    if (m == '-') return true;
    else return false;
}
int StrToNum::change(string s) {
    return stoi(s);
}

int solution(string s) {
    int answer = 0;
    string ms = "";
    StrToNum a;
    if (a.checkPM(s[0])) {
        for (int i = 1; i < s.length(); i++) ms += s[i];
        answer = a.change(ms);
        answer = -answer;
    } else answer = a.change(s);
    return answer;
}