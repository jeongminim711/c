#include <stdio.h>

int main(){
    int a;
    int n = 0;
    scanf("%d", &a);
    int i;
    for (i = 1;i<=a;i++){
        n+=i;
    }
    printf("%d", n);
}
