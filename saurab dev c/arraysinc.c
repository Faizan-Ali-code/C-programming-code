#include <stdio.h>

int main()
{
   
   int a[5],sum=0,i;
   float avg;
   printf("enter values in array\n");
   for( i=0;i<5;i++){
       
       scanf("%d",&a[i]);
   }
   
    for( i=0;i<5;i++){
      sum+=a[i];
      avg = sum/5.0;
   }
   printf("sum of all is %d\n",sum);
   printf("average of all is %f",avg);
   

    return 0;
}
