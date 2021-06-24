#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    double C;
    cin >> C;
    int L;
    cin >> L;
    double area = 0;
    while (L-- > 0) {
        double w, l;
        cin >> w >> l;
        area += w * l;
    }
    double sum = area * C;
    printf("%.7f", sum);
}