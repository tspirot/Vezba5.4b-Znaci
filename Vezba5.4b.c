// Vezba5.4b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// PREBROJAVANJE ZNAKOVA
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	char tekst[81];
	puts("Unesite tekst:");
	gets(tekst);
	int vel=0, mal=0, cif=0;
	int duz = strlen(tekst);
	for (int i = 0; i < duz; i++)
	{
		//if (tekst[i]>='A' && tekst[i] <= 'Z')
		if (isupper(tekst[i]))
			vel++;
		else if (islower(tekst[i]))
			mal++;
		else if (isdigit(tekst[i]))
			cif++;
	}
	printf("Velikih slova: %d\n", vel);
	printf("Malih slova: %d\n", mal);
	printf("Cifara: %d\n", cif);
}
