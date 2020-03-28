#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
    cout<<"NOTAS:"<<endl;
    int N=n;
    int banknotes=N;
    int bankcoines=(n-N)*100;

    banknotes=N%100;
    cout<<N/100<<" nota(s) de R$ 100.00"<<endl;
    N=banknotes;
    banknotes=N%50;
    cout<<N/50<<" nota(s) de R$ 50.00"<<endl;
    N=banknotes;
    banknotes=N%20;
    cout<<N/20<<" nota(s) de R$ 20.00"<<endl;
    N=banknotes;
    banknotes=N%10;
    cout<<N/10<<" nota(s) de R$ 10.00"<<endl;
    N=banknotes;
    banknotes=N%5;
    cout<<N/5<<" nota(s) de R$ 5.00"<<endl;
    N=banknotes;
    banknotes=N%2;
    cout<<N/2<<" nota(s) de R$ 2.00"<<endl;

   cout<<"MOEDAS:"<<endl;
    cout<<banknotes/1<<" moeda(s) de R$ 1.00"<<endl;
    N=N%1;
    cout<<bankcoines/50<<" moeda(s) de R$ 0.50"<<endl;
    bankcoines=bankcoines%50;
    cout<<bankcoines/25<<" moeda(s) de R$ 0.25"<<endl;
    bankcoines=bankcoines%25;
    cout<<bankcoines/10<<" moeda(s) de R$ 0.10"<<endl;
    bankcoines=bankcoines%10;
    cout<<bankcoines/5<<" moeda(s) de R$ 0.05"<<endl;
    bankcoines=bankcoines%5;
    cout<<bankcoines/1<<" moeda(s) de R$ 0.01"<<endl;



    return 0;
}
