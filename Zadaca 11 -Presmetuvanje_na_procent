#include <stdio.h>


//Да се напише програма каде од тастатура се внесува одреден износ на пари кој корисник го има на својата трансакциска сметка. 
//Потоа, во нов ред се внесува сумата на еден производ кој го купил, на кој дополнително треба да плати и ДДВ(18% од таа сума). 
//Програмата печати 1 доколку после плаќањето на ДДВ корисникот има барем 1 денар на својата сметка, а 0 во спротивно.
//input: 25600
  //     10000    
       
//output: 1


int main (){

int iznos_naSmetka=0; //iznosot na smetkata
scanf("%d", &iznos_naSmetka); //vnesuvanje na iznosot na smetkata
int suma_proizvod=0; //cena na proizvod koj e kupen
scanf("%d", &suma_proizvod); //vnesuvanje

suma_proizvod=suma_proizvod+(suma_proizvod*0.18); //formula za procent cena_proizvod+(cena_proizvod*procent) procent moze da bide 0.18 za 18% ili 1.0, 2.0 za 1%, 2% itn
iznos_naSmetka-=suma_proizvod; //odzemanje na iznosot na smetkata za cenata koja treba da se plati

if(iznos_naSmetka>=1){ 
printf("1");
}
else {
printf("0");
}

return 0;
}
