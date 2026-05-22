#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompting user for card number.
    long number = get_long("Enter card number:\n");

    // Seperating the first two digits for printing different card names accordingly.
    long first_twodigits = number;
    while ( first_twodigits >= 100 )
    {
        first_twodigits /= 10;
    }

    // Seperating each digit for calculations

    int last = number%10;                       // Last digit
    number = number/10;

    int secondlast = number%10;                 // 2nd last digit
    int doubleofsecondlast = secondlast*2;      // Double of 2nd last digit
    int aa = doubleofsecondlast%10;             // One's place digit of the 2nd last number
    int ab = doubleofsecondlast/10;             // Ten's place digit of 2nd last number
    number = number/10;

    int thirdlast = number%10;                  // 3rd last digit
    number = number/10;

    int fourthlast = number%10;                 // 4th last digit
    int doubleoffourthlast = fourthlast*2;      // Double of 4th last digit
    int bb = doubleoffourthlast%10;             // One's digit of the number
    int ba = doubleoffourthlast/10;             // Ten's digit of the number
    number = number/10;

    int fifthlast = number%10;                  // So on....
    number = number/10;

    int sixthlast = number%10;
    int doubleofsixthlast = sixthlast*2;
    int cc = doubleofsixthlast%10;
    int ca = doubleofsixthlast/10;
    number = number/10;

    int seventhlast = number%10;
    number = number/10;

    int eighthlast = number%10;
    int doubleofeighthlast = eighthlast*2;
    int dd = doubleofeighthlast%10;
    int da = doubleofeighthlast/10;
    number = number/10;

    int ninthlast = number%10;
    number = number/10;

    int tenthlast = number%10;
    int doubleoftenthlast = tenthlast*2;
    int ee = doubleoftenthlast%10;
    int ea = doubleoftenthlast/10;
    number = number/10;

    int eleventhlast = number%10;
    number = number/10;

    int twelthlast = number%10;
    int doubleoftwelthlast = twelthlast*2;
    int ff = doubleoftwelthlast%10;
    int fa = doubleoftwelthlast/10;
    number = number/10;

    int thirteenthlast = number%10;
    number = number/10;

    int fourteenthlast = number%10;
    int doubleoffourteenthlast = fourteenthlast*2;
    int gg = doubleoffourteenthlast%10;
    int ga = doubleoffourteenthlast/10;
    number = number/10;

    int fifteenthlast = number%10;
    number = number/10;

    int sixteenthlast = number%10;
    int doubleofsixteenthlast = sixteenthlast*2;
    int hh = doubleofsixteenthlast%10;
    int ha = doubleofsixteenthlast/10;

    // Adding everything according to the Luhn's law.
    int sumofremainings = last + thirdlast + fifthlast + seventhlast + ninthlast + eleventhlast + thirteenthlast + fifteenthlast;
    int sumofdoubles = aa+ab+bb+ba+cc+ca+dd+da+ee+ea+ff+fa+gg+ga+hh+ha;

    int sumoftotal = sumofremainings + sumofdoubles;
    int x = sumoftotal%10;                             // Checking Luhn's law, wether the sum is divisble by 10 or not.
    if ( x == 0 )
    {
        switch(first_twodigits)
   {
        case 37:
        {
            printf("AMERICAN EXPRESS\n");
        }
        break;
        case 30:
        {
            printf("DINERS CLUB\n");
        }
        break;
        case 60:
        {
            printf("DISCOVER\n");
        }
        break;
        case 35:
        {
            printf("JCB\n");
        }
        break;
        case 22:
        {
            printf("MASTERCARD\n");
        }
        break;
        case 55:
        {
            printf("MASTERCARD\n");
        }
        break;
        case 51:
        {
            printf("MASTERCARD\n");
        }
        break;
        case 40:
        {
            printf("VISA\n");
        }
        break;
         case 41:
        {
            printf("VISA\n");
        }
        break;
         case 42:
        {
            printf("VISA\n");
        }
    }
  }
    else
    {
        printf("INVALID\n");
    }

}
