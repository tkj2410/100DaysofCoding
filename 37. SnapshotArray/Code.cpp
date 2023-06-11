class SnapshotArray {
public:
    int snapid = 0;
    vector<map<int,int>> snaparr;

    SnapshotArray(int length) {
        snaparr.resize(length);
        for(int i=0; i<length; i++)
        {
            snaparr[i][0]=0;
        }
    }
    
    void set(int index, int val) {
        snaparr[index][snapid] = val;
    }
    
    int snap() {
        snapid++;
        return snapid-1;      
    }
    
    int get(int index, int snap_id)
    {
        if(snaparr[index].find(snap_id)==snaparr[index].end())
        {
            auto it= --snaparr[index].lower_bound(snap_id);
            return it->second;
        }
        return snaparr[index][snap_id];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */