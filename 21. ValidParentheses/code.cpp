    bool isValid(string s) {
        
        stack<char> stack;
        for(int i=0;i< s.size();i++)
        {
            char ch=s[i];
            if(ch == '(' || ch == '{' ||ch == '[' )
            {
                stack.push(ch);
            }
            else
            {
                if(!stack.empty())
                {
                    if(stack.top()=='{' && ch == '}' ||
                    stack.top()=='(' && ch == ')' ||
                    stack.top()=='[' && ch == ']' )
                    {
                        stack.pop();  
                    }
                    else
                    {
                        return false;
                    }
                }
                
                else
                {
                    return false;
                }
            }
        }
        
        if(stack.empty())
        {
            return true;
            
        }
        
        else
        {
            return false;
        }
            

    }