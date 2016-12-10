
#include <stdio.h>

int main()
{
    int i,j;
    int data[2][2];
    data[1][1]=0;
    i = 2;
    freopen("input.txt","r",stdin);
    scanf("%d\n",&i);
    scanf("%d\n",&j);
    printf("i=%d,j=%d",i,j);
    printf("hello world\n");
    i = 3;
    printf("hello world2\n");
    printf("hello world3\n");
    printf("hello world4\n");
    while(1);
    return 0;
}
