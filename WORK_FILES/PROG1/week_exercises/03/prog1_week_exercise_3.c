/* 
 * File:        prog1_week_exercise_3.c
 * Author:      Petr Šafarčík - SAF0063
 * Course:      PROG1
 * Exercise:    WEEK_03
 * Email:       petr.safarcik@gmail.com
 *
 */

#include <stdio.h>

int a, b, c;

int main(void) 
{
    
    printf("Zadejte prvni cislo:\n");
    scanf("%d", &a);
    printf("Zadejte druhe cislo:\n");
    scanf("%d", &b);
    printf("Zadejte treti cislo:\n");
    scanf("%d", &c);
    
    printf("Soucet je:\n%d\n", a + b + c);
    printf("Soucin je:\n%d\n", a * b * c);
    printf("Rozdil je:\n%d\n", a - b - c);

    return 0;
}
