#include <stdio.h>

/*
Од стандарден влез се вчитуваат следните податоци за еден студент на ФИНКИ:

    индекс (шестцифрен цел број)
    шест оценки од последниот семестар кој го слушал

Да се напише програма која што на стандарден излез ќе ги испечати следните информации за студентот: (погледнете во тест примерите за форматот на печатење)

    просек на студентот
    просекот да се испечати со точност од 3 децимали
    година на студии
    студентите чијшто индекс почнува на 17 се трета година, на 16 се четврта година, на 15 се петта година итн.
    дали е награден (1 = награден, 0 = не е награден)
    Еден студент се наградува доколку има просек еднаков или поголем од 9.5

For example:
Input 	

151021 9 9 10 10 10 8

	
rezult
Prosek: 9.333
Student: 151021
5 godina
Nagraden: 0
*/








int main (){
int indeks=0;
scanf("%d", &indeks);
int ocenka1, ocenka2=0, ocenka3=0, ocenka4=0, ocenka5=0, ocenka6=0;
scanf("%d %d %d %d %d %d", &ocenka1, &ocenka2, &ocenka3, &ocenka4, &ocenka5, &ocenka6);
float prosek=ocenka1+ocenka2+ocenka3+ocenka4+ocenka5+ocenka6; //temp promenliva za da se presmeta prosek

printf("Prosek: %.3f\n", prosek /6);

printf("Student: %d\n", indeks);

if(indeks/10000==18){//go delime so 10 000, za da gi dobieme prvite dva broja
printf("2 godina");
}

if(indeks/10000==17){
printf("3 godina");
}

else if(indeks/10000==16){
printf("4 godina");
}

else if(indeks/10000==15){
printf("5 godina");
}

else if(indeks/10000==14){
printf("6 godina");
}


if(prosek/6>=9.5){
printf("\nNagraden: 1");
}
else 
printf("\nNagraden: 0");

return 0;

}
