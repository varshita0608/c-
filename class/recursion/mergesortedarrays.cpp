#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
        while(j>=0){
            nums1[k]=nums2[j];
            j--;
            k--;
        }
        return ;
    }
};

int main(){
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(4);
    int m = nums1.size();
    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);
    nums2.push_back(7);
    int n = nums2.size();

    for (int value : nums1) {
        cout << value << ' ';
    }
    cout << '\n';
}
