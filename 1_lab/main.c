#include <stdio.h>
#include <math.h>

double func_y(double x){
    return (2 * M_PI * x) - ((fabs(sin(sqrt(10.5 * x)))) / (pow(x, 2/.3) - 1/7));
}

int main() {
   double a, b, h;

   printf("Enter a: ");
   scanf("%lf", &a);
   printf("Enter b: ");
   scanf("%lf", &b);
   printf("Enter h: ");
   scanf("%lf", &h);

   double x, y;
   for(x = a; x <= b; x+=h){
	   y = func_y(x);
	   printf("x: %lf y: %lf\n", x, y);

   }
   return 0;
}
