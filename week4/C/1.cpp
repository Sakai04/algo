#include <bits/stdc++.h>

void main(){
    float sum0 = 0;
    float avg0 = 0;
    float var0 = 0;
    float sd0 = 0;

    for(int i = 1; i <= 10; i++)
    {
        sum0 += i;

    }
    printf("sum : %f\n",sum0);
    avg0 = sum0/10;
    printf("avg : %f\n", avg0);

    float sum1 = 0;
    for(int i = 1; i <= 10; i++)
    {
        sum1 += pow((i - avg0),2);

    }
    var0 = sum1/(10-1);
    sd0 = sqrt(var0);
    printf("var0: %f \n", var0);
    printf("sd0 : 5f \n", sd0);

}