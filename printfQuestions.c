#include<stdio.h>


void Q1(){
    printf("Ravindra"+1); // this will print string from 1st index because +1 is added
    printf("\n%d\n"); // nothing is menthoned for %d so a garbage value will be printed
    printf(2+"Ravindra"); // string from 2nd index will be printed
    printf("\n%c\n",'r','r'); // only 1 r will be printed because of only one %c
    printf("%c","Ravindra"[5]); // 5th index character from Ravindra will be printed
}

/* Output:

avindra
1203970036
vindra
r
d

*/

void Q2(){
    int a=10,b=3;
    float result;
    result = a/b;
    printf("%f", result);
}

/* Output:

3.000000

because a and b are integers and their division output will be an integer
Even type casting of (float) will not help
((float)a)/b will give the correct answer

*/

void Q3(){
    int a,b;
    printf("Enter numbers to be added");
    scanf("%d %d",&a,&b);
    printf("\nSum is %d",a+b);
}

/* Output:

The sum can be different but usually it is correct.
If in the memory the memory address of a variable is the memory adrress of some other variable in some other process then it would give incorrect sum due to runtime error/

*/


int main(){
    Q3();
    return 0;
}