#include <iostream>
#include <cstdlib>
using namespace std;

class Vector2D{
private:
    int x, y;
public:
    Vector2D(){
        x = 0;
        y = 0;
    }
    Vector2D(int NewX, int NewY){
        x = NewX;
        y = NewY;
    }
    void SetXY(int NewX, int NewY){
        x = NewX;
        y = NewY;
    }
    int GetX(){
        return (x);
    }
    int GetY()
    {
        return (y);
    }
    int operator *(const Vector2D &v2){
        return (x*v2.x) + (y*v2.y);
    }
};
