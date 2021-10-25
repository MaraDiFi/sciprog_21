#include <stdio.h>

int main (void) {

 int i;
  double a;
   printf("Enter an int and a double, separately by (,)\n");
    
    //the command scanf allows for input function 
    scanf("%d,%lf", &i, &a);
     printf("you have entered %d, and %lf\n", i, a);

    //using pointers to easily find for variables stored in memory

      int *pointer_to_i = &i;
       printf("The value i is %d\n", i);
        printf("The value i is also %d\n", *pointer_to_i);
	 printf("The adress of i is %d\n", &i);


	   return 0;
	   }
	   ~
	   ~

