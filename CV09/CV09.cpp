// CV09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "ComplexMath.h";

int main()
{
    struct complex a, b;
    printf("Zadejte realnou slozku 1. bodu: ");
    scanf_s("%lf", &a.real);
    printf("\nZadejte imag slozku 1. bodu: ");
    scanf_s("%lf", &a.imag);
    printf("\nZadejte realnou slozku 2. bodu: ");
    scanf_s("%lf", &b.real);
    printf("\nZadejte imag slozku 2. bodu: ");
    scanf_s("%lf", &b.imag);

    typOperace typ;
    int i;
    printf("\nZadejte ciselne typ operace: scitani=1/odcitani=2/soucin=3 : ");
    scanf_s("%d", &i);

    switch (i)
    {
    case 1:
        typ = soucet;
        break;
    case 2:
        typ = rozdil;
        break;
    case 3:
        typ = soucin;
        break;
    default:
        printf("\nZadali jste neplatne cislo.");
        break;
    }

    operace(a, b, typ);


    formatZobrazeni format;
    format = algebraicky;
    tisk(operace(a, b, typ), format);
    format = geometricky;
    tisk(operace(a, b, typ), format);
    
    

    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
