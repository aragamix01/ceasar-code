#include "encryption.h"

encryption::encryption()
{
    //ctor
}

encryption::encryption(string w)
{
    word = w;
}

encryption::~encryption()
{
  //  emp
}

void encryption::setstring(string w)
{
    word = w;
}

void encryption::encryptor(char ary[],int length)
{
    int nlet,i,j,gt;

    nlet = word.length();

    keeper = new char[nlet];

    generator();
    //ceasar = 13;
    for(i=0;i<nlet;i++)
    {
        for(j=0;j<(*count_letter);j++)
        {
            if(word[i]==alphabet[j])
            {
                gt = j+ceasar;
                //* Ceasar Encryption

                while(gt>=(*count_letter))
                {
                    gt-=(*count_letter);
                }//While gt > 26
                //========================
                keeper[i] = alphabet[gt];
                //========================code
            }
        }//SEARCH LETTER
    }
    keeper[nlet] = '\0';//cut string
    ccode = keeper;

    setting(ccode,ary,length); //set for swap
}

void encryption::print()
{
    cout<<"ccode : "<<ccode;
}

int encryption::getkey()
{
    return ceasar;
}

string encryption::getcode()
{
    return ccode;
}
