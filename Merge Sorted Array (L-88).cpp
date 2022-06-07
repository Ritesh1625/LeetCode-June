#include <bits/stdc++.h>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m+n);
        
        for(int i=0; i<n; i++){
            nums1[i+m] = nums2[i];
        }
        
        sort(nums1.begin(), nums1.end());
    }
};


//Without sort function:

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1, k = m+n-1;
        while(i>=0 and j>=0){
            if(nums1[i] < nums2[j]){
                nums1[k--] = nums2[j--];
            }
            else{
                nums1[k--] = nums1[i--];
                }
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
            }
    }
};
        
