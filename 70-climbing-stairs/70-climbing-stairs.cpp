class Solution {
public:
    int climbStairs(int n) {
        
        if(n==1){return 1;}
        if(n==2){return 2;}
        int a=0;
        int one=1;
        int two=2;
        for(int i=2;i<n;i++){
            a = one + two;
    	one= two;
        two = a;
            
        }
        return a;
    }
};