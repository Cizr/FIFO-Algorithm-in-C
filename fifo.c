#include<stdio.h>
int main()
{
int i,j,n,a[50],frame[10],no,k,avail,count=0;
            printf("\n Please enter the number of pages (reference string) :\n");
            scanf("%d",&n);
            printf("\n Please enter the page numbers (value of your ref string) :\n");
            for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
            printf("\n Final step: Please enter your number of frames :\n");
            scanf("%d",&no);
for(i=0;i<no;i++)
            frame[i]= -1;
                        j=0;
                               printf("\t ref string\t page frames\n");
for(i=1;i<=n;i++)
                        {
                               printf("%d\t\t",a[i]);
                               avail=0;
                               for(k=0;k<no;k++)
if(frame[k]==a[i])
                                     avail=1;
                                    if (avail==0)
                                    {
                                                frame[j]=a[i];
                                                j=(j+1)%no;
                                                count++;
                                                for(k=0;k<no;k++)
                                                printf("%d\t",frame[k]);
}
                                                 printf("\n");
}
                        printf("Total Page Fault is %d",count);
                        return 0;
}

