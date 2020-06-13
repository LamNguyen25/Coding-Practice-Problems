#include <iostream>
#include <vector>
using namespace  std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
int main() {
  vector<int> v1;
  vector<int> v2;
  // v1.push_back(1); 
  // v1.push_back(2); 
  v2.push_back(2); 
  v2.push_back(3); 

  double r = findMedianSortedArrays(v1, v2);
  cout << r;


}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        
        double median = 0.0;
        int sum = size1 + size2;
        int it[sum];
        int i = 0;
        int j = 0;
        int k = 0;
        while(i < size1 && j < size2) {
            if(nums1[i] < nums2[j]) {
                it[k] = nums1[i];
                i++;
                k++;
            }
            else {
                it[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(j < size2 ) {
            it[k] = nums2[j];
            j++;
            k++;
        }
        while(i < size1) {
            it[k] = nums1[i];
            i++;
            k++;
        }
        
        if(sum % 2 == 0) {
            median = ((double)(it[sum/2] + (double)it[(sum/2) - 1]) /2);
        }
        else{
            median = (double)it[sum/2]; 
        }
        cout << endl;
        return median;
    }
