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
        int n = 0;
        cin >> n;
        int minVal = 99;
        int maxVal = 0;
        for (int i = 0; i < n; i++) {
            int d;
            cin >> d;
            minVal = min(minVal, d);
            maxVal = max(maxVal, d);
        }
        int result = (maxVal - minVal) * 2;
        cout << result << "\n";
    }
}