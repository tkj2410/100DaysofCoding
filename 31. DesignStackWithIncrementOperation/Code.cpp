class CustomStack {
public:
    int top=0;
    int size;
vector<int> arr;
    CustomStack(int maxSize) {
        
        this->size=maxSize;
        top=0;
        
    }
    
    void push(int x) {
        if(top < size){
            arr.push_back(x);
            top++;
        }
        
    }
    
    int pop() {
        if(top>0){
            int ans=  arr.back();
            arr.pop_back();
            top--;
            return ans;
        }
        return -1;
        
    }
    
    void increment(int k, int val) {

        if(arr.size()<k){
            k=arr.size();
        }

        for(int i=0;i<k;i++){
            arr[i]+=val;
        }        
    }
};
