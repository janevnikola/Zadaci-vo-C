#include <stdio.h>
//Да се напише програма која ќе ја пресметува вредноста на математичкиот
//израз: x = 3/2 + (5 - 46*5/12)

int main (){
double  x = (double)3/2 + (5 - 46*(double)5/12);
printf("Rezultat od matematickit izraz iznesuva %.2lf", x); //Delenje so int sekogas dava cel broj odnosno rezultatot
                                                            //ke bide -13.00, a dokolku barem eden od niv e realen broj
                                                            //togas delenjeto ke bide korektno i ke se dade tocniot rezultat
return 0;                                                   //odnosno -12.67
}
