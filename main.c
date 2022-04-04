#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genAndPrintArray()
{
    
    srand(time(NULL));

    int rows = 5, columns = 7;
    float pole[rows][columns];

    printf("Generovani nahodnych cisel\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            pole[j][i] = ((float)rand()/(float)(RAND_MAX)) * 100.0;
        }
    }

    printf("Nahodna cisla:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%10.2f", pole[j][i]);
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    char ch;

    for(;;) {
        genAndPrintArray();
        scanf("%c",&ch);
    }

    return 0;
}