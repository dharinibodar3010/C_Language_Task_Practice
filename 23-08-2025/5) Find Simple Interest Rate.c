#include <stdio.h>
#include <conio.h>

int main()
{
    //find simple interest = P*R*N/100
    
    int P = 50000;
    float R = 6.5;
    int N = 8;
    
    float SI = P*R*N/100;
    
    printf("\n simple interest %f", SI);
    
    float ans = P + SI;
    
    printf("\n final amount : %f", ans);
    
    return 0;
}
