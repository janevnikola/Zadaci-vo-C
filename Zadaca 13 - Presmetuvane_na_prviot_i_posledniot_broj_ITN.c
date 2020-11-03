#include <stdio.h>

/*Да се напише програма каде од тастатура ќе се внесе еден број кој има пет цифри, 
но не мора да е петцифрен, како на пример 04569 или 00256. 
Програмата ги печати сумите на паровите цифри од надвор кон внатре, 
за на крај да ја испечати средишната цифра. Така, ако внесениот број е 12596, програмата враќа 7 11 5.

влез: 12596 
излез: 7 11 5

For example:
Input 	

90008

	
result
17 0 0
*/


int main(){
int broj;
scanf("%d", &broj); //primer vnesuvame 12596
int prv_rezultat=(broj/10000) + (broj%10); //t.e 1+6 
int pomosna_promenliva;
pomosna_promenliva=broj/1000; //tuka na primer se cuva 12

int ppomosna_promenliva=broj%100; //tuka zacuvuvame na primer 96
int vtor_rezultat=(pomosna_promenliva%10)+(ppomosna_promenliva/10); //i 12 %10 za 2 kata  96 / 10 za da ja dobieme 9 kata


int za_sredina=broj%1000;
printf("%d %d %d", prv_rezultat, vtor_rezultat, za_sredina/100);

return 0;
}
