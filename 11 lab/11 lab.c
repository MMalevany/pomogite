	#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i,j;
float max,a[11][11],c[11][11],b[11],d[11],eps,currentVariableValues[11],previousVariableValues[11],error;

int main () {
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            printf("Vvedite a[%d][%d]", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    for(i=1; i<=3; i++)
    {
        printf("Vvedite b[%d]", i);
        scanf("%f", &b[i]);
    }

    printf("Vvedite eps");
    scanf("%f", &eps);

    for(i=1; i<=3; i++) previousVariableValues[i]=0;

    while(1)
    {
        for(i=1; i<=3; i++)
        {
            currentVariableValues[i]=b[i];
            for(j=1; j<=3; j++)
            {
                if(j!=i) currentVariableValues[i]-=a[i][j]*currentVariableValues[j];
            }
            currentVariableValues[i]/=a[i][i];
        }

        error=0;

        for(i=1; i<=3; i++) error+=fabs(currentVariableValues[i]-previousVariableValues[i]);
        if(error<eps) break;
        for(i=1; i<=3; i++) previousVariableValues[i]=currentVariableValues[i];
    }

    for(i=1; i<=3; i++)
    {
        printf("%.5f ", previousVariableValues[i]);
    }

}