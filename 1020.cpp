#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int yr=N/365;
    N=N%365;
    int month=N/30;
    int days=N%30;
    cout<<yr<<" ano(s)\n"<<month<<" mes(es)\n"<<days<<" dia(s)"<<endl;
    return 0;
}
