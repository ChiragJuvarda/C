#include<stdio.h>
void main(){
    float w,h,b;
    printf("Enter Weights in Kilograms :- ");
    scanf("%f",&w);

    printf("Enter Height in Meter :- ");
    scanf("%f",&h);

    b = w / (h*h);
    
    printf("Body Mass Index (BMI):- %0.2f",b);
}