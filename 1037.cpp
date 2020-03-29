#include<bits/stdc++.h>
using namespace std;
int main()
{
    double N;
    cin>>N;
    if(N<0.00 || N>100.00)
    {
     cout<<"Fora de intervalo"<<endl;
    }
    else if(N>25.00 && N<=50.00)
    {
        cout<<"Intervalo (25,50]"<<endl;
    }
    else if(N>=0.00 && N<=25.00)
    {
        cout<<"Intervalo [0,25]"<<endl;
    }
    else if(N>50.00 && N<=75.00)
    {
         cout<<"Intervalo (50,75]"<<endl;
    }
    else if(N>75.00 && N<=100.00)
    {
        cout<<"Intervalo (75,100]"<<endl;
    }

    return 0;
}
