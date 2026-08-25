class Solution {
public:
int firstoccur(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high)
    {
        int mid;
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            first=mid;
            high=mid-1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return first;
}


int lastoccur(vector<int> &nums, int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int last=-1;
        while(low<=high)
        {
            int mid;
            mid=(low+high)/2;
            
            if(nums[mid]==target)
            {
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return last;
}

    vector <int> searchRange(vector<int> &nums, int target)
    {
        int first=firstoccur(nums,target);
        if(first==-1 || nums[first]!=target)
        {
            return {-1,-1};
        }
        return {first, lastoccur(nums,target)};   
    }
};