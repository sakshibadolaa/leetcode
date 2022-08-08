class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();
        int l=0, ans=0, r=0;
        vector<int> count(256,0);
        while(r<n){
            count[s[r]]++;
            while(count[s[r]]>1){
                count[s[l]]--;
                l++;
            }
            ans= max(ans, r-l+1);
            r++;
            
        }
        return ans;
    }
};