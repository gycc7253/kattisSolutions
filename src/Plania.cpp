#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int W = (int) pow(2, N) + 1;
    int result = W * W;
    printf("%d", result);
}