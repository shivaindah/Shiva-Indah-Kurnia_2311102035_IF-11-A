#include <stdio.h>
#include <conio.h>
#include <string.h>

char balik(char x[50]);
char cek(char y[50], char z[50]);

int main()
{
    char m[50], o[50];
    printf("Masukan Kata Telkom Purwokerto\n");
    printf("Data Stack Array: ");
    gets(m);
    strcpy(o,m);
    balik(o);
    getch();
}

char balik(char x[50])
{
    strrev(x);
    printf("Data: %s", x);
}