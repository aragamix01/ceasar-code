#include "reflector.h"
#include "encryption.h"

reflector::reflector()
{
    //ctor
}

reflector::~reflector()
{
    //dtor
}

void reflector::setting(string &nor,char ary[],int length)
{
    int i;

    for(i=0;i<length;i++)
    {
        if(i%2==0)
        {
            reflex(nor,ary[i],ary[i+1]);
        }
    }
}

void reflector::reflex(string &nor,char be,char af)
{
    int i,j;

    int ctrl = nor.length();

    for(i=0;i<ctrl;i++)
    {
        for(j=i;j<ctrl;j++)
        {
            if(nor[i]==be)
            {
                nor[i] = af;
                break;
            }else if(nor[i]==af){
                nor[i] = be;
                break;
            }
        }
    }
}

