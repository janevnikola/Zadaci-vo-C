#include <stdio.h>

/*�� �� ������ �������� ��� �� �� �������� ��������� ����������� �������� (+, -, *, /, %)
��� ��� ���� ��� �� ������ �� ���������� ����

Input 	Result

10 12    a + b = 22
        a - b = -2
        a * b = 120
        a / b = 0
        a % b = 10


*/

int main(){
int broj1, broj2;
scanf("%d %d", &broj1, &broj2);
printf("a + b = %d\n", broj1+broj2);
printf("a - b = %d\n", broj1-broj2);
printf("a * b = %d\n", broj1*broj2);
printf("a / b = %d\n", broj1/broj2);
printf("a %% b = %d", broj1%broj2);

return 0;
}
