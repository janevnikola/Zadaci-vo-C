#include <stdio.h>



/*
Да се напише програма која вчитува од стандарден влез два децимални броја (маса во кг и висина во цм) и 
пресметува и печати на стандарден излез индекс на телесна маса по формулата:

BMI=masa/(visina∗visina)

Висината претходно треба да се претвори од сантиметри во метри.

For example:
Input 	   Result

100 176   32.28


*/


int main (){
float masa_kg;
float visina_cm;
scanf("%f %f", &masa_kg, &visina_cm);
float BMI;
visina_cm/=100; //ja delime so 100 za da dobieme metri i rezultatot go zacuvuvame vo visina_cm
BMI=masa_kg/(visina_cm*visina_cm);
printf("%.2f", BMI);


return 0;
}
