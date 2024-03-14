
#include <stdio.h>

int main()
{
    int unit;
    float a, ta, sc;

    printf("Enter units :- ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
        a = unit * 0.50;
    }
    else if(unit <= 150)
    {
        a = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        a = 100 + ((unit-150) * 1.20);
    }
    else
    {
        a = 220 + ((unit-250) * 1.50);
    }
    sc = a * 0.20;
    ta  = a + sc;

    printf("Your Bill is = %.2f Rs", ta);

}
