long long check(int n , int index, long long a) 
    {
        long long leftOffset = max(a - (index), 0);
        long long result = (a + leftOffset) * (a - leftOffset + 1) / 2;
        long long rightOffset = max(a - ((n - 1) - index), 0);
        result += (a + rightOffset) * (a - rightOffset + 1) / 2;
        return result - a;
    }

    int maxValue(int n, int index, int maxSum) {

        if(n == maxSum){
            return 1;
        }
        if(n==1){
            return maxSum;
        }
        maxSum -=n;

        int s = 0;
        int e = maxSum;
        int m = (s + e +1) /2;

        while(s<e)
        {
            if(check(n, index, m) <= maxSum)
            {
                s = m;
            }
            else
            {
                e = m-1;
            }
            m = (s + e +1) /2;

        }

        return s + 1;
       
    }