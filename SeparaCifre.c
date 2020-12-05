#include <stdio.h>
#include <stdlib.h>
#define MAX 100000 //Definisce il numero massimo inseribile in input
#define N 6        //Definisce il numero massimo di cifre in un numero
int main()
{
    int v[N], num, i, cifre;    //Dichiarazione Variabili (cifre/i sono contatori)
    num = MAX + 1;              //num è uguale a MAX + 1 (così entra nel ciclo do while)
    cifre = 6;                  //cifre è uguale a 6
    do{
        printf("Inserire un numero che sia maggiore o uguale a 0 e minore di 100000");  //Stamoa questa frase
        printf("\n");       //Va a capo
        scanf("%d",&num);   //Chiede all'utente un input per la variabile num
    }while(num < 0 || num > MAX);       //Il ciclo continua se num è minore di 0 o se num è maggiore di MAX

    for(i = 0; i < cifre; i++){     //Ciclo for che stabilisce le seguenti istruzioni:  i è uguale a 0; il ciclo continuerà se i è minore di cifre; incrementa i di 1
        v[i] = num % 10;        //Viene assegnata alla variabile v[i] il valore del resto della divisione tra num e 10
        num = num / 10;         //la variabile num viene divisa per 10
    }

    do{ //Ciclo do che rimuove che fa in modo che le cifre non significative vengono ignorate nell'output
        cifre = cifre - 1;      //decrementa la variabile cifre
    }while(v[cifre] == 0);      //Il ciclo continua se v[cifre] è uguale a 0 

    for(i = cifre; i >= 0; i--){    //Ciclo for che stabilisce le seguenti istruzioni:  i è uguale a cifre; il ciclo continuerà se i è maggiore o uguale a 0; decrementa i di 1 
        printf("%d",v[i]);          //stampa la variabile v[i]
        printf("\n");               //Va a capo
    }
    return 0;       //Fine 
}
