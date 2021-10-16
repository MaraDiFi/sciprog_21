#include<stdio.h>
#include<math.h>

float degtorad (float degang);
float traprule (int N, float ArreyTan[N+1]);
int main (){

  int N=12, i;
    float ArreyTan[N+1], deg, rad;

    //Calculating the value of f(xi) where i=0, 1, ...,12
    //as array elements - xi in radiants -

      for (i=0; i<=N; i++){
          deg=i*5.0;
	      rad=degtorad(deg);
	          ArreyTan[i]=tan(rad);
		      printf("ArreyTan[%d]=%f (f(x) at x=%d)\n", i, ArreyTan[i], i);
		      }

		      // find the area by trapezodial rule
		      float area;
		      area=traprule (N, ArreyTan);

		      //approximated result
		      printf("\nTrapezoidal result is:%f\n", area);

		      //actual result
		      printf("Real Result is : %f\n", log(2.0));


		      return 0;
		      }


		      float  degtorad (float degang){
		      return ((M_PI*degang)/180.0);

		      }

		      float traprule (int N, float ArreyTan[N+1]){
		      int i;
		      float area;

		      area=ArreyTan[0]+ArreyTan[N];
		      for (i=1; i<N; i++){
		        area=area+2.0*ArreyTan[i];
			}

			//Multiply area by (pi/3)/2N after converting it to radiants
			float mult_rad=degtorad((60.0-0.0)/(2.0*N));
			area=mult_rad*area;

			return area;

			}

