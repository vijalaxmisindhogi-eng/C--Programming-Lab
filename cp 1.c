#include <stdio.h>


int main()
{
    int a,b;

    printf("enter two integers: ");
    scanf("%d %d", &a,&b);
    printf("sum=%d\n",a+b);
    printf("difference=%d\n",a-b);
    printf("product=%d\n",a*b);
    if (b != 0)
    {


    printf("qnotiet=%d\n",a/b);
    printf("remaider=%d\n",a%b);
    }
     else
    {
        printf("division and remaider are not possible becase diviser is zero.\
               n");

    }

    return 0;
}
