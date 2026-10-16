class Solution {
public:
    int reverse(int x) {
        long long n = 0, num = x;
        // int mod=pow(2, 30);
        while(num){
            if((n*10+num%10)>INT_MAX ||(num<0 && (n*10+num%10)<INT_MIN)){
                return 0;
            }
            int h=num%10;
            num/=10;
            n=n*10+h;
        }
        return n;
    }
};