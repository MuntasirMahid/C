#include <stdio.h>

    int main() {

       int factorial =1;
       int a=3;
       float sum;
       float x ;
       int sign= -1;

       printf("enter x in degrees: ");
       scanf("%f", &x);
       x=x/180*3.141592654; //Converting to radian

       sum=x;

       for (a = 3; a <=4 ; a+=2)
       {
           float powersum= 1;
           for (int b=1; b<=a; b++)
            {
            powersum=powersum*(x);
            }

        factorial=factorial*a*(a-1);
        sum= sum + sign* powersum/ factorial;
        sign=sign*-1;
       }


        printf("output : %.4f", sum);


        return 0;
    }
