#include<stdio.h>
int main(){
float  l,b;
printf("enter the length of the Rectangle :-\n");
scanf("%f",&l);
printf("enter the breadth of the Rectangle :-\n");
scanf("%f",&b);
float area= l*b;
printf("Area of rectangle is %.2f \n" ,area);
float perimeter=2*l+b;
printf("Perimeter of rectangle is %.2f",perimeter);
if(perimeter>area){
    printf("The perimeter is greater then area");
}
 else if(perimeter==area){
    printf("area and perimeter are equal");
}
else{
    printf("perimeter is smaller then area");
}
    return 0;
}