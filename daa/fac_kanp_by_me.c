#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c;
    double val;
    printf("enter the number of items: ");
    scanf("%d",&n);

    int *p = (int*)malloc(n*sizeof (int));
    int *w = (int*)malloc(n*sizeof (int));
    int *used = (int*)malloc(n*sizeof (int));
    printf("enter the profit: ");
    for (int i = 0; i < n; i++)
        scanf("%d",&p[i]);

    printf("enter weigth: ");
    for (int i = 0; i < n; i++)
        scanf("%d",&w[i]);

    printf("enter capacity: ");
    scanf("%d",&c);

    for (int i = 0; i < n; i++)
        used[i] = 0;
    val =0;
    while (c>0)
    {
        int maxi = -1;
        for (int i = 0; i < n; i++)
        {
            if (used[i] == 0 && ((maxi == -1) || (((float)p[i]/w[i]) > ((float)p[maxi]/w[maxi]))))
                maxi = i;
        }
        if (maxi == -1)
            break;
        val += (float)p[maxi];
        c -= w[maxi];
        used[maxi] = 1;
        if (c >= 0)
            printf("item %d (%d %d)is completely added. current capacity is %d \n",maxi,p[maxi],w[maxi],c);
        else
        {
            val -= (double)p[maxi];
            val += (1+(float)c/w[maxi])*p[maxi];
            printf("%d%%  of %d is added. current capacity is 0. and value is %.2f",(int)((1+(float)c/w[maxi])*100),maxi,val);
        }
        
    }

   
}