class Solution {
public:
    int hammingWeight(uint32_t n) {
        int s = 0;
        while(n){
            s++; 
            n = n&(n-1);         
        }
        return s; 
    }
};

