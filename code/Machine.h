#include"encode.h"
#include"encryption.h"

#ifndef MACHINE_H
#define MACHINE_H

int input();
string wordinput();

class Machine
{
    public:
        void setoutdata(encode);
        void setindata(encryption);
        void setdata(encryption,encode);
        //input&output method
        void process();
        //Machine process
        Machine(encryption,encode);
        Machine();
        //constructor
        virtual ~Machine();
    protected:
        ofstream myfile;
        ifstream ufile;
        //FILE
        encode *outdata;
        encryption *indata;
        //composition obj
        char *setc;
        //keep char for swap
        int longi;
};

#endif // MACHINE_H

//NOTE upper to lower!!!!!!!
