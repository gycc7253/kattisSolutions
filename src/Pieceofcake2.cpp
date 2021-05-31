#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int h;
    int v;
    cin >> n >> h >> v;
    int h2 = n - h;
    int v2 = n - v;
    int hmax = max(h, h2);
    int vmax = max(v, v2);
    int result = hmax * vmax * 4;
    printf("%d", result);

}