#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TripTime,AvgSpreed;
    cin>>TripTime>>AvgSpreed;
    double T=TripTime;
    double S=AvgSpreed;
    printf("%0.3lf\n",(S*T)/12);

    return 0;
}
