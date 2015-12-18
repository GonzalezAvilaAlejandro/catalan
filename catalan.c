#include<stdio.h>





double res;
double numeroscatalan(double n);


main(double n)

{

printf("\t\tNUMEROS DE CATALAN\n");

printf("Numero: ");
scanf("%lf",&n);
res=numeroscatalan(n);
printf("Catalan:%.0lf\n",res);
      }



double numeroscatalan(double n)

{

if (n==0)
{

return 1;

}

else

{



return(2*((2*n)-1))/(n+1)*numeroscatalan(n-1);



}
}
