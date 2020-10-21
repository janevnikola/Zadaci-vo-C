#include <stdio.h>
#define PI 3.14 //so koristenje na predprocesorot
//Да се напише програма за пресметување и печатење на плоштината и периметарот на круг. 
//Радиусот на кругот се чита од стандарден влез (тастатура)како децимален број

int main (){
float radius,perimetar,plostina;
printf("Vnesi radius: ");
scanf("%f", &radius);
perimetar=2*radius*PI;
printf("Perimetarot L = %.2f", perimetar);
plostina=radius*radius*PI;
printf("\nPlostinata P = %.2f", plostina);
return 0;
}
