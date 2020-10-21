#include <stdio.h>
#include <math.h>
//Да се напише програма која за дадени страни на еден разностран триаголник
//ќе ги отпечати на екран периметарот и квадратот од плоштината (нека се работи со a = 5, b = 7.5, c = 10.2)

int main(){
float a=5.0;
float b=7.5;
float c=10.2;
float perimetar, plostina;
perimetar=a+b+c;
printf("Perimetarot na a,b,c iznesuva: %.2f\n", perimetar);
float s=perimetar/2;
plostina=s*(s-a)*(s-b)*(s-c);
printf("Plostinata iznesuva %.2f", plostina);


return 0;
}
