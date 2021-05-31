#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    sum -= N - 1;
    printf("%d", sum);
}