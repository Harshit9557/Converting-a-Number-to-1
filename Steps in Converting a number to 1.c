#include<stdio.h>
int main()
{
    int n,z,c,i,v;
    printf("Enter the Limit till you wish to enter the values of n : ");
    scanf("%d",&z);
    printf("Enter the last value till which you wanna enter values of n : ");
    scanf("%d",&v);
    printf("Values of n\tNo. of Steps\n");

    for(i=1;i<=z;i++)
    {
        scanf("%d",&n);
        if(n>=1 && n<=v)
        {
            c=0;
            while(n>1)
            {
                if(n%2==0)
                {
                    n=n/2;
                    c++;
                }
                else if(n%3==0)
                {
                    n=2*n/3;
                    c++;
                }
                else if(n%5==0)
                {
                    n=4*n/5;
                    c++;
                }
                else
                {
                    n=1;
                }
            }
            printf("\t\t%d\n",c);
        }
        else
        {
            printf("You have entered invalid value of n");
        }
    }
    return 0;
}
