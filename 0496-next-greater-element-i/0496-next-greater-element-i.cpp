class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mp;

        for(int i=0; i<nums2.size(); i++)
        {
            int curr=nums2[i];

            while(!st.empty() && st.top()<curr)
            {
                  mp[st.top()]=curr;
                  st.pop();
            }
            st.push(curr);      
        }
        while(!st.empty())
        {
            mp[st.top()]=-1;
            st.pop();
        }

        vector<int> ans;

        for(int i=0; i<nums1.size();i++)
        {
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }

};