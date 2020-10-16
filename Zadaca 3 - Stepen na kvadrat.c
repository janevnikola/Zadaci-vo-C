#include <stdio.h>
//Да се напише програма која за зададена вредност на х
//(при декларација на променливата) ќе го пресмета и отпечати на екран х2.

#include <math.h> //za rabota so matematicki operacii, vklucuvame biblioteka math.h

int main (){
double X =5; //zadavanje na vrednost pri deklaracija t.e vrsime inicijalizacija
printf("Promenlivata X = %.2lf na stepen 2 iznesuva %.2lf", X, pow(X,2)); //pow raboti so double
printf("\n\n----Alternativna verzija bez da koristime pow---- \n\n");
int x=5; //deklarirame i inicijalizirame int so vrednost 5
//Go deklarime so malo x, poradi toa sto C gi razlikuva malite od golemite bukvi, no ne i ako ista promenliva e i int i double
//odnosno int x i double x
printf("Promenlivata x = %d na stepen 2 iznesuva %d", x, x*x);
return 0;
}
