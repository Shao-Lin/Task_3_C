#include <iostream>
using namespace std;
int main() {
    double arr[] = {3, 8, 11, 15.4};
    if (size(arr) % 2 == 0) {
        double arr2[size(arr) * 2];
        int counter = 0;
        for (int i = 0; i < sizeof(arr) / sizeof(double); i += 2) {
            for (int j = 0; j < 2; j++) {
                *(arr2 + counter) = *(arr + i);
                counter++;
                *(arr2 + counter) = *(arr + i + 1);
                counter++;
            }
        }
        for (int k = 0; k < size(arr2); k++) {
            cout << *(arr2 + k) << ' ';
        }
    } else {
        cout << "Enter an even number of elements" << endl;
    }
    return 0;
}

