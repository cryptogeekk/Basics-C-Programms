#include <stdio.h>
int max(int,int,int,int);

int main() {
    int u,v,w,x;
    scanf("%d %d %d %d", &u, &v, &w, &x);
    int ans = max(u,v,w,x);
    printf("%d", ans);
    
    return 0;
}
int max(int a,int b,int c,int d)
{
  if (a > b && a > c && a >d)
    return a;
    else if  (b > a && b > c && b >d)
    return b;
     else if  (c > a && c > b && c >d)
    return c;
     else  if (d > a && d > c && d >b)
    return d;
    else 
    return 0;
}
