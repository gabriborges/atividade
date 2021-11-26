#include <stdio.h>
#include <stdlib.h>

int **ler_matriz(char filename[]){
    int **mat;
  int n_linhas, n_colunas;
    FILE *ptrArq;

    ptrArq = fopen(filename, "r");

    if (ptrArq == NULL) {
        printf("Arquivo nao encontrado ou não há memoria disponível");
        printf("\nSaindo do programa");
        exit(1);
    }

    fscanf(ptrArq, "%d %d", &n_linhas, &n_colunas);

    mat = malloc(n_linhas * sizeof(int*));

    for (int i = 0; i < n_linhas; ++i) {
        mat[i] = malloc(n_colunas * sizeof(int));
    }

    for (int i = 0; i < n_linhas; ++i) {
        for (int j = 0; j < n_colunas; ++j) {
            fscanf(ptrArq, "%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n_linhas; ++i) {
        for (int j = 0; j < n_colunas; ++j) {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    return mat;
}

int main() {

    int **mat;

    ler_matriz("matriz.txt");

   return **mat;

}