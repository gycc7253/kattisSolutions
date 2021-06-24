#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc-- > 0) {
        double b;
        double p;
        cin >> b >> p;
        double min = 60 * (b - 1) / p;
        double avg = 60 * b / p;
        double max = 60 * (b + 1) / p;
        printf("%.4f %.4f %.4f\n", min, avg, max);
    }
}