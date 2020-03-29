#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y;
    /// X = product code
    /// Y = quantity
   cin>>X>>Y;
    if(X==1)
    {
        printf("Total: R$ %0.2lf\n",(Y*4.00));
    }
    else if(X==2)
    {
        printf("Total: R$ %0.2lf\n",(Y*4.50));
    }
    else if(X==3)
    {
        printf("Total: R$ %0.2lf\n",(Y*5.00));
    }
    else if(X==4)
    {
        printf("Total: R$ %0.2lf\n",(Y*2.00));
    }
    else if(X==5)
    {
        printf("Total: R$ %0.2lf\n",(Y*1.50));
    }

    return 0;
}
