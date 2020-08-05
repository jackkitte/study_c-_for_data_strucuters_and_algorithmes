#include <iostream>
using namespace std;

void sort(int arrays[], int length);

int main() {
    int scores[] = {90, 70, 50, 80, 60, 85};

    int length = sizeof(scores) / sizeof(scores[0]);

    sort(scores, length);

    for (int i = 0; i < length; i++) {
        cout << scores[i] << ",";
    }

    return 0;
}

void sort(int arrays[], int length) {
    int minIndex;

    for (int i = 0; i < length - 1; i++) {
        minIndex = i;
        int minValue = arrays[minIndex];
        for (int j = i; j < length - 1; j++) {
            if (minValue > arrays[j + 1]) {
                minValue = arrays[j + 1];
                minIndex = j + 1;
            }
        }
        if (i != minIndex) {
            int temp = arrays[i];
            arrays[i] = arrays[minIndex];
            arrays[minIndex] = temp;
        }
    }
}