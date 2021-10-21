#include <math.h>

double func_y(double x){
    double x1 = (log(sqrt(fabs(2-x))+ 1.2)) / (2 + x);
    double x2 = pow(2 / x, 1/.3);
    return x1 + x2;
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
