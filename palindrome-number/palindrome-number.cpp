class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string temp=to_string(x);
        int i=0;
        int j=temp.size()-1;
        
        while(j>=i)
        {
            if(temp[i]!=temp[j])
            {
                return false;
            }
            j--;
            i++;
        }
        
        return true;
        
    }
};