
#include <stdio.h>

int main()
{
   int n1=6,n2=6,sum1=0;
    int a1[n1];
    float a2[n2],avg1=0,avg2=0,sum2=0;
    printf("MR.INT ENTER THE DAILY WAGES FORM MONDAY TO SATURDAY: ");
    for(int i=0;i<n1;i++)
    {
      
      scanf("%d",&a1[i]);
    }
    printf("MR.FLOAT ENTER THE DAILY WAGES FORM MONDAY TO SATURDAY: ");
      for(int i=0;i<n2;i++)
    {
      scanf("%f",&a2[i]);
    }
    for(int i=0;i<n1;i++)
    {
        sum1 = sum1 + a1[i];
    }
    avg1 = sum1/n1;
    printf("THE WEEKLY SALARY OF MR.INT IS %d AND AVERAGE SALARY IS %0.3f\n",sum1,avg1);
    for(int i=0;i<n2;i++)
    {
        sum2 = sum2 + a2[i];
    }
    avg2 = sum2/n2;
     printf("THE WEEKLY SALARY OF MR.INT IS %0.3f AND AVERAGE SALARY IS %0.3f",sum2,avg2);

    return 0;
}