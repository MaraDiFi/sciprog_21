#include <stdio.h>
#include <stdlib.h>

//Subfunction - declare function
void fibo(int *a, int *b);

//main function
 int main () {

     int n;
         printf("Enter a positive integer for n: \n");
	     scanf("%d", &n);

	     //Loop for exit the program when condition is not met
	         if (n<1) {
		        printf("Number less then 1\n");
			       exit(1);
			       }

			       //declare variables
			           int n1 = 0;
				       int n2 = 1;

				           printf("The Fibonacci sequence is: \n");
					       printf("%d, ", n1);

					           int i;
						       for (i = 1; i < n-1; i++) {
						             fibo(&n1, &n2);
							           printf("%d, ", n1);
								         }

									     fibo(&n1, &n2);
									           printf("%d, ", n1);

										    return 0;
										    }

										    //subfunction definition
										    void fibo(int *a, int *b) {

										       int next;
										          next = *a + *b;
											     *a = *b;
											        *b = next;

												}
												~

