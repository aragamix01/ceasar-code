#include "encode.h"

encode::encode()
{
    //ctor
}

encode::~encode()
{
    delete [] koi;
}

void encode::encoder(int key,string word,char ary[],int length)
{
    ctrl = word.length();
    int i,j,gt;

    setting(word,ary,length);//set for swap

    koi = new char[ctrl];

    for(i=0;i<ctrl;i++)
    {
        for(j=0;j<(*count_letter);j++)
        {
            if(word[i]==alphabet[j])
            {
                    gt = j-key;
                    //Reverse of ceasar encryption
                    while(gt<0)
                    {
                        gt += (*count_letter);
                    }//if gt < 0

                    koi[i]=alphabet[gt];
            }
        }
    }//SEARCH
    koi[ctrl] = '\0';
}

void encode::print()
{
    cout<<koi<<endl;
}

int encode::getkey()
{
    return ceasar;
}

string encode::getccode()
{
    ccode = koi;
    return ccode;
}
