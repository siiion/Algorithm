#include <string>
#include <vector>

using namespace std;

string solution(string letter) {
    string answer = "";
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string word = "";
    letter += " ";
    for (int i = 0; i < letter.length(); i++) {
        if (letter[i] != ' ') {
            word += letter[i];
        } else {
            for (int j = 0; j < morse.size(); j++) {
                if (morse[j] == word) answer += 'a' + j;
            }
            word = "";
        }
    }
    return answer;
}