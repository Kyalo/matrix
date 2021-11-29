#include <stdio.h>
#include <string.h>

int main(void) {
  int n,m;
  int counter, sum, i, j;

  printf("Enter the dimensions of the array, n by m: \n");
  scanf(" %d %d", &n, &m);
  
  // initialize arrays with zeros
  int array[n][m];
  memset(array, 0, n*m*sizeof(int));
  int array_2 [n+1][m+1];
  memset( array_2, 0, (n+1)*(m+1)*sizeof(int) );

  // Populate n by m matrix with user input
  printf("Enter %d elements into the n by m 2-D array: \n", n*m);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d" , &array[i][j]);
    }
  }

  // print n by m matrix
  printf("\nThe n by m matrix is: \n");
  for(i = 0; i < n; i++){
      for(j = 0; j < m; j++){
          printf("%d", array[i][j]);
          printf("\t");
      }
    printf("\n");
  }

  // Populate n+1 by m+1 matrix with known values
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      array_2[i][j] = array[i][j];
    }
  }

  counter = 0;
  // calculate sum of rows
  for(i = 0; i < n; i++){
    sum = 0;
    while(counter == i){
      for(j = 0; j < m; j++){
          sum += array[i][j];
      }
      array_2[i][m] = sum;            
      array_2[n][m] += array_2[i][m];
      counter++;
    }

  }

  counter = 0;
  // calculate sum of columns 
  for(i = 0; i < m; i++){
    sum = 0;
    while(counter == i){
      for(j = 0; j < n; j++){
          sum += array[j][i];
      }
      array_2[n][i] = sum;
      array_2[n][m] += array_2[n][i];
      counter++;
    }
  }

  printf("\nThe (n+1) by (m+1) matrix is: \n");
  for(i = 0; i < n+1; i++){
      for(j = 0; j < m+1; j++){
          printf("%d", array_2[i][j]);
          printf("\t");
      }
    printf("\n");
  }
 
  return 0;
}
