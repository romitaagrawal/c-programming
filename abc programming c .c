#include<stdio.h>
#include <string.h>
#define my_age 18

int add(int a, int b) {
    return a + b;
}
int increment(int *num) {
    (*num)++;
}
struct MyStructure {
    int sapid;
    char name;
};



int main()
{

//ARRAY
    int i, arr[5];
    printf("Enter array elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are:\n");
    for (i = 0; i <= 5; i++) {
        printf("%d ", arr[i]);
    }

printf("\n");

printf("\n");

//STRING
    char str1[20] = "HII";
    char str2[] = "welocome ";
    printf("String is: %s\n", str1);
    strcat(str1, str2);
    printf("String concatenate: %s\n", str1);
    printf("String is: %s\n", str2);
    printf("String length is: %d\n", strlen(str1));
    printf("String length is: %d\n", strlen(str2));



printf("\n");
//POINTER
    int a = 114;
    int *ptr;
    ptr = &a;
    printf("value placed in pointer is %d\n", *ptr);
    printf("value of a is %d\n", a);

printf("\n");
//call by value
int result = add(100, 500);
    printf("Result: %d\n", result);


printf("\n");
//call by reference
int x = 1;
    increment(&x);
    printf("%d\n", x);

printf("\n");
//STRUCTURE
struct MyStructure s1;
    s1.sapid = 500121027;
    s1.name = 'R';
    printf("My number: %d\\\\n", s1.sapid);
    printf("My letter: %c\\\\n", s1.name);

printf("\n");

#ifdef my_age
    printf("My age is: %d\\\\n", my_age);
#else
    printf("Age not available\n");
#endif



    return 0;
}
