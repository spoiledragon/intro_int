#include <stdio.h>

int main()
{
    printf("Hola mundito \n ");
    char algo[100];
    printf("inserta tu name\n");
    fgets(algo,sizeof(algo),stdin);
    printf("Hola %s",algo);

    return 0;
}