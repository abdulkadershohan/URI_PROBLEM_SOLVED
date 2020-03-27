#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

   int maxab=((a+b+abs(a-b))/2);
   int max=((maxab+c+abs(maxab-c))/2);
    cout<<max<<" "<<"eh o maior"<<endl;
    return 0;
}
