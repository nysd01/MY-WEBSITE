#include <stdio.h>
int main(){
float num1,num2,result;
char operation;
printf("enter first number: ");
scanf("%f",&num1);
printf("enter the operation: ");
scanf("%c",&operation);
printf("enter second number: ");
scanf("%f",&num2);

if(operation == '*'){
result = num1 * num2;
printf("%f * %f = %f",num1, num2, result);
}
else if(operation == '/'){
    result = num1 / num2;
printf("%f / %f = %f",num1, num2, result);
}
else if(operation == '-'){
    result = num1 - num2;
printf("%f - %f = %f",num1, num2, result);
}
    else if(operation == '+'){
    result = num1 + num2;
printf("%f + %f = %f",num1, num2, result);
}
    else{
        printf("an error occured when inputing the operation");
    }
    
return 0;



}