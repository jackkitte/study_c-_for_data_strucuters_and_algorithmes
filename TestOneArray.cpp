#include <iostream>
using namespace std;

int main() {
    int scores[] = {90, 70, 50, 80, 60, 85};

    int length = sizeof(scores) / sizeof(scores[0]);

    for (int i = 0; i < length; i++) {
        cout << scores[i] << ",";
    }

    return 0;
}