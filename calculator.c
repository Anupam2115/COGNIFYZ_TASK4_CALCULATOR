//TASK4 - Calculator
//Anupam kumar Verma

/*Calculator Program*/

#include <stdio.h>

int main()
{
    int num1,num2;
    float result;
    char ch;    //to store operator choice

    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);

    printf("Select operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);

    result=0;
    switch(ch)
    {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=(float)num1/(float)num2;
            break;

        default:
            printf("Invalid operation.\n");
    }

    printf("Result of two number is : %d %c %d = %f\n",num1,ch,num2,result);
    return 0;
}
