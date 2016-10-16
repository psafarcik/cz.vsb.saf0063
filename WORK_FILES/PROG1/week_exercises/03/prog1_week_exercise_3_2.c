/* 
 * File:        prog1_week_exercise_3_2.c
 * Author:      Petr Šafarčík - SAF0063
 * Course:      PROG1
 * Exercise:    WEEK_03_2
 * Email:       petr.safarcik@gmail.com
 *
 */

#include <stdio.h>
#include <math.h>

double pointAx, pointBx;
double pointAy, pointBy;

double pointSx, pointSy;
double lengthDirVecotrU;
double radiusR;

int main(void) 
{
    
    printf("Zadejte souradnice bodu A a B:\n");
    scanf("%lf %lf", &pointAx, &pointAy);
    scanf("%lf %lf", &pointBx, &pointBy);

    /*
     X-ova souřadnice středu S: (Ax + Bx) / 2
     Y-ova souřadnice středu S: (Ay + By) / 2
     Délka směrového vektoru u: sqrt((Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay))
     Poloměr r kružnice: polovina délky směrového vektoru
    */

    pointSx = (pointAx + pointBx) / 2;
    pointSy = (pointAy + pointBy) / 2;
    lengthDirVecotrU = sqrt((pointBx - pointAx) * (pointBx - pointAx) + (pointBy - pointAy) * (pointBy - pointAy));
    radiusR = lengthDirVecotrU / 2;

    printf("X-ova souradnice stredu S je: %g\n", pointSx);
    printf("Y-ova souradnice stredu S je: %g\n", pointSy);
    printf("Smerovy vektor u ma delku: %g\n", lengthDirVecotrU);
    printf("Polomer kruznice r ma hodnotu: %g\n", radiusR);

    return 0;
}
