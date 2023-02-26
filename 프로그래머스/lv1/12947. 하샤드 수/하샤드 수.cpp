#include <string>
#include <vector>

using namespace std;

class Hasyard {
protected:
	int plusDecimal(int x);
public:
	bool check(int y);
};

int Hasyard::plusDecimal(int x) {
	int res = 0;
	for (int i = x; i > 0; i /= 10) {
		res += i % 10;
	}
	return res;
}
bool Hasyard::check(int y) {
	int sum = plusDecimal(y);
	if (sum > y) {
		if (sum % y == 0) return true;
		else return false;
	}
	else {
		if (y % sum == 0) return true;
		else return false;
	}
}

bool solution(int x) {
    bool answer = true;
    Hasyard a;
    answer = a.check(x);
    return answer;
}