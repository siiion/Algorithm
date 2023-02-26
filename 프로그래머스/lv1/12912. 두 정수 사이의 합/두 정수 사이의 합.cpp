#include <string>
#include <vector>

using namespace std;

class Sum {
    int a, b;
    vector<int> all;
public:
    Sum(int a, int b);
    void findAll();
    long long result();
};
Sum::Sum(int a, int b) {
    this->a = a;
    this->b = b;
    findAll();
}
void Sum::findAll() {
    if (a < b) {
        for (int i = a; i <= b; i++) all.push_back(i);
    }
    else
        for (int i = b; i <= a; i++) all.push_back(i);
}
long long Sum::result() {
    long long result = 0;
    for (int i = 0; i < all.size(); i++)
        result += all[i];
    return result;
}

long long solution(int a, int b) {
    long long answer = 0;
    Sum res(a, b);
    answer = res.result();
    return answer;
}