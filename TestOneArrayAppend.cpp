#include <iostream>
using namespace std;

int main() {
    int scores[] = {90, 70, 50, 80, 60, 85};

    int length = sizeof(scores) / sizeof(scores[0]);
    int tempArray[length + 1];

    for (int i = 0; i < length; i++) {
        tempArray[i] = scores[i];
    }
    tempArray[length] = 75;

    // memcpy(scores, tempArray, sizeof(tempArray));

    for (int i = 0; i < length + 1; i++) {
        cout << tempArray[i] << ",";
    }

    return 0;
}