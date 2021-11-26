#include <stdio.h>
#include <stdlib.h>

double ** aloca_matriz(int n, int m){
	double **matriz;

	matriz= malloc(n * sizeof(double*));
	for(int i=0; i<n; i++){
		matriz[i] = malloc(m * sizeof(double));
  }
  for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("\nMatriz[%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }  
	
	return matriz;
}

int main() {

  int n, m;
  double **matriz, **matriz2;

  printf("Valor de n: ");
  scanf("%d", &n); 
  printf("Valor de m: ");
  scanf("%d", &m); 

  matriz = aloca_matriz(n,m);
  matriz2 = aloca_matriz(n,m);

  for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
        matriz2[i][j] += matriz[i][j];
        printf("\nSoma: %.2lf. Alocado em [%d][%d].", matriz2[i][j],i,j);
        }
    }  

  return (0);

}
