#include <cs50.h>
#include <stdio.h>

//
int digitSum(int product);
//



// User prompt for card number
int main (void)
{

    long long x = 0;
    x = get_long("Number: ");

    if (x < 4000000000000 || x>5599999999999999)
    {
        printf("INVALID\n");
        return 0;
    }
    // VARIABLES

    int firstToLast = x % 10;                                                  // ostatnia cyfra
    int secondToLast = (x / 10) % 10;                                          // long secondToLast = ((x % 100)-(x % 10))/10;
    int thirdToLast = (((x % 1000)-(10 * secondToLast)- firstToLast) / 100);
    int forthToLast = (x / 1000) % 10;
    int fifthToLast = (x / 10000) % 10;
    int sixthToLast = (x / 100000) % 10;
    int seventhToLast = (x / 1000000) % 10;
    int eightToLast = (x / 10000000) % 10;
    int ninethToLast = (x / 100000000) % 10;
    int tenthToLast = (x / 1000000000) % 10;
    int elevToLast = (x / 10000000000) % 10;
    int twelveToLast = (x / 100000000000) % 10;
    int thirtninthToLast = (x / 1000000000000) % 10;
    int fourtheenToLast = (x / 10000000000000) % 10;
    int fifteenToLast = (x / 100000000000000) % 10;
    int sixteenToLast = (x / 1000000000000000) % 10;
    //VARIABLES


    //VARIABLES V2
    int s16 = digitSum(sixteenToLast);
    int s14 = digitSum(fourtheenToLast);
    int s12 = digitSum(twelveToLast);
    int s10 = digitSum(tenthToLast);
    int s8 = digitSum(eightToLast);
    int s6 = digitSum(sixthToLast);
    int s4 = digitSum(forthToLast);
    int s2 = digitSum(secondToLast);
    //VARIABLES V2

    //VARIABLES V3 SUM
    int suma14to2 = (s16 + s14 + s12 + s10 + s8 + s6 + s4 + s2);
    int sumaReszta = (fifteenToLast + thirtninthToLast + elevToLast + ninethToLast + seventhToLast + fifthToLast + thirdToLast + firstToLast);
    int sumaRAZEM = (suma14to2 + sumaReszta);
    //VARIABLES V3 SUM

    //USER INPUT

    //USER INPUT

    //CARDTYPE CHECK
    if ((x >= 340000000000000 && x <= 349999999999999) || (x >= 370000000000000 && x <= 379999999999999))
    //AmericanExpress
    {
        if (sumaRAZEM % 10 == 0)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (x >= 5100000000000000 && x <= 5599999999999999)
    //MasterCard
    {
        if (sumaRAZEM % 10 == 0)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
     }
     else if ((x >= 4000000000000 && x <= 4999999999999) || (x >= 4000000000000000 && x <= 4999999999999999))
     //VISA
     {
        if (sumaRAZEM % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
     }
     else
     {
        printf("INVALID\n");
     }
}

//FUNKCJA
// liczy 2 * cyfra na miejscu product (na przykład fourtheenToLast)
int digitSum(int product)
{

 if ((product * 2) >= 10)
    {
       return ((product * 2) % 10) + 1;                   // warunek if polega na tym że jeśli iloczyn jest wiekszy od 10 to sumuje cyfry, a jesli nie jest to po prostu <10 to podaje wartość
    }
    else
    {
        return (product * 2);                        // zrobić to samo dla reszty
    }
}
//FUNKCJA
