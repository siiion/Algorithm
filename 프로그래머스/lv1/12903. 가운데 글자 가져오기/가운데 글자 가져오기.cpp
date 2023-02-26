#include <string>
#include <vector>

using namespace std;

class Middle {
    string s;
public:
    Middle(string s);
    string solve();
};
Middle::Middle(string s) {
    this->s = s;
}
string Middle::solve() {
    string result = "";
    if (s.length() % 2 == 0) result = result + s[s.length()/2-1] + s[s.length()/2];
    else result += s[(s.length()-1)/2];
    return result;
}

string solution(string s) {
    string answer = "";
    Middle myMid(s);
    answer = myMid.solve();
    return answer;
}