#include<stdio.h>

void main()
{
    FILE *f;
    char data [100];
    f=fopen("demo.txt","w");

    if(f==NULL){
        printf("file cannot open !");
    }
    else{
       printf("enter  data");
    gets(data);
    fputs(data,f);
    }
}