class Solution {
public:
    int romanValue(char c)
    {
        switch (c)
        {
            case('I') : return 1;
            case('V') : return 5;
            case('X') : return 10;
            case('L') : return 50;
            case('C') : return 100;
            case('D') : return 500;
            case('M') : return 1000;
            default :return -1;
                break;
        }
    }    
    int romanToInt(string s) 
    {
        int sum = 0;
        int n = s.size();
        for (int i = 0; i<n; i++)
        {
            if (romanValue(s[i])>=romanValue(s[i+1]))
            {
                sum = sum + romanValue(s[i]);
            }
            else
            {
                sum = sum - romanValue(s[i]);
            }
        }
        return sum;
    }
};

