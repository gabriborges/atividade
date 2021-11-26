#include <stdio.h>
#include <stdlib.h>

int ** aloca_matriz(int n, int m, int p){
	int **matriz;

	matriz= malloc(n * sizeof(int*));
	for(int i=0; i<n; i++){
		matriz[i] = malloc(m * sizeof(int));
  }
  for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matriz[i][j]= p;
            printf(" matriz[%d][%d]= %d \n",i,j, matriz[i][j]);
        }
    }  
	
	return matriz;
}


int main() {

  int n, m, **matriz;

  printf("Valor de n: ");
  scanf("%d", &n); 
  printf("Valor de m: ");
  scanf("%d", &m); 

  matriz = aloca_matriz(n,m,0);

  return **matriz;

}
