#include <stdio.h>
 
int main(void){
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    int n;
    if((v-a)%(a-b)==0){
        n = (v-a)/(a-b)+1;
    }
    else{
        n = (v-a)/(a-b)+2;
    }
    printf("%d\n", n);
}
