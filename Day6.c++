#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<pair<int, int>> findZeroSumSubarrays(vector<int>& arr) {
    unordered_map<int, vector<int>> prefix;
    vector<pair<int, int>> ans;
    int sum = 0;
    prefix[0].push_back(-1);
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (prefix.count(sum)) {
            for (int idx : prefix[sum]) ans.push_back({idx + 1, i});
        }
        prefix[sum].push_back(i);
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    auto subarrays = findZeroSumSubarrays(arr);
    for (auto p : subarrays) cout << "(" << p.first << ", " << p.second << ") ";
    cout << endl;
    return 0;
}
