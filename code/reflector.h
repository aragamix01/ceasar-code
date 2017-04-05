//#include<iostream>
//using namespace std;
#include "letter.h"

#ifndef REFLECTOR_H
#define REFLECTOR_H


class reflector : protected letter
{
    public:
        void setting(string&,char [],int);
        void reflex(string&,char ,char);
        //swap char
        reflector();
        virtual ~reflector();
};

#endif // REFLECTOR_H
