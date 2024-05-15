#include<stdio.h>

void greet() {
    printf("Hello, World!\n");
}
int add(int a, int b) {
    return a + b;
}

int main()
{
    int a = 10 ,a1=5,y1,y2,y3,y4,y5;
    int m= -10,n=1,i=1;
    float b = 32.44;
    char c = 'R';
    printf("value of a is %d\n",a);
    printf("value of b is %f\n", b );
    printf("value of c is %c\n",c);


printf("\n");

//arithmetic operations
    y1=a+a1;
    y2=a-a1;
    y3=a*a1;
    y4=a/a1;
    y5=a%a1;
    printf("add=%d, sub=%d, mul=%d, div=%d, mod=%d\n",y1,y2,y2,y3,y4,y5);
    printf("compare %d and %d = ans( %d )\n",a,a1,a>a1);
    printf("compare %d and %d = ans( %d )\n",a,a1,a<a1);
    printf("compare %d and %d = ans( %d )\n",a,a1,a>=a1);
    printf("compare %d and %d = ans( %d )\n",a,a1,a<=a1);
    printf("compare %d and %d = ans( %d )\n",a,a1,a==a1);
    printf("compare %d and %d = ans( %d )\n",a,a1,a!=a1);



printf("\n");
//if-else statements
    if (a > 0) {
         printf(" a is a positive number\n");}

    if (m > 0) {
    printf("m is a positive number\n");
} else {
    printf("m is a negetive number\n");
}
printf("\n");

    int Day = 2;
switch (Day) {
    case 1:
        printf("today is Monday\n");
        break;
    case 2:
        printf("today is Tuesday\n");
        break;
    case 3:
        printf("today is Wednesday\n");
        break;
    case 4:
        printf("today is Thursday\n");
        break;
    case 5:
        printf("today is Friday\n");
        break;
    case 6:
        printf("today is Saturday\n");
        break;
    case 7:
        printf("today is Sunday\n");
        break;
    default:
        printf("Invalid day\n");
}
printf("\n");
// loop statements
    while (n <= 5) {
        printf("%d\n", n);
        n++;
    }


printf("\n");
    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
        if (i == 3)
            break;
    }
printf("\n");
greet();
printf("\n");
int result = add(100, 500);
    printf("Result: %d\n", result);

return 0;
}
