#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc-- > 0) {
        int x;
        cin >> x;
        if (x & 0x1 == 1) {
            printf("%d is odd\n", x);
        } else {
            printf("%d is even\n", x);
        }
    }

}