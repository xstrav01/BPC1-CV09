#include "ComplexMath.h";
#include "pch.h"
#include <iostream>

struct complex
{
    double real = 0;
    double imag = 0;
};

void tisk(struct complex a, enum formatZobrazeni format)
{
    
    switch (format)
    {
    case 0:
        printf("\nAlgebraicky tvar je: %lf + %lfi", a.real, a.imag);
        break;
    case 1:
        printf("\nGoniometricky tvar je: %lf + %lfi", a.real, a.imag);
        break;
    default:
        break;
    }
}

struct complex operace(struct complex a, struct complex b, enum typOperace typ)
{
    double zalohaA = a.real;
    switch (typ)
    {
    case 1:
        a.real = a.real + b.real;
        a.imag = a.imag + b.imag;
        break;
    case 2:
        a.real = a.real - b.real;
        a.imag = a.imag - b.imag;
        break;
    case 3:
        
        a.real = a.real*b.real - a.imag*b.imag;
        a.imag = zalohaA * b.imag + a.imag*b.real;
        break;
    default:
        break;
    }
    return a;
}