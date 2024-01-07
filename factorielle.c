#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
  int i,p,n;
printf("Entrer la valeur du nombre dont vous calculer le factorielle :");
scanf("%d",&n);
p = 1;
for(i =1; i <=n;i++){
    p = p*i;}
return 0;
}
