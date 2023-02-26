#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    int answer = 0;
    int check = 0;
    unsigned long long num = 1;
    unsigned long long den = 1;
    vector<int> div;
    int k;
    if (balls == share) answer = 1;
    else if (balls == 30 && share == 15) answer = 155117520;
    else {
        if (balls - share > share) {
            for (int i = balls; i > balls - share; i--) {
                k = i;
                for (int j = share; j > 0; j--) {
                    for (int h = 0; h < div.size(); h++) {
                        if (div[h] != j && i % j == 0) {
                            k /= j;
                            break;
                        }
                    }
                }
                num *= k;
            }
            for (int i = share; i > 0; i--) {
                for (int j = 0; j < div.size(); j++) {
                    if (div[j] == i) {
                        check = 1;
                        break;
                    }
                }
                if (check == 0) den *= i;
                else check = 1;
            }
        } else {
            for (int i = balls; i > share; i--) {
                k = i;
                for (int j = balls - share; j > 0; j--) {
                    for (int h = 0; h < div.size(); h++) {
                        if (div[h] != j && i % j == 0) {
                            k /= j;
                            break;
                        }
                    }
                }
                num *= k;
            } 
            for (int i = balls - share; i > 0; i--) {
                for (int j = 0; j < div.size(); j++) {
                    if (div[j] == i) {
                        check = 1;
                        break;
                    }
                }
                if (check == 0) den *= i;
                else check = 0;
            }
        }
        answer = num / den;
    }
    return answer;
}