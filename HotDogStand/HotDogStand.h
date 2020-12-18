#include <iostream>
using namespace std;

class HotDogStand{
private:
    int ID = 0;
    int Soldthatday = 0;
    static int Total;
public:
    HotDogStand(int i, int s){
        ID = i;
        Soldthatday = s;
        //update total
        Total += 1;
    }
    int getID(){
        return ID;
    }
    void setID(int i){
        ID = i;
    }
    int getSoldthatday(){
        return Soldthatday;
    }
    void setSoldthatday(int s){
        Soldthatday = s;
    }
    
    void justsold(){
        Soldthatday++;
        Total++;
    }
    void print(){
        cout << "ID: " << ID << " sold: " << Soldthatday << endl;
    }
    static void printTotal(){
        cout << "Total: " << Total << endl;
    }
    static int getTotal(){
        return Total;
    }
};
int HotDogStand::Total = 0;
