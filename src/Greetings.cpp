#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string input;
    cin >> input;
    int length = input.length();
    string a = "h";
    for (int i = 0; i < (length - 2) * 2; i++) {
        a += "e";
    }
    a += "y";
    cout << a;
}