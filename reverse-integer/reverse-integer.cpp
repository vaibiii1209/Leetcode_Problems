class Solution {
public:
    int reverse(int x) {
        int n,d;
        long int ans=0;
        if(x>=2147483648 || x<=-2147483648)
        {
            return 0;
        }
        n=x;
        if(x<0)
        {
            n=(-1)*x;   
        }
        while(n>0)
        {
            d=n%10;
            ans=(ans*10)+d;
            if(ans>=2147483648 || ans<=-2147483648)
            {
                return 0;
            }      
            n=n/10;
        }
        if(x>0)
        {
            return ans;
        } 
        else
        {
            return (-1)*ans;
        }
    }
};