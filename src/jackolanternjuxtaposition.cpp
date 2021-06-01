#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int x;
    int product = 1;
    while (cin >> x) {
        product *= x;
    }
    printf("%d", product);
}