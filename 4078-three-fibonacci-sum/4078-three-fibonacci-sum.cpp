class Solution {
public:

// hmlog ko uske half khojna hoga and then usse phle wala term and then usse phle wala term.
    bool threeFibonacciSum(int n) {
        int prev1 = 2, prev2 = 1,prev3 = 1, prev4 = 0,pLast3 = 0; 
        int sum = 0;
        if(n == 0 || n == 1) return false;
        else if(n == 2) return true;
        else {
            while(sum < n) {
                sum = prev1+prev2;
                pLast3 = prev4;
                prev4 = prev3;
                prev3 = prev2;
                prev2 = prev1;
                if(n == prev2+prev3+prev4 || n == prev3+prev4+pLast3) return true;
                prev1 = sum;
            }
            return false;
        }
        
    }
};