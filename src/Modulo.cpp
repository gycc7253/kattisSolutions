#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int m[42];
    std::fill(m, m + sizeof(m)/sizeof(int), 0);
    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        m[n % 42] = 1;
    }
    int count = 0;
    for (int i = 0; i < 42; i++) {
        count += m[i];
    }
    printf("%d", count);

}