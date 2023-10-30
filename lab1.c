#include <math.h>
#include <stdio.h>

double func(double x) {
    return cos(x) - x + 2;
}
int main() {
    double k= 0.1;
    int a,b;
    printf("x       f(x)\n");
    for(int i = 0;i<=(100/k)*2;i++){
        printf("%6.2lf   |   %6.3lf\n",-100+i*k,func(-100+i*k));
        if(func(-100+i*k)*func(-100+(i-1)*k) < 0) {
            a=i; b=i-1;
        }
    }
    printf("Promejutoc, soderzhashii koren uravneniya is [%.1lf,%.1lf]", -100+a*k,-100+b*k);
    return 0;
}