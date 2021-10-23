#include<stdio.h>
#include<math.h>

int main (){

  int N=61, i;
    float a=0.0, b_deg=60.0;

      //Convert pi/3 from degree values to radians values

         float b_rad;
	    b_rad=(M_PI * b_deg)/180.0;
	       printf("pi in radiants=%f\n", b_rad);

	       //f(x0)+f(xn)
	          float area=tan(a)+tan(b_rad);
		      printf("initial sum=%f\n", area);

		      //Loop for the calculation of the area points 2*f(x1)+2*f(x2)+...+2*f(xn-1)
		      //This type of loop will execute the same instruction for a fixed number of time (60)
		      //This loop will end when the condition is reached (60 and stop)

		         for(i=1; i<60; i=i+1){
			    area=area+2*tan((M_PI*i)/180.0);
			       printf("New area at x%d=%f\n", i/1, area);
			       }

			       //Multiply with b-a/2N
			         float mult_rad=M_PI*((b_deg-a)/(2*N))/180.0;
				   area=mult_rad*area;

				   //approximated value
				   printf("\nTrapezodial result=%f\n", area);

				   //actual result
				   printf("Real result=%f\n", log(2.0));


				   return 0;

				   }
				   ~
				   ~
				   ~

