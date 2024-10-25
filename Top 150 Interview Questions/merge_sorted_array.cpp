#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> merged;

        for(int i=0; i<m; i++){
            merged.push_back(nums1[i]);
        }

        for(int i=0; i<n; i++){
            merged.push_back(nums2[i]);
        }

        sort(merged.begin(), merged.end());
        nums1 = merged;

    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;
    solution.merge(nums1, m, nums2, n);
    for (int num : nums1) {
        cout << num << " ";
    }
    return 0;
}

