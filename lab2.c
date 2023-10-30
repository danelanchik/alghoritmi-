#include <math.h>
#include <stdio.h>

double func(double x) {
    return cos(x) - x + 2;
}

int main() {
    double e = 0.0001;
    double a = -100, b = 100,c=0;
    printf("Metod bisection:\n");
    printf("%10.5lf   %10.5lf   %10.5lf\n", a,b,b-a);
    do {
        c = (a+b)/2;
        if(func(a) * func(c) < 0) b = c;
        else a = c;
        printf("%10.5lf   %10.5lf   %10.5lf\n", a,b,b-a);
    } while (fabs(b-a) >= e);
    printf("Koren uravneniya metodom bisection: x = %lf\n", (a+b)/2);
    a = -100,b = 100;
    printf("Metod hord:\n");
    printf("%10.5lf   %10.5lf   %10.5lf\n", a,b,b-a);
    do {
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        if(func(a) * func(c) < 0) b = c;
        else a = c;
        printf("%10.5lf   %10.5lf   %10.5lf\n", a,b,b-a);
    } while (fabs(b-a) >= e);
    printf("Koren uravneniya metodom hord: x = %lf\n", (a+b)/2);
    return 0;
}