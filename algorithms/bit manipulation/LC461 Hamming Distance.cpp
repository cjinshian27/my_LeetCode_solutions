class Solution {
    public:
        int hammingDistance(int x, int y) {
            
            int count = 0;
            int aux = x^y;
            
            while(aux){
                if(aux & 1) count++;
                x = x >> 1;
                y = y >> 1;
                aux = x ^ y;
            }
            
            return count;
        }
};