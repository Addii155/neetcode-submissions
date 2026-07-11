class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n = arr.size();
        int m = arr[0].size();
        int i=0;
        int j = (n*m)-1;
        while(i<=j)
        {
            int mid = (j+((i-j)/2));
            int x = mid/m;
            int y = mid%m;
            if(arr[x][y]==target) return true;
            else if(arr[x][y]<target)
            {
                i = mid+1;
            }
            else
            {
                j = mid-1;
            }
        }
        return false;
    }
};
