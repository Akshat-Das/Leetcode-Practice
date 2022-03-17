class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
                        vector <int> C(m+n);
                        int i=0,j=0,k=0;
                        while(i < m && j < n){
                            if(nums1[i] < nums2[j]){
                                C[k] = nums1[i];
                                i += 1;
                                k += 1;
                            }else{
                                C[k] = nums2[j];
                                j += 1;
                                k += 1;
                            }
                        }
                        while(i < m){
                            C[k] = nums1[i];
                            i += 1;
                            k += 1;
                        }
                        while(j < n){
                            C[k] = nums2[j];
                            j += 1;
                            k += 1;
                        }
        nums1 = C;
    }
};