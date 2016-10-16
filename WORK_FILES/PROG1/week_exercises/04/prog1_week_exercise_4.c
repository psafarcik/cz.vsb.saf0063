/* 
 * File:        prog1_week_exercise_4.c
 * Author:      Petr Šafarčík - SAF0063
 * Course:      PROG1
 * Exercise:    WEEK_04
 * Email:       petr.safarcik@gmail.com
 *
 */

#include <stdio.h>
#include <math.h>

float a, b, c, s;
float areaTriangle;

int main(void) {
    
    printf("Zadejte delky stran trojuhelnika a, b, c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    s = (a + b + c) / 2;
    areaTriangle = sqrt(s * (s - a) * (s - b) * (s - c));
    
    if (areaTriangle < 0) {
        printf("Nejedna se o platny trojuhelnik.\n");
    }
    else {
        printf("Obsah trojuhelnika je %g\n", &areaTriangle);
    }
    
    return 0;
}
