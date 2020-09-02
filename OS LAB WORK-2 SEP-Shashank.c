#include <stdio.h>

int main()
{
    int i,n;
    printf("total number of process");
    scanf("%d",&n);
    int bt[10],at[10],wt[10],tat[10],atat=0,awt=0;
    wt[0] = 0;  
    printf("Enter the Worst Time\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("Enter the arrivale time\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }
    printf("Wating Time[0]=%d\n",wt[0]);
    for(i = 1; i < n ; i++ )  
    {
        wt[i] =  bt[i-1] + wt[i-1] ; 
        printf("Wating Time=%d\n",wt[i]);
    }
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        printf("Trun arroud Time=%d\n",tat[i]);
    }
    for(i=0;i<n;i++)
    {
        atat=atat+tat[i];
        awt=awt+wt[i];
    }
    atat=atat/n;
    awt=awt/n;
    printf("ATAT=%d",atat);
    printf("AWT=%d",awt);
    
   
    return 0;
}

