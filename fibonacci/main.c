#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n){

    int first=0;
    int second=1;
    int next;
    int i;
    for(i=0;i<n;i++)
    {
        if (i<=1)
        {
            next=i;
        }
        else
        {
            next=first+second;
            first=second;
            second=next;


        }printf("%d\n",next);
    }


}
int main()
{
    int number;
    printf("Choose a Number for Fibonacci:");
    scanf("%d",&number);
    fibonacci(number);
    return 0;
}
