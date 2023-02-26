#include <string>
#include <iostream>
using namespace std;

class Compare {
	string s;
public:
	Compare(string s);
	int CountP(string s);
	int CountY(string s);
	bool solution(string s);
};

Compare::Compare(string s) {
	this->s = s;
}
int Compare::CountP(string s) {
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) 
		if (s[i] == 'p' || s[i] == 'P') cnt++;
	return cnt;
}
int Compare::CountY(string s) {
	int cnt = 0;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == 'y' || s[i] == 'Y') cnt++;
	return cnt;
}
bool Compare::solution(string s) {
	bool answer = true;
	int a = CountP(s);
	int b = CountY(s);
	if (a == b) return true;
	else return false;
}

bool solution(string s)
{
    bool answer = true;
    Compare myCompare(s);
    answer = myCompare.solution(s);
    return answer;
}