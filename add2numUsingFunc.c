#include <stdio.h>
int sum(int,int);

int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum=%d",c);

}

int sum(int a, int b)
{
    return a+b;
}