#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Identifier for the number of the Credit Card.
    long cc;
    // Identifier for the numbers of the Credit Card starting from left to right.
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    // Identifier for the product's digits of every other Credit Card number.
    int aa, aaa, ccc, cccc, ee, eee, gg, ggg, ii, iii, kk, kkk, mm, mmm, oo, ooo;
    // Identifier for the first 2 digits of the Credit Card.
    long amex, master, visa, visaa;

    // Credit Card entry point.
    cc = get_long("What is the credit card number?\n");

    // These lines of integars are used to idnetify the numbers of the Credit Card.
    p = (cc % 10 / 1);
    o = (cc % 100 / 10);
    n = (cc % 1000 / 100);
    m = (cc % 10000 / 1000);
    l = (cc % 100000 / 10000);
    k = (cc % 1000000 / 100000);
    j = (cc % 10000000 / 1000000);
    i = (cc % 100000000 / 10000000);
    h = (cc % 1000000000 / 100000000);
    g = (cc % 10000000000 / 1000000000);
    f = (cc % 100000000000 / 10000000000);
    e = (cc % 1000000000000 / 100000000000);
    d = (cc % 10000000000000 / 1000000000000);
    c = (cc % 100000000000000 / 10000000000000);
    b = (cc % 1000000000000000 / 100000000000000);
    a = (cc % 10000000000000000 / 1000000000000000);

    // These lines will be used to get the product digit of every other number.
    aa = (a * 2 % 10);
    aaa = (a * 2 % 100 / 10);
    ccc = (c * 2 % 10);
    cccc = (c * 2 % 100 / 10);
    ee = (e * 2 % 10);
    eee = (e * 2 % 100 / 10);
    gg = (g * 2 % 10);
    ggg = (g * 2 % 100 / 10);
    ii = (i * 2 % 10);
    iii = (i * 2 % 100 / 10);
    kk = (k * 2 % 10);
    kkk = (k * 2 % 100 / 10);
    mm = (m * 2 % 10);
    mmm = (m * 2 % 100 / 10);
    oo = (o * 2 % 10);
    ooo = (o * 2 % 100 / 10);

    // This line is used to calculate the sum of the numbers to verify if the CC is valid.
    int q = (aa + aaa + b + ccc + cccc + d + ee + eee + f + gg + ggg + h + ii + iii + j + kk + kkk + l + mm + mmm + n + oo + ooo + p);


    // Method to calculate the first 2 digits in the credit card.
    amex = (cc / 10000000000000);
    master = (cc / 100000000000000);
    visa = (cc / 1000000000000);
    visaa = (cc / 1000000000000000);

    // This line is used to determine if your CC is invalid or not.
    if (q % 10 > 0)
    {
        printf("INVALID\n");
    }
    // Second line that would determine any input for the CC to be invalid if it was under 12 digits.
    else if (cc / 100000000000 < 1)
    {
        printf("INVALID\n");
    }
    
    // Command line to determine whether the inserted value of CC is that of an AMEX card or not.
    else if (cc / 100000000000000 == 3)
    {
        if (amex != 34 && amex != 37)
        {
            printf("INVALID\n");

        }
        else
        {
            printf("AMEX\n");

        }

    }
    // Command line to determine whether the inserted value of CC is that of a 13 digits VISA card or not.
    else if (cc / 1000000000000 == 4)

    {
        if (visa != 4)
        {
            printf("INVALID\n");
        }
        else
        {
            printf("VISA\n");
        }

    }
    // Command line to determine whether the inserted value of CC is that of a 16 digits VISA card or not.
    else if (cc / 1000000000000000 == 4)
    {
        if (visaa != 4)
        {
            printf("INVALID\n");
        }
        else
        {
            printf("VISA\n");
        }
    }
    // Command line to determine whether the inserted value of CC is that of an MASTERCARD card or not.
    else if (cc / 1000000000000000 == 5)
    {
        if (master != 51 && master != 52 && master != 53 && master != 54 && master != 55)
        {
            
            printf("INVALID\n");
        }
        
        else
        {
            printf("MASTERCARD\n");
        }
    }

}
