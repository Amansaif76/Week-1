#include<stdio.h>
#include<math.h>
int main(){
int p,t;
float r;
double s,c,A;
printf("Enter the principal amount \n");
scanf("%d",&p);
printf("Enter the rate \n");
scanf("%f",&r);
printf("Enter the time \n");
scanf("%d",&t);
s=(p*r*t)/100;
printf("The simple interset is %lf\n", s);
A=p*pow(1+(r/100),t);
c=A-p;
printf("The compound interestr is %lf ",c);
}
