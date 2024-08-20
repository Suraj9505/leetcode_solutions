class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     vector<int> merged;
     double median;
     int combinedSize = nums1.size() + nums2.size();

     for(int i = 0; i < nums1.size(); i++) {
        merged.push_back(nums1[i]);
    }
    for(int i = 0; i < nums2.size(); i++) {
        merged.push_back(nums2[i]);
    }
     
   for (int i = 0; i < combinedSize - 1; i++) {
        for (int j = 0; j < combinedSize - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    int midIndex = merged.size() / 2;

     if(merged.size() % 2 == 0){
        median = (merged[midIndex] + merged[midIndex-1]) / 2.0;
     }
     else{
        median = merged[midIndex];
     }
     
     for(int value: merged){
         cout << value << " ";
     }
    return median;
    }

};