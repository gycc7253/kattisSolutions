#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;
    int c = min(a, b);
    int d = max(a ,b);
    cout << c << " " << d;
}