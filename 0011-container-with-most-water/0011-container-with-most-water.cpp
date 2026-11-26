class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left=0;
        int right = n-1;
        int maxarea=0;

        while(left<right)
        {
            int width;
            width=right-left;

            int h;
            h=min(height[left], height[right]);

            int currarea;
            currarea=width*h;

            maxarea=max(maxarea,currarea);

            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }

        }
        return maxarea;       
    }
};