class Solution {
public:
    int calculatehours(vector<int> & piles, int k)
    {
        int totalhours=0;
        for(int i=0; i<piles.size();i++)
        {
            totalhours+= (piles[i]+k-1)/k;
        }
        return totalhours;      
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int max_elem =0;

        for(int i=0; i<piles.size();i++)
        {
            if(piles[i]>max_elem)
            {
                max_elem=piles[i];
            }
        }

        int low=1;
        int high=max_elem;

        while(low<high)
        {
            int mid;
            mid=(low+high)/2;

            int hours = calculatehours(piles , mid);

            if(hours<h || hours==h)
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