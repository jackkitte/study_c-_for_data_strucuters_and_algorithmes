#include <iostream>
using namespace std;

void insert(int array[], int length, int tempArray[], int score, int insertIndex);

int main() {
    int scores[] = {90, 70, 50, 80, 60, 85};

    int length = sizeof(scores) / sizeof(scores[0]);
    int tempArray[length + 1];

    insert(scores, length, tempArray, 75, 2);

    // memcpy(scores, tempArray, sizeof(tempArray));

    for (int i = 0; i < length + 1; i++) {
        cout << tempArray[i] << ",";
    }

    return 0;
}

void insert(int array[], int length, int tempArray[], int score, int insertIndex) {
    for (int i = 0; i < length; i++) {
        if (i < insertIndex) {
            tempArray[i] = array[i];
        } else {
            tempArray[i + 1] = array[i];
        }
    }
    tempArray[insertIndex] = score;
}