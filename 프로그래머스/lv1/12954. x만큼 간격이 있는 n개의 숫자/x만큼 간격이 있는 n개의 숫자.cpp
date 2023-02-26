#include <string>
#include <vector>

using namespace std;

class NumArray {
	long long x, n;
	vector<long long> ans;
public:
	NumArray(long long x, long long n);
	vector<long long> makeArray();
};

NumArray::NumArray(long long x, long long n) {
	this->x = x;
	this->n = n;
}
vector<long long> NumArray::makeArray() {
	for (int i = 1; i <= n; i++) {
		ans.push_back(x * i);
	}
	return ans;
}

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    NumArray a(x, n);
    answer = a.makeArray();
    return answer;
}