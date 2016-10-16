//
//  main.c
//  week04_2
//
//  Created by Petr Šafarčík on 13.10.16.
//  Copyright © 2016 Petr Šafarčík. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double a, b, c, D, x1, x2;

int main(void) {
    
    printf("Zadejte parametry:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    D = (b * b) - 4 * a * c;
    x1 = ((-b - sqrt(D))/(2 * a));
    x2 = ((-b + sqrt(D))/(2 * a));
    
    if (D>=0){
        printf("Koren 1: %g\nKoren 2: %g\n", x1, x2);
    }
    else {
        printf("Rovnice nema reseni v R.\n");
    }
    
    return 0;
}
