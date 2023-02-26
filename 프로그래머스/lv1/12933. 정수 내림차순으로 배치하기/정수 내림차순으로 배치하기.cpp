#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Order {
	long long n;
public:
	Order(long long n);
	long long makeOrder();
};

Order::Order(long long n) {
	this->n = n;
}
long long Order::makeOrder() {
	long long ans = 0;
	vector<int> a;
	for (long long i = n; i > 0; i /= 10) {
		a.push_back(i % 10);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size(); i++) {
		ans += a[i] * pow(10, i);
	}
	return ans;
}

long long solution(long long n) {
    long long answer = 0;
    Order b(n);
    answer = b.makeOrder();
    return answer;
}