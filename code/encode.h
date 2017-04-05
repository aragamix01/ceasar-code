#include "reflector.h"

#ifndef ENCODE_H
#define ENCODE_H


class encode : protected reflector
{
    public:
        string getccode();
        //return code
        void print();
        //print
        int getkey();
        //return key
        void encoder(int,string,char[],int);
        //for transform
        //input: code
        //output: word
        //algorithm: reverse of encryption process
        encode();
        //construction
        virtual ~encode();
    protected:
        char *koi;
        //char array to keep output
        int ctrl;
        //for get code.length()
};

#endif // ENCODE_H
