#include <stdio.h>

int main()  {

    int P, L, w, s;

    printf("Quantas Linhas vai ter a matriz ? ");
    scanf("%d", &P); // O usuario vai digitar a linha P

    printf("Quantas colunas vai ter a matriz ?");
    scanf("%d", &L); // O usuario vai digitar a coluna L


    int mat[P] [L];

    for (w = 0; w < P; w++ ){
        for(s = 0; s < L; s++ ){
            printf("Elemento [%d, %d]:", w, s);
            scanf("%d", &mat[w][s]);
        }
    }

    printf("\nMatriz digitada:\n");
     for (w = 0; w < P; w++){
        for(s = 0; s < L; s++){
            printf("%d", mat[w][s]);
        }
        printf("\n");
     }



     
    return 0;
}