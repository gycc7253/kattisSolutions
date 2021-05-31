#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc-- > 0) {
        int r, e, c;
        cin >> r >> e >> c;
        if (r + c > e) {
            printf("do not advertise\n");
        } else if (r + c == e) {
            printf("does not matter\n");
        } else {
            printf("advertise\n");
        }
    }

}