class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int ans= INT_MIN;
        int i=0, j=n-1;
        
        while(i<j){
                int a= min(height[i], height[j])*(j-i);
                ans = max(ans,a);
            
        if(height[i]>height[j]){j--;}
        else{i++;}}
        return ans;
    }
};