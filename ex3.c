#include <stdio.h>
#include <stdlib.h>

int main() {

  int n, m, m1=0, m2=0, m3=0,y[3]={0,0,0},x[3]={0,0,0};
  int **matriz, **matriz2;

  printf("Valor de n: ");
  scanf("%d", &n); 
  printf("Valor de m: ");
  scanf("%d", &m); 
  
  matriz= malloc(n * sizeof(int*));
	for(int i=0; i<n; i++){
		matriz[i] = malloc(m * sizeof(int));
  }
  matriz2= malloc(m * sizeof(int*));
	for(int i=0; i<m; i++){
		matriz2[i] = malloc(n * sizeof(int));
  }

  for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("\nMatriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }  
	for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz2[i][j] = matriz[j][i];
        }
    } 

  printf("\nMatriz original: ");
  for (int i = 0; i < n; ++i) {
        printf("\n");
          for (int j = 0; j < m; ++j) {
            printf("%d  ", matriz[i][j]);
            if(matriz[i][j] >= m1)
            {
                m3 = m2;
                m2 = m1;
                m1 = matriz[i][j];
                y[0]=i;
                x[0]=j;
            }
            // Há um erro ocorrendo na atribuição de x e y a partir deste ponto
            if(matriz[i][j] >= m2 && matriz[i][j] < m1)
            {
                m3 = m2;
                m2 = matriz[i][j];
                y[1]=i;
                x[1]=j;
            }
            if(matriz[i][j] >= m3 && matriz[i][j] < m2){
                m3 = matriz[j][i];
                y[2]=i;
                x[2]=j;
          }
      }
    }
  

  printf("\nMatriz Tranposta: ");   
  for (int i = 0; i < m; ++i) {
     printf("\n");
      for (int j = 0; j < n; ++j) {
        printf("%d  ", matriz2[i][j]);
        }
    } 
  printf("\nTres maiores numeros: ");     
  printf("\n[%d][%d]: %d |[%d][%d]: %d | [%d][%d]: %d \n", y[0],x[0], m1, y[1], x[1], m2,y[2], x[2], m3);


  return (0);

}
