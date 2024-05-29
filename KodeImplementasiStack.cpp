#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
vector<string> KonversiInfix(string str);

vector<string> KonversiInfix(string str) {
    vector<string> infix;
string digit; 

for (size_t i = 0; i < str.size(); i++) {
    char currentChar = str[i]; 

    if (isspace(currentChar)) {
        continue;
    }
    else if (isdigit(currentChar)) {
        digit += currentChar;
    } 
    else if (currentChar == '-' && (i == 0 || JenisOperasi(str[i - 1]) || str[i - 1] == '(')) {
        if (str[i + 1] == '(') {
            infix.push_back("-1");
            infix.push_back("*");
        } else if (isdigit(str[i + 1])) {
            digit += currentChar;
        } else {
            infix.push_back("-1");
            infix.push_back("*");
        }
    } 
    else {
        if (!digit.empty()) {
            infix.push_back(digit);
            digit.clear();
        }
        infix.push_back(string(1, currentChar));
    }
}

if (!digit.empty()) {
    infix.push_back(digit);
}
return infix;
}
