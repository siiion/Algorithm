#include <string>
#include <vector>

using namespace std;

class Find {
    vector<string> seoul;
public:
    Find(vector<string> seoul);
    string solve();
};
Find::Find(vector<string> seoul) {
    this->seoul = seoul;
}
string Find::solve() {
    string result = "김서방은 ";
    string index;
    for (int i = 0; i < seoul.size(); i++) {
        if (seoul[i] == "Kim") {
            result += to_string(i);
            break;
        }
    }
    result += "에 있다";
    return result;
}

string solution(vector<string> seoul) {
    string answer = "";
    Find myFind(seoul);
    answer = myFind.solve();
    return answer;
}