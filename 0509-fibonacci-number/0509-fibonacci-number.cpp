class Solution {
public:
    int fib(int n) {
        int num,curr = 1, prev = 0;
        if(n == 0) return 0;
        else if(n == 1) return 1;
        for(int i = 2; i <= n; i++) {
            num = curr + prev;
            prev = curr;
            curr = num;
        }
        return num;
    }
};