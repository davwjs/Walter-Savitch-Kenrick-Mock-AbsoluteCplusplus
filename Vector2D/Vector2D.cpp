#include "Vector2D.h"

int main()
{
    Vector2D v1(4, 2), v2(6, 10), v3(5, 5), v4(9, 3);
    cout << "(" << v1.GetX() << "," << v1.GetY() << ") * (" << v2.GetX()
    << "," << v2.GetY() << ") = " << v1*v2 << endl;
    cout << "(" << v2.GetX() << "," << v2.GetY() << ") * (" << v3.GetX()
    << "," << v3.GetY() << ") = " << v2*v3 << endl;
    cout << "(" << v3.GetX() << "," << v3.GetY() << ") * (" << v4.GetX()
    << "," << v4.GetY() << ") = " << v3*v4 << endl;
    return 0;
}
