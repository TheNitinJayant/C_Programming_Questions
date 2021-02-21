#include<stdio.h>

void Q1(){
    int val1;
    int val2;
    printf("Enter value 1 and value 2 \n");
    scanf("%d %d",&val1, &val2);

    char ch1;

    printf("Enter Y or N");
    scanf("%c",&ch1);

    switch (ch1)
    {
    case 'y': printf("Y");
        break;
    case 'n': 
    default: printf("Default value");
        break;
    }
}

/* Output:

"Default value" because of the stdin in file 

when we enter val1 and val2 and press enter the /n of enter is switched into switch case because it is not deleted form the stream.
if we use fflush(stdin) then it will not give this error

*/


int main(){
    Q1();
    return 0;
}