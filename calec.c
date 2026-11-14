#include<stdio.h>
int main(){
    int a;
    int b;
    char op;

    printf(" enter the number a ");
    scanf( "%d" ,&a);
    printf(" enter the number b");
    scanf("%d", &b);
    printf(" enter the opretor: ");
    scanf("c",&op);


    switch(op) {

        case '+':
        printf(" the sum is : %d", a+b);
        break;
       case '-':
        printf(" the sum is : %d", a-b);
        break;
       case '*':
       printf(" the sum is : %d", a*b);
       break;
      case '/':
      printf(" the sum is: %d" , a/b);
      break;

    default:
    printf(" invalid operator");
    break;

    }

}