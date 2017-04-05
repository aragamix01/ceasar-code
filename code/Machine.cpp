#include "Machine.h"

Machine::Machine()
{
    myfile.open("History.txt",ios::app);
    indata = new encryption;
    outdata = new encode;

    longi = 4;
    setc = new char[longi]{'a','x','l','n'};
    //setting swap (a to x , l to n) as default
}

Machine::~Machine()
{
    delete indata;
    delete outdata;
}

Machine::Machine(encryption in,encode out)
{
    indata = new encryption;
    outdata = new encode;

    *indata = in;
    *outdata = out;
}

void Machine::process()
{
    int menu,key;
    string word1,word2;
    time_t now;
    struct tm * timeinfo;

    time(&now);
    cout<<ctime(&now)<<endl;

    myfile<<endl<<endl;
    myfile<<"#############################################"<<endl;
    myfile<<"               History File"<<endl;
    myfile<<"  Time&Date : "<<ctime(&now)<<endl;
    myfile<<"#############################################"<<endl;

    do{
    system("CLS");
    cout<<"###############################"<<endl;
    cout<<"######## CCODE MACHINE ########"<<endl;
    cout<<"###############################"<<endl;
    cout<<"+++++++++++++++++++++++++++++++"<<endl;
    cout<<"++ 1.Encryption              ++"<<endl;
    cout<<"++ 2.Decryption              ++"<<endl;
    cout<<"++ 3.History                 ++"<<endl;
    cout<<"++ 4.Setting                 ++"<<endl;
    cout<<"++ 5.Exit                    ++"<<endl;
    cout<<"+++++++++++++++++++++++++++++++"<<endl;
    cout<<"+++++++++++++++++++++++++++++++"<<endl;
    cout<<"Select:  ";

    menu = input();

    if(menu == 1)
    {
        int i;

        myfile << "<=========[Encryption]=========>"<<endl;
        cout<<"Enter word : ";
        word1 = wordinput();

        if((word1.compare("")))
        {
            for(i=0;i<word1.length();i++)
            {
                word1[i]=tolower(word1[i]);
            }//to lower case

            myfile << "word is : "<< word1 <<endl;

            indata->setstring(word1);
            indata->encryptor(setc,longi);

            cout<<"ccode : "<< indata->getcode()<<endl;
            myfile << "ccode is : "<< indata->getcode()<<endl;

            cout<<"Key is: "<<indata->getkey()<<endl;
            myfile << "key is : "<< indata->getkey()<<endl;

        }//hold input only char not int
        else{
            myfile << "<= Invalid Input: Stop Process =>" <<endl;
            myfile << "<===============================>"<<endl;
        }
        system("PAUSE");
    }

    if(menu == 2)
    {
        myfile << "<=========[Decryption]=========>"<<endl;
        cout<<"Enter code : ";
        word2 = wordinput();

        if((word2.compare(""))){

            myfile << "ccode is :" << word2<<endl;

            cout<<"Enter key : ";
            key = input();
            //key = indata->getkey();
            if(key != -1){
                myfile << "key is : " << key <<endl;

                outdata->encoder(key,word2,setc,longi);
                cout<<"Word is : "<<outdata->getccode()<<endl;
                myfile << "word is : "<<outdata->getccode()<<endl;
            }
        }
        else{
                myfile << "<= Invalid Input: Stop Process =>" <<endl;
                myfile << "<===============================>"<<endl;
        }

        if(key != -1){
            system("PAUSE");
        }
    }
    if(menu == 3)
    {
            string line;
            ufile.open("History.txt");
            while ( getline (ufile,line) )
            {
                cout << line << '\n';
            }
            ufile.close();
            //Read File
    system("PAUSE");
    }
    if(menu == 4)
    {
        int twin;

        if(setc != NULL)
        {
            delete [] setc;
        }

        cout<<"Enter twin char for swap : ";
        twin=input();
        setc = new char[twin*2];

        cout<<"Enter char <example[a x]>"<<endl;
        for(int i=0;i<(twin*2);i++)
        {
            cin>>setc;
        }
    }

    }while(menu!=5);
    myfile << "<==============================>"<<endl;
    myfile.close();
}

void Machine::setdata(encryption in ,encode out)
{
    *indata = in;
    *outdata = out;
}

void Machine::setindata(encryption in)
{
    *indata = in;
}

int input()
{

    int rest;

    if(cin>>rest)
    {
        return rest;
    }
    else{
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Try again."<<endl;
        system("PAUSE");
        return -1;
    }
}//Exception Handling

string wordinput()
{
    string word;
    char c;

    cin>>word;

    for(int i=0;i<word.length();i++)
    {
        c = word[i];

            if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')))
            {
                cout<<"plz enter only character or string."<<endl;
                return "";
            }
    }

    return word;
}//Holding Input Only Character or String

