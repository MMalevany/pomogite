#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int n,m,i,j,a[101][101],jj,b[101],x,z;

int main () {

    scanf("%d%d", &n, &m);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++) scanf("%d",&a[i][j]);
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++) b[j]=a[i][j];
        for(j=1; j<=m; j++)
        {
            for(jj=j+1; jj<=m; jj++)
            {
                if(b[j]>b[jj])
                {
                    z=b[j];
                    x=b[jj];
                    b[j]=x;
                    b[jj]=z;
                }
            }
        }
        for(j=1; j<=m; j++) a[i][j]=b[j];
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;

}