#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

bool JenisOperasi(char A);
vector<string> KonversiInfix(string str);

bool JenisOperasi(char A) {
    return (A == '*' or A == '/' or A == '+' or A == '-' or A == '%');
}
