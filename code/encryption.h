#include "reflector.h"

#ifndef ENCRYPTION_H
#define ENCRYPTION_H


class encryption : protected reflector
{
    public:
        int getkey();
        //return key
        string getcode();
        //return code
        void print();
        //print
        void encryptor(char[],int);
        //for transform can-read string to cant-read string
        //algorithm : 1.receive string form encryption::setstring()
        //*           2.call method reflex to swap character
        //*           3.generate() key
        //*           4.search char in string
        //*           5.if found character+key
        //*           6.keep in keeper
        void setstring(string);
        //input: string
        //call method encryptor()
        encryption(string);
        encryption();
        //constructor
        virtual ~encryption();
    protected:
        char *keeper;
        //for receive code
        string word;
        //for receive word
};

#endif // ENCRYPTION_H
