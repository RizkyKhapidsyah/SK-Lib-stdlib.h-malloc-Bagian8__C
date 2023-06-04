#include <stdio.h>   
#include <stdlib.h> 
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    int* p1 = malloc(4 * sizeof(int));  // mengalokasikan cukup untuk array 4 int
    int* p2 = malloc(sizeof(int[4])); // sama, penamaan jenis secara langsung
    int* p3 = malloc(4 * sizeof * p3);   // sama, tanpa mengulang nama jenis

    if (p1) {
        for (int n = 0; n < 4; ++n) { // mengisi array
            p1[n] = n * n;
        }
        
        for (int n = 0; n < 4; ++n) { // mencetaknya kembali
            printf("p1[%d] == %d\n", n, p1[n]);
        }
    }

    free(p1);
    free(p2);
    free(p3);

    _getch();
    return 0;
}