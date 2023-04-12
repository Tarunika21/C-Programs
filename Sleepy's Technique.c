#include<stdio.h>
int main()
{
    int i,j,x,y;
    float num1,num2,den1,den2;
    float res1,res2;
    float div;
    printf("\nSleepy Technique Values:");
    for(i=10;i<=99;i++)
    {
        x=i;
        num1=x/10;
        num2=x%10;
        for(j=10;j<=99;j++)
        {
            y=j;
            den1=y/10;
            den2=y%10;
            div=x/(float)y;
            if(num1==den2)
            {
                res1=num2/(float)den1;
                if(res1==div)
                {
                   printf("\n%d/%d",x,y);
                }
            }
            else if(num2==den1)
            {
                res2=num1/(float)den2;
                if(res2==div)
                {
                   printf("\n%d/%d",x,y);
                }
            }
        }
    }
}
