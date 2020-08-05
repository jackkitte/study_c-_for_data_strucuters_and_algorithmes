#include <iostream>
using namespace std;

int main() {
    int scores[] = {90, 70, 50, 80, 60, 85};

    cout << "Please enter the index to be deleted: " << endl;

    int index;
    while(true) {
        cin >> index;
        if (cin.good()) {
            break;
        } else {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Please enter an integer." << endl;
        }
    }

    int length = sizeof(scores) / sizeof(scores[0]);
    int tempArray[length - 1];

    for (int i = 0; i < length; i++) {
        if (i < index) {
            tempArray[i] = scores[i];
        }
        if (i > index) { 
            tempArray[i - 1] = scores[i];
        }
        
    }

    memcpy(scores, tempArray, sizeof(tempArray));

    for (int i = 0; i < length - 1; i++) {
        cout << scores[i] << ",";
    }

    return 0;
}