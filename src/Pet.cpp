#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int scores[5];
    std::fill(scores, scores + sizeof(scores) / sizeof(int), 0);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            int grade;
            cin >> grade;
            scores[i] += grade;
        }
    }
    int maxIndex = 0;
    int max = 0;
    for (int i = 0; i < 5; i++) {
        if (scores[i] > max) {
            max = scores[i];
            maxIndex = i;
        }
    }
    printf("%d %d", maxIndex + 1, max);

}