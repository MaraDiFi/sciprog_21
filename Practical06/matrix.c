#include<stdio.h>


int main (void) {

  int n=5, p=3, q=4;
    double A[n][p], B[p][q], C[n][q];
      int i, j, k;

              //initialise A, B, C matrices
	        for(i=0; i<n; i++) {
	          for (j=0; j<p; j++) {
	            A[i][j]=i+j;
	           }
	        }
	
		for(i=0; i<p; i++) {
		  for (j=0; j<q; j++) {
		    B[i][j]=i-j;
		   }
		}
		for(i=0; i<n; i++) {
		  for (j=0; j<q; j++) {
		    C[i][j]=0.0;
		   }
		}

             //Perform matrix multiplication - here we call a function expressed in another file
	     matmult(n, p, q, A, B, C);
               /*for(i=0; i<n; i++)
                 for(j=0;j<q; j++)
                   for(k=0; k<p; k++)
                     C[i][j]=C[i][j]+A[i][k]*B[k][j];*/

             //Print matrices
         	 printf("\nThe matrix A is: \n\n");
                 for(i=0; i<n; i++) {
	           for (j=0; j<p; j++) {
	              printf("%3.0f", A[i][j]);
	              }
	         printf("\n");
	        }

	         printf("\nThe matrix B is: \n\n");
                 for(i=0; i<p; i++) {
                   for (j=0; j<q; j++) {
                      printf("%3.0f", B[i][j]);
                      }
	         printf("\n");
	        }

               printf("\nThe matric C is: \n\n");
               for (i=0; i<n; i++) {
                 for (j=0; j<q; j++) {
                    printf("%3.0f", C[i][j]);
                   }
               printf("\n");
              }

return 0;
}

