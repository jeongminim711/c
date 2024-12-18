#include <stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    int i=1;
    for(;i<10;i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
    }
    return 0;
}
