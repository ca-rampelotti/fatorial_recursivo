long int factorial(long int x)
{
    int fat = 1;
    if (x == 1){
        return fat;
    }
    else{
        fat = factorial(x-1) * x;
    }
}
#include <stdio.h>
int main(void)
{
    int x, fat;
    printf ("Entre com o valor do fatorial que deseja: ");
    scanf("%d", &x);
    fat = factorial(x);
    printf("O fatorial de %d: %d", x, fat);
    return 0;
}