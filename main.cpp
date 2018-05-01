#include<iostream>
#include "add.h"
#include "sub.h"

using namespace std;

int main()
{
    int x, y, z;
    x = 10;
    y = 20;
    z = add(x,y);
    cout << z << endl;
    z = sub(y, x);
    cout << z << endl;
    return 0;
}
