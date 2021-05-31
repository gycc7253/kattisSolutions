#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc-- > 0) {
        int N;
        cin >> N;
        int number = 1;
        while (N > 0) {
            number *= N;
            N--;
        }
        printf("%d\n", number % 10);
    }
}