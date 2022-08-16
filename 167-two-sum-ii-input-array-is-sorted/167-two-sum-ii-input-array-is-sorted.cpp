class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int i=0,j=numbers.size()-1;
        while(i<j){
            int sum = numbers[i] + numbers[j];
            if(sum==target) return {i+1,j+1};
            else if(sum>target) j--;
            else i++;
        }
        return {};
        /*
        int n=numbers.size();
        for(int j=0;j<n;j++){
            for(int i=0;i<j;i++){
                if(numbers[j]+numbers[i] == target){
                   return{i+1,j+1};
                }
            }
        }
        return twoSum(numbers, target);*/
    }
};