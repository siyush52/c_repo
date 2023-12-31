#include<stdio.h>
int main(){
    int w;
    int l;
    int h;
    printf("Enter the width-->");
    scanf("%d",&w);
    printf("Enter the length-->");
    scanf("%d",&l);
    printf("Enter the height-->");
    scanf("%d",&h);
   int volume = l*h*w;
    printf("The volume of cuboid is %d -->",volume);
    return 0;
}