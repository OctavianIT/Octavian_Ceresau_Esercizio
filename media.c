#include <stdio.h> 

float calcolomedia (int uno, int due)
{
    float media = 0;
    media = (uno + due)/2;
    return media;


}

int main () 
{
    int numero1;
    int numero2;

    printf("\n--MEDIA NUMERO--");

    printf("\nPrimo numero ");
    scanf ("\n%d", &numero1);

    printf ("\nSecondo numero ");
    scanf ("\n%d", &numero2);

    printf ("La media dei due numeri è %.2f", calcolomedia(numero1, numero2));



}