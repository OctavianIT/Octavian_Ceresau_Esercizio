#include <stdio.h>


int moltiplicazione (int a, int b)
{
    int c = 0;
    c = a * b; 
    return c; 


}

int main ()
{
    int num1;
    int num2;

    
    printf ("--MOLTIPLICAZIONI--\n");

    printf("\nIserisci il primo numero ");
    scanf("%d", &num1);

    printf ("\nInserisci il secondo numero ");
    scanf ("%d", &num2);

    printf ("\nIl risultato è %d", moltiplicazione(num1,num2));


    return 0;

}