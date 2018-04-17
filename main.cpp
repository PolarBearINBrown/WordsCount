#include "iostream"
using namespace std;

#include "HEADERS/counting.h"
#include "HEADERS/unit_test.h"

int main()
{
    Unit_Test Test;
    Test.Start_Test();
    string Command;
    Counting WC;
    while(true)
    {
        cout<<"Please offer your command and file location:"<<endl;
        cin>>Command;
        if(Command=="c")
        {
            if(WC.Get_FileLoc())
            {
                cout<<"Error at file location"<<endl;
                continue;
            }
            cout<<WC.Count_Character()<<endl;
        }
        else if(Command=="w")
        {
            if(WC.Get_FileLoc())
            {
                cout<<"Error at file location"<<endl;
                continue;
            }
            cout<<WC.Count_Words()<<endl;
        }
        else if(Command=="l")
        {
            if(WC.Get_FileLoc())
            {
                cout<<"Error at file location"<<endl;
                continue;
            }
            cout<<WC.Count_Line()<<endl;
        }
        else if(Command=="b")
        {
            if(WC.Get_FileLoc())
            {
                cout<<"Error at file location"<<endl;
                continue;
            }
            cout<<WC.Count_Blankline()<<endl;
        }
        else if(Command=="C")
        {
            if(WC.Get_FileLoc())
            {
                cout<<"Error at file location"<<endl;
                continue;
            }
            cout<<WC.Count_Commentline()<<endl;
        }
        else
        {
            cout<<"Error at command"<<endl;
        }
    }
    return 0;
}

/*
#include "HEADERS\dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}
*/
