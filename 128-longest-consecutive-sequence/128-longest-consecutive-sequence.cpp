class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int ans=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)!=st.end())
                continue;
            else
            {
                int count=0,n=nums[i];
                while(st.find(n)!=st.end())
                {
                    count++;
                    n++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
        
        /*
        int n=nums.size();
        unordered_map<int,int>umap;
        sort(nums.begin(),nums.end());
        
        int count=1;
        if(n==0)return 0;
        for(int i=0;i<n;i++){
            if(nums[i]== nums[i+1]-1){
                count++;
            }
        }
            return count;*/
           
       
    }
};