#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<ctime>
#include<algorithm>
#include<limits>
//ALL OF #INCLUDE<>

using namespace std;

#ifndef LETTER_H
#define LETTER_H


class letter
{
    public:
        void generator();
        //For generate key
        letter();
        //constructor for set char to array
        virtual ~letter();
    protected:
        char *alphabet;
        //array of character a-z
        int *count_letter;
        //keep 26 //length of a-z
        int ceasar;
        //Key
};

static string ccode;
//static string ccode for use in every method

#endif // LETTER_H
