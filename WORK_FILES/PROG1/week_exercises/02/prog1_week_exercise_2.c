/*

 *   @Course:       PROG1
 *   @Exercise:     WEEK_02
 *   @Filename:     prog1_week_exercise_2.c

 *   @Author:       Petr Šafarčík - SAF0063
 *   @Email:        petr.safarcik@gmail.com

*/

#include <stdio.h>

double a, b;

int main(void)
{
	printf("Zadej 1. cislo:\n");
	scanf("%lf", &a);
	printf("Zadej 2. cislo:\n");
	scanf("%lf", &b);
	printf("Zadali jste:\n%g a %g\n", a, b);
	printf("%g + %g = %g\n", a, b, a+b);
	printf("%g - %g = %g\n", a, b, a-b);
	printf("%g * %g = %g\n", a, b, a*b);
	printf("%g / %g = %g\n", a, b, a/b);

	return 0;
}
