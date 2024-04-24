#include <stdio.h>

main()

{

int i, fact = 1, number;

printf("Enter number :- ");

scanf("%d\n", &number);

for(i=1; i<=number; i++)

{

fact = fact * i;

}

printf("Facto of %d is %d",number, fact);

}