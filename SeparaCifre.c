#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
#define N 6
int main()
{
    int v[N], num, i, cifre;
    num = MAX + 1;
    cifre = 6;
    do{
        printf("Inserire un numero che sia maggiore o uguale a 0 e minore di 100000");
        printf("\n");
        scanf("%d",&num);
    }while(num < 0 || num > MAX);

    for(i = 0; i < cifre; i++){
        v[i] = num % 10;
        num = num / 10;
    }

    do{
        cifre = cifre - 1;
    }while(v[cifre] == 0);

    for(i = cifre; i >= 0; i--){
        printf("%d",v[i]);
        printf("\n");
    }
    return 0;
}
