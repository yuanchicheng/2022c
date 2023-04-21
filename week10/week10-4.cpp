int hammingWeight(uint32_t n) {
    int ans = 0;
    while(n>0) {
            int now = n%2;
            if(n%2==1) ans++;
            n =  n / 2;
    }
    return ans;
}
