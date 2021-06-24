#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    string a;
    string b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int an = stoi(a);
    int bn = stoi(b);
    int result = max(an, bn);
    cout << result;
}