#include <stdio.h>

void insertNum (int a, int b, int c);
void printCalc (int a, int b, int c);

int main(int argc, const char* argv[])
{
    int a;
    int b;
    int c;

    insertNum(a, b, c);
    printCalc(a, b, c);






    return 0;
}

void insertNum (int a, int b, int c)
{
    puts("inserisci il primo numero: ");
    scanf("%d", &a);

    puts("inserisci il secondo numero: ");
    scanf("%d", &b);

    puts("inserisci il terzo numero: ");
    scanf("%d", &c);

    return;
}

void printCalc (int a, int b, int c)
{
    int x = 0;
    int y = 0;
    int z = 0;

    puts("eseguo i calcoli");

    x = a - b;
    y = a - b + c;
    z = a - b + c +c;

    printf("%d, %d, %d", x, y, z);

    return;
}
