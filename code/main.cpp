#include "letter.h"
#include "encryption.h"
#include "encode.h"
#include "Machine.h"
#include "reflector.h"
#include <iostream>

using namespace std;

int main()
{

    Machine ccode;
    cout<<"#####  #####    #    #####    #    ####     "<<endl;
    cout<<"#      #       # #   #       # #   #   #    "<<endl;
    cout<<"#      #####  #   #  #####  #   #  ####     "<<endl;
    cout<<"#      #      #####      #  #####  #   #    "<<endl;
    cout<<"#####  #####  #   #  #####  #   #  #   #    "<<endl<<endl;

    system("PAUSE");
    ccode.process();

    return 0;
}
