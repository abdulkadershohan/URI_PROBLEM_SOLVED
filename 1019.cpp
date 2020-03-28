#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int sec=N%60;
    N=N/60;
    int hour=N/60;
    int min=N%60;
    cout<<hour<<":"<<min<<":"<<sec<<endl;

    return 0;
}
