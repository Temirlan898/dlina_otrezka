#include <iostream>
#include <cmath>
using namespace std;
main() {
int a1,a2,x1,x2,y1,y2,b;
double c;
cin>>x1>>y1>>x2>>y2;
a1=x2-x1;
a2=y2-y1;
b=a1*a1+a2*a2;
c=sqrt(b);
printf("%.5lf",c);
}
