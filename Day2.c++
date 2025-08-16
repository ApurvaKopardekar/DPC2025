#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& arr) {
    int n = arr.size() + 1;
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result ^= i;
    }
    for (int num : arr) {
        result ^= num;
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 4, 5};  
    cout << "Missing number: " << findMissingNumber(arr) << endl; 
    return 0;
}
