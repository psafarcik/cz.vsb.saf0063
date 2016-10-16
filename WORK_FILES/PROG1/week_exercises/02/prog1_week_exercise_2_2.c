/*

 *   @Course:       PROG1
 *   @Exercise:     WEEK_02
 *   @Filename:     prog1_week_exercise_2_2.c

 *   @Author:       Petr Šafarčík - SAF0063
 *   @Email:        petr.safarcik@gmail.com

*/

#include <stdio.h>
#include <string.h>

const int a = 3;
int number;
char name[100];

int main(void)
{
	printf("Zadej svoje jmeno (bez diakritiky): ");
    //fgets (name, 100, stdin);
    //strtok(name, "\n");

	scanf ("%[^\n]%*c", name);
	
	/*
	The [] is the scanset character. [^\n] tells that while the input is not a 
	newline ('\n') take input. Then with the %*c it reads the newline character 
	from the input buffer (which is not read), and the * indicates that this read 
	in input is discarded (assignment suppression), as you do not need it, and this 
	newline in the buffer does not create any problem for next inputs that you might take.

	Read here about the scanset and the assignment suppression operators.

	Note you can also use gets but ....

	Never use gets(). Because it is impossible to tell without knowing the data in 
	advance how many characters gets() will read, and because gets() will continue 
	to store characters past the end of the buffer, it is extremely dangerous to use. 
	It has been used to break computer security. Use fgets() instead.
	*/

	printf("Zadej cele cislo: ");
	scanf("%d", &number);
	printf("Ahoj, %s.\n", name);
	printf("%d x %d = %d\n", number, a, number*a);
	printf("%d / %d = %d\n", number, a, number/a);

	return 0;
}
