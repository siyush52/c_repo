#include <stdio.h>
void Addition(int n1, int n2);  // function declaration
void Substraction(int n1, int n2);
void multiplication(int n1, int n2);
void division(int n1, int n2);
int main()
{
    int num1,num2;
    printf("Enter first number--:");
    scanf("%d",&num1);
    printf("Enter Second number--:");
    scanf("%d",&num2);
Addition(num1,num2);
Substraction(num1,num2);
division(num1,num2);
multiplication(num1,num2);
    return 0;
}
void Addition(int n1, int n2){
    printf("Addition is %d", n1+n2);
}
void Substraction(int n1, int n2){
    printf("\t Substraction is %d", n1-n2);
}
void multiplication(int n1, int n2){
    printf("\t multiplication is %d", n2*n1);
}
    void division(int n1, int n2){
        float x =n1;                        //integer value converted into float value by float x = n1; float y=n2;
        float y = n2;
        
    printf("\t division is %f", x/y);
}           