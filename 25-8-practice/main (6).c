/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //sum of 5 subjects and percentage
    
    int s1 = 90;
    int s2 = 85;
    int s3 = 78;
    int s4 = 80;
    int s5 = 91;
    
    int sub = s1+s2+s3+s4+s5;
    
    printf("\n total 5 subjects mark : %d", sub);
    
    float ans = sub*100/500;
    
    printf("\n percentage : %.2f%%",ans);

    return 0;
}