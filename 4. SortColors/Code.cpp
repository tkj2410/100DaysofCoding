void sortColors(vector<int>& arr) {
    int n =arr.size();
    int left = 0, right = n - 1;
    while (left < right)
    {
        while ((arr[left] == 1 || arr[left]==0)&& left < right)
        {
            left++;
        }
        while (arr[right] == 2 && left < right)
        {
            right--;
        }
        // agar yha pohoch gye ho, iska matlab
        // arr[left]==1 and arr[right]==0
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    //sorting 0 & 1
    left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while ((arr[right] == 2 || arr[right]==1) && left < right)
        {
            right--;
        }
        // agar yha pohoch gye ho, iska matlab
        // arr[left]==1 and arr[right]==0
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
        
    }