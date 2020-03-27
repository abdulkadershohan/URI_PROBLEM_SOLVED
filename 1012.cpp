#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C;
    cin>>A>>B>>C;
    printf("TRIANGULO: %0.3lf\n",(A*C)/2);
    printf("CIRCULO: %0.3lf\n",(C*C*3.14159));
    printf("TRAPEZIO: %0.3lf\n",((A+B)/2)*C);
    printf("QUADRADO: %0.3lf\n",(B*B));
    printf("RETANGULO: %0.3lf\n",(B*A));
    return 0;
}
