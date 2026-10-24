class Solution {
public:
    int calculatesum(vector <int> & nums , int k)
    {
        int total=0;
        for(int i=0; i<nums.size();i++)
        {
            total += (nums[i]+k-1)/k;
        }

        return total;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {

        int max_elem=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>max_elem)
            {
                max_elem=nums[i];
            }
        }

        int low=1;
        int high = max_elem;

        while(low<high)
        {
            int mid;
            mid=(low+high)/2;

            int totaltime=calculatesum(nums, mid);

            if(totaltime<=threshold)
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;

        
    }
};