#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int temp,hkey,count[21],h_func[10][21],i,answer;

int main () {

    srand(time(0));

    for(i=1; i<=15; i++)
    {
        temp=rand()%100;
        printf("%d ", temp);
        hkey=temp%10;
        count[hkey]++;
        h_func[hkey][count[hkey]]=temp;
    }
    printf("\n");

    for(i=0; i<=4; i++) answer+=count[i];

    printf("%d\n",answer);

    return 0;

}