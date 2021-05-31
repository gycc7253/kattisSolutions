#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;
    if (wc >= ws + 2 && hc >= hs + 2) {
        printf("1");
    } else {
        printf("0");
    }
}