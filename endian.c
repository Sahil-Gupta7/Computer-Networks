/*#include <stdio.h>

void print(char *val, int n)
{
    printf("Little Endian\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2x, ", val[i]);
    }

    printf("\n\nBig Endian\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%.2x, ", val[i]);
    }
}
int main()
{
    int i = 1504;

    char *p = (char *)&i;
    if (*p == 1)
    {
        printf("\nYour host machine is Little Endian\n\n");
    }
    else
    {
        printf("\nYour host machine is Big Endian\n\n");
    }

    print((char *)&i, sizeof(i));
    return 0;
}*/
#include<stdio.h>

void printing(unsigned char *val,int n){
    int k;
    for(k=0;k<n;k++){
        printf("%.2x  ",val[k]);
    }
    if(val[0]=44){
        printf("\nLittle Endian");
    }
    else
        printf("\nBig Endian");
    
    printf("\n");
    printf("\nLittle Endian\n");
    for(k=0;k<n;k++){
        printf("%.2x  ",val[k]);
    }
    printf("\nBig Endian\n");
    for(k=n-1;k>-1;k--){
        printf("%.2x  ",val[k]);
    }
}

int main()
{
    int i=1504;
    printing((unsigned char*)&i,sizeof(i));  
    return(0);
}