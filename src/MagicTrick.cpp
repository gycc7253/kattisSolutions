#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    int arr[26];
    fill(arr, arr + sizeof(arr)/sizeof(int), 0);
    for (int i = 0; i < s.length(); i++) {
        arr[s[i]-'a']++;
    }
    bool canDecide = true;
    for (int i = 0; i < 26; i++) {
        if (arr[i] > 1) {
            canDecide = false;
            break;
        }
    }
    printf(canDecide ? "1" : "0");

}