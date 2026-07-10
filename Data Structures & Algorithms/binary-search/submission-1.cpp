class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i=0,j=n-1;
        int a=-1;
        while(i<=j)
        {
            int m = (i+j)/2;
            if(nums[m]>target)
            {
                j=m-1;
            }
            else
            {
                if(nums[m]==target){
                    a= m;
                    break;
                }
                i=m+1;
            }
        }
        return a;
    }
};
