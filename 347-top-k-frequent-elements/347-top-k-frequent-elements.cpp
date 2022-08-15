class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map <int,int> umap;
        for(auto i:nums){
            umap[i]++;   //counts frequency of a number
        }
    
       vector<pair<int,int>>v;
           for(auto i:umap){       //umap ki values pushback kr denge vector m
                v.push_back({i.second,i.first});//yaha i.second m value h and i.first m freq
}
        sort(v.begin(),v.end());//asending order
        vector<int> ans;
        for(int i=0;i<k;i++){
              ans.push_back(v[v.size()-1-i].second);//yaha hum last se second value le re h yaniki freq
}
return ans;}
        
};