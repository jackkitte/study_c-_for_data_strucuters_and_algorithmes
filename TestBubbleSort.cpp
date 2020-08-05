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
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arrays[j] > arrays[j + 1]) {
                int flag = arrays[j];
                arrays[j] = arrays[j + 1];
                arrays[j + 1] = flag;
            }
        }
    }
}