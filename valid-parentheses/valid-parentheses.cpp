class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;
        for(int i=0;i<s.length();i++) 
        {
            char top = stac.empty() ? '#' : stac.top();
            if(top == '(' and s[i] == ')') 
            {
                stac.pop();
            }
            else if(top == '{' and s[i] == '}') 
            {
                stac.pop();
            }
            else if(top == '[' and s[i] == ']') 
            {
                stac.pop();
            }
            else
            {
                stac.push(s[i]);
            }    
        }        
        return stac.empty();
    }
};