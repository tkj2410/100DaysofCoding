class ParkingSystem {
public:
    int Big;
    int Small;
    int Medium;
    
    ParkingSystem(int big, int medium, int small) {
    Big=big;
    Small=small;
    Medium=medium;
    }
    
    bool addCar(int carType) {
        if(carType ==1){
            if( Big!=0)
            {
                Big--;
                return true;
                
            }
            else{
                return false;
            }
        }
        if(carType ==3){
            if(Small!=0)
            {
                Small--;
                return true;
            }
            else{
                return false;
            }
        }
        if(carType ==2){
            if( Medium!=0)
            {
                Medium--;
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
};