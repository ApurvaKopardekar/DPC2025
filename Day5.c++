#include <iostream>
using namespace std;

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Leaders: ";

    for(int i = 0; i < n; i++) {
        bool isLeader = true;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
