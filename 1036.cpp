#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C;
    cin>>A>>B>>C;

    if(A==0 || (pow(B,2) -4 * A * C )<0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        double x1=(-B+sqrt( pow(B,2) -4 * A * C ))/(2*A);
        double x2=(-B-sqrt( pow(B,2) -4 * A * C ))/(2*A);
        printf("R1 = %0.5lf\n",x1);
        printf("R2 = %0.5lf\n",x2);
    }

    return 0;
}
