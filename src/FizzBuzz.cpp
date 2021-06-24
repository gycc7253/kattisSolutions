#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int X;
    int Y;
    int N;
    cin >> X >> Y >> N;
    for (int i = 1; i <= N; i++) {
        if (i % X == 0 && i % Y == 0) {
            cout << "FizzBuzz\n";
        } else if (i % X == 0) {
            cout << "Fizz\n";
        } else if (i % Y == 0) {
            cout << "Buzz\n";
        } else {
            cout << i << "\n";
        }
    }
}