int *findTwoElement(int *arr, int n) {
        
        int x = 0;
        for(int i=0;i<n;i++) x ^= arr[i];
        for(int i=1;i<=n;i++) x ^= i;
        
        int mask = x & ~(x-1);
        
        
        int a = 0 , b= 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]&mask) a ^= arr[i];
            else b ^= arr[i];
        }
        
        for(int i=1;i<=n;i++)
        {
            if(mask&i) a ^= i;
            else b ^= i;
        }
        
        int *res = new int[2];
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] == a)
            {
                res[0] = a , res[1] = b;
                return res;
            }
        }
        
        res[0] = b , res[1] = a;
        // int res[2] = {a,b};
        
        return res;
        
        
    }