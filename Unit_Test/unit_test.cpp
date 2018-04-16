#include "HEADERS/unit_test.h"

void Unit_Test::Error_Notice(string Str)
{
    cout<<"错误出现在："<<Str<<endl;
}

void Unit_Test::Lowercase_Uppercase()
{
    if(!Test.Import_FileLoc("test1.txt"))
    {
        Error_Notice("Lowercase_Uppercase_File");
    }
    if(Test.Count_Character()!=52)
    {
        Error_Notice("Lowercase_Uppercase_Character");
    }
    if(Test.Count_Words()!=1)
    {
        Error_Notice("Lowercase_Uppercase_Words");
    }
}

void Unit_Test::Space_Lowercase()
{
    if(!Test.Import_FileLoc("test2.txt"))
    {
        Error_Notice("Space_Lowercase_File");
    }
    if(Test.Count_Character()!=60)
    {
        Error_Notice("Space_Lowercase_Character");
    }
    if(Test.Count_Words()!=11)
    {
        Error_Notice("Space_Lowercase_Words");
    }
}

void Unit_Test::Space_Uppercase()
{
    if(!Test.Import_FileLoc("test3.txt"))
    {
        Error_Notice("Space_Uppercase_File");
    }
    if(Test.Count_Character()!=60)
    {
        Error_Notice("Space_Uppercase_Character");
    }
    if(Test.Count_Words()!=11)
    {
        Error_Notice("Space_Uppercase_Words");
    }
}

void Unit_Test::Punctions_Numbers()
{
    if(!Test.Import_FileLoc("test4.txt"))
    {
        Error_Notice("Punctions_Numbers_File");
    }
    if(Test.Count_Character()!=104)
    {
        Error_Notice("Punctions_Numbers_Character");
    }
    if(Test.Count_Words()!=11)
    {
        Error_Notice("Punctions_Numbers_Words");
    }
}

void Unit_Test::Punctions_Numbers2()
{
    if(!Test.Import_FileLoc("test5.txt"))
    {
        Error_Notice("Punctions_Numbers_File");
    }
    if(Test.Count_Character()!=99)
    {
        Error_Notice("Punctions_Numbers_Character");
    }
    if(Test.Count_Words()!=10)
    {
        Error_Notice("Punctions_Numbers_Words");
    }
}

void Unit_Test::Start_Test()
{
    Lowercase_Uppercase();
    Space_Lowercase();
    Space_Uppercase();
    Punctions_Numbers();
    Punctions_Numbers2();
}
