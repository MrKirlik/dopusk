#include "function.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, D;
    cout<<"a*x^2 + b*x + c = 0"<<endl<<"enter a = ";
    cin>>a; cout<<"b = ";
    cin>>b; cout<<"c = ";
    cin>>c; cout<<endl;
    D = Discriment(a, b, c);
    int i = Check(D);
    switch (i)
    {
        case 1: cout<<"your root: "<<((-1)*b) / (2 * a)<<endl;; break;
        case -1: cout<<"no roots"<<endl; break;
        case 2: cout<<"first root: "<<((-1)*b + sqrt(D)) / (2 * a)<<endl<<
                    "second root: "<<((-1)*b - sqrt(D)) / (2 * a)<<endl; break;
    }
    return 0;
}
