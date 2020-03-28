#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    cout<<N<<endl;
    int temp=N;
    temp=N%100;
    cout<<N/100<<" nota(s) de R$ 100,00"<<endl;
    N=temp;
    temp=N%50;
    cout<<N/50<<" nota(s) de R$ 50,00"<<endl;
    N=temp;
    temp=N%20;
    cout<<N/20<<" nota(s) de R$ 20,00"<<endl;
    N=temp;
    temp=N%10;
    cout<<N/10<<" nota(s) de R$ 10,00"<<endl;
    N=temp;
    temp=N%5;
    cout<<N/5<<" nota(s) de R$ 5,00"<<endl;
    N=temp;
    temp=N%2;
    cout<<N/2<<" nota(s) de R$ 2,00"<<endl;
    N=temp;
    temp=N%1;
    cout<<N/1<<" nota(s) de R$ 1,00"<<endl;


    return 0;
}
