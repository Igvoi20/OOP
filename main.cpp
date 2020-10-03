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
puts("\n\tx,y = ");
scanf("%lf%lf", &x, &y);
a = pow(y, (pow(x, 0.33)));
b = pow(cos(y),3);
c = abs(x-y)*(1*(pow(sin(z),2)/sqrt(x+y)));
d = pow(2.71, abs(x-y)) + x/2;
rez = a+b*(c/d);
printf("\n x = %7.3lf\n y = %7.3lf\n z = %7.3lf\nb = %lf\n", x, y, z, rez);
puts("Press any key ... ");
getch();
return 0;

}
