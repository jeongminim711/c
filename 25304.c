#include <stdio.h>

int main(){
    int m1 = 0;
    int m;
    scanf("%d", &m);
    int a;
    scanf("%d", &a);
    int i;
    for (i = 0; i < a;i+=1)
    {
        int p1, a1;
        scanf("%d %d\n",&p1, &a1);
        m1 += p1 * a1;
    }
    if (m1==m){
        printf("Yes");
    }
    else
    printf("No");
    
}
