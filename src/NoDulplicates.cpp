#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<string> set;
    string input;
    bool hasRepeat = false;
    while (cin >> input) {
        if (set.count(input)) {
            hasRepeat = true;
            break;
        }
        set.insert(input);
    }
    cout << (hasRepeat ? "no" : "yes");
}