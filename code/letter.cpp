#include "letter.h"

letter::letter()
{
    count_letter = new int ;
    *count_letter = 26;

    alphabet = new char [*count_letter];
    int i=0,base = 97,j=0;

    for(i=0;i<(*count_letter);i++)
    {
        alphabet[i] = (base + j++);
    }


    alphabet[*count_letter]= '\0';
    (*count_letter)--;


    ceasar = 0;
}

letter::~letter()
{
    delete count_letter;
    delete [] alphabet;
}

void letter::generator()
{
    srand(time(NULL));
    ceasar = rand() % 80 + 1;
}

