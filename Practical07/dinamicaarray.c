#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int factorial(int n) {

	int i;
	int fact = 1;

	if (n==0)
	return 1;

	for (i=1; i<= n; i++)
	   fact = fact * i;
        return fact;
    }

double compute_polynomial(int n, int x) {
	
	double sum = 0.0;
	int i;

	for (i=0; i <= n; i++)
	sum = sum + (double)pow(x,i) / factorial(i);
	return sum;
	}
	
int main () {

	int order_of_polyn;
	int size_of_array;
	double* array_of_terms;
	int i, x=1;

	printf("Enter the order of polynomial: ");
	scanf("%d", &order_of_polyn);

	size_of_array = order_of_polyn + 1;
	  array_of_terms = (double*) malloc(size_of_array * sizeof(double));

	for (i=0; i < size_of_array; i++) {
	  array_of_terms[i] = compute_polynomial(i,x);
	 printf("f[%d] = %0.20f\n", i, array_of_terms[i]);
	}

	printf("e1 = %0.20f\n", exp(1));

	for(i=0; i< size_of_array; i++)
          printf("Estimate difference for term %d is %0.20f\n", i, exp(1)-array_of_terms[i]);

        free(array_of_terms);
        array_of_terms = NULL;
    return 0;
}

//this program gives as output a more precise value of e when x is 12.
//Anyway, the difference between the calculated value of e and the real value it make sense till x=12, in which probably the calculated value is still smaller than the actual value. for x>12 the calculated value seems to be greater then the real value and the difference gives negatives numbers.
																				     //Sometime the value of the difference of the two values can jump from negative to positive values and this is probably due to an approximation error of the machine and also due to the fact we set value as float and double
~
																														     
