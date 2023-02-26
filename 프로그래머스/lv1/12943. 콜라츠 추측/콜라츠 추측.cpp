#include <string>
#include <vector>

using namespace std;

class Collatz {
    long long num;
public:
    Collatz(int num);
    int evenOdd();
};
Collatz::Collatz(int num) {
    this->num = num;
}
int Collatz::evenOdd() {
    int result;
    int count = 0;
    if (num == 1) {
        result = 0;
    }
    else {
        for (int i = 0; i < 500; i++) {
            if (num != 1) {
                if (num % 2 == 0) num /= 2;
                else num = num * 3 + 1;
            }
            else {
                result = i;
                break;
            }
        }
        if (num != 1) result = -1;
    }
    return result;
}

int solution(int num) {
    int answer = 0;
    Collatz res(num);
    answer = res.evenOdd();
    return answer;
}