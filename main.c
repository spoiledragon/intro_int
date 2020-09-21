#include <stdio.h>

int main()
{
    //printf("Hola mundito \n ");
    char algo[100];
    unsigned int edad;

    printf("inserta tu name\n");
    fgets(algo,sizeof(algo),stdin);
    printf("Hola %s",algo);
    printf("Inserta tu edad \n");
    scanf("%u",&edad);
    printf("vas a cumplir %u", edad+1);

    return 0;
}