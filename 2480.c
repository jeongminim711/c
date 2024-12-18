#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b== c)
        printf("%d\n", a*1000 + 10000);
    else if (a == b && b!= c)
        printf("%d\n", 1000+100*a);
    else if (a == c && c!=b)
        printf("%d\n", 1000+100*a);
    else if (a != b && b == c)
        printf("%d\n", 1000+100*b);
   
    else if (a != b && b != c && a > b && a > c)
        printf("%d\n", a*100);
    else if (a != b && b != c && b > a && b > c)
        printf("%d\n", b*100);
    else if (a != b && b != c && c > b && c > a)
        printf("%d\n", c*100);
    return 0;
    
}
