#include <conio.h>
#include <stdio.h>
int main()
{
    printf("Hello World");
    int n , i, qt , count =0,temp,sq=0,bt[10],wt[10],tat[10],rembt[10];
    float awt= 0,atat=0;
    
    printf("Enter no. of processes : ");
    scanf("%d",&n);
    printf("Enter Burst time of processes \n");
    for (i=0;i<n;i++)
    {
        scanf  ("%d",&bt[i]);
    }
    printf("Enter Quantum Time\n");
    scanf("%d",&qt)  ;
    
    while(1)
    {
        for(i=0,count=0;i<n;i++){
            temp = qt;
            if(rembt[i]==0)
            {
                count++;
                continue;
            }
            if(rembt[i]>qt)
            {
                count++;
                rembt[i]-qt
            }
        }
    }
    return 0;
}
