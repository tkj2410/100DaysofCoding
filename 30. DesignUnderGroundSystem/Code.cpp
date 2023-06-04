class UndergroundSystem {
    private:
        //int len= 1000;
        vector<int> vid;
        vector<string> start;
        vector<int> intime;

        vector<string> end;
        vector<int> outtime;

    public:
        //unordered_map<string,int> checkin;

        UndergroundSystem() {
            
        }
        
        void checkIn(int id, string stationName, int t) {
            vid.push_back(id);
            start.push_back(stationName);
            intime.push_back(t);
        }
        
        void checkOut(int id, string stationName, int t) {

            auto it=find(vid.begin(), vid.end(),id);
            int pos= it - vid.begin();

            string str = start[pos]  + "_"+stationName;
            int time= t - intime[pos];
            end.push_back(str);
            outtime.push_back(time);
            vid.erase(it);
            intime.erase(intime.begin() + pos);
            start.erase(start.begin() + pos);
        }
        
        double getAverageTime(string startStation, string endStation) {

            int count=0;
            double sum=0;
            string str =   startStation + "_"+ endStation;
            for(int i=0;i<end.size();i++)
            {
                if(end[i] == str){
                    count++;
                    sum+=outtime[i];
                }
            }
            return sum/count;
            
        }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName ,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */