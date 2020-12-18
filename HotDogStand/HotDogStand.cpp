#include "HotDogStand.h"

int main(){
    HotDogStand first(1,2), second(2,0), third(3,4);
    for (int i = 0; i < 4; i++)
        first.justsold();
    for (int i = 0; i < 3; i++)
        second.justsold();
    first.print();
    second.print();
    third.print();
    first.printTotal();
    return 0;
}
