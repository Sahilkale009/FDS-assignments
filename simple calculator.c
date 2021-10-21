#include<stdio.h>
#include<math.h>

int main()
{
    float a,b , result;
    char operation;

    printf("enter the expression(+,-,*,/)");
    scanf("%f%c%f",&a,&operation,&b);

    switch(operation)
    {
    case'+':
        result = a + b;
    break;

    case'-':
         result = a - b;
    break;

    case'*':
         result = a * b;
    break;

    case'/':
         result = a / b;
    break;

    }

    printf("result = %f", result);
    return 0;
}
