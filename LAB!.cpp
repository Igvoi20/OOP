#include <iostream>
//#include <vcl.h>
#include <stdio.h>
#include <cmath>
#include <conio.h>
#include <math.h>
#pragma hdrstop
using namespace std;

int main(int argc, char* argv[]){
double x, y, z, a, b ,c, d, rez;
puts("\n\tx,y,z = ");
scanf("%lf%lf%lf", &x, &y, &z);
if (x<=0 || y<=0 || z<=0)
    cout<<"Can't solve the equatuion";
else
    a = pow(y, (pow(x, 1.0/3)));
    b = pow(cos(y),3);
    c = abs(x-y)*(1*(pow(sin(z),2)/sqrt(x+y)));
    d = exp(abs(x-y)) + x/2;
    rez = a+(b*(c/d));
printf("\n x = %7.3lf\n y = %7.3lf\n z = %7.3lf\nRezult = %lf\n", x, y, z, rez);
puts("Press any key ... ");
getch();
return 0;

}

