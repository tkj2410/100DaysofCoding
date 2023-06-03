int mySqrt(int x) {
        if(x==1 || x<0){
            return x;
        }
        int s=0;
        int e= x/2;
        double m=(s+e)/2;

        while(s<=e){
            if(m*m == x){
                return m;
            }
            else if(m*m < x){
                s=m+1;
            }
            else{
                e=m-1;;
            }
            m=(s+e)/2;
        }

        return m;
        
    }