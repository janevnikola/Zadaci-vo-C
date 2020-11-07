#include <stdio.h>




/*

За дадени освоени поени пишете ја оценката која го следи студентот според дадените табели.

0-50 = 5

51-60 = 6

61-70 = 7

71-80 = 8

81-90 = 9

91-100 = 10

Покрај оценките да се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:

1 - 3 = "-"

4 - 7 = " "

8-0 = "+"

For example:
Input 	Result

101     Nevalidna vrednost za poeni!
*/
	


int main(){
int ocenka;
scanf("%d", &ocenka);




if(ocenka >0 &&ocenka<=50){
printf("Ocenka 5");

}


else if(ocenka>=51 && ocenka<60){
if(ocenka%10 >=1 && ocenka%10 <= 3){
printf("Ocenka 6-");
}

else if(ocenka%10>4 &&ocenka%10<7){
printf("Ocenka 6");
    }
    
else if(ocenka%10>8 &&ocenka%10<10){
printf("Ocenka 6+");
    }
}




else if(ocenka>=61 &&ocenka<=70){
if(ocenka%10>=1 &&ocenka%10 <=3){
printf("Ocenka 7-");
}

else if(ocenka%10>4 &&ocenka%10<7){
printf("Ocenka 7");
    }
    
else if(ocenka%10>8 &&ocenka%10<10){
printf("Ocenka 7+");
    }
}




else if(ocenka>71 &&ocenka<=80){
if(ocenka%10>1 &&ocenka%10 <3){
printf("Ocenka 8-");
}

else if(ocenka%10>4 &&ocenka%10<7){
printf("Ocenka 8");
    }
    
else if(ocenka%10>8 &&ocenka%10<10){
printf("Ocenka 8+");
    }
}



else if(ocenka>81 &&ocenka<=90){
if(ocenka%10>1 &&ocenka%10 <3){
printf("Ocenka 9-");
}

else if(ocenka%10>4 &&ocenka%10<7){
printf("Ocenka 9");
    }
    
else if(ocenka%10>8 &&ocenka%10<10){
printf("Ocenka 9+");
    }
}


else if(ocenka>=91 &&ocenka<100){

if(ocenka%10 >=1 && ocenka%10 <=3){
printf("Ocenka 10-");
}

else if(ocenka%10>4 &&ocenka%10<7){
printf("Ocenka 10");
    }
    
else if(ocenka%10>8 &&ocenka%10<10){
printf("Ocenka 10+");
    }
}



else if(ocenka <0){
printf("Nevalidna vrednost za poeni!");
}
else if(ocenka>100){
printf("Nevalidna vrednost za poeni!");
}



return 0;

}
