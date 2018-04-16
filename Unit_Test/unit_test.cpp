#include "HEADERS/unit_test.h"

void Unit_Test::Error_Notice(string Str)
{
    cout<<"Got error at "<<Str<<endl;
}

bool Unit_Test::Lowercase_Uppercase()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test1.txt"))
    {
        Error_Notice("Lowercase_Uppercase_File");
        return true;
    }
    if(Test.Count_Character()!=52)
    {
        Error_Notice("Lowercase_Uppercase_Character");
        return true;
    }
    if(Test.Count_Words()!=1)
    {
        Error_Notice("Lowercase_Uppercase_Words");
        return true;
    }
    return false;
}

bool Unit_Test::Space_Lowercase()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test2.txt"))
    {
        Error_Notice("Space_Lowercase_File");
        return true;
    }
    if(Test.Count_Character()!=61)
    {
        Error_Notice("Space_Lowercase_Character");
        return true;
    }
    if(Test.Count_Words()!=11)
    {
        Error_Notice("Space_Lowercase_Words");
        return true;
    }
    return false;
}

bool Unit_Test::Space_Uppercase()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test3.txt"))
    {
        Error_Notice("Space_Uppercase_File");
        return true;
    }
    if(Test.Count_Character()!=61)
    {
        Error_Notice("Space_Uppercase_Character");
        return true;
    }
    if(Test.Count_Words()!=11)
    {
        Error_Notice("Space_Uppercase_Words");
        return true;
    }
    return false;
}

bool Unit_Test::Punctions_Numbers()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test4.txt"))
    {
        Error_Notice("Punctions_Numbers_File");
        return true;
    }
    if(Test.Count_Character()!=104)
    {
        Error_Notice("Punctions_Numbers_Character");
        return true;
    }
    if(Test.Count_Words()!=11)
    {
        Error_Notice("Punctions_Numbers_Words");
        return true;
    }
    return false;
}

bool Unit_Test::Punctions_Numbers2()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test5.txt"))
    {
        Error_Notice("Punctions_Numbers_File");
        return true;
    }
    if(Test.Count_Character()!=99)
    {
        Error_Notice("Punctions_Numbers_Character");
        return true;
    }
    if(Test.Count_Words()!=10)
    {
        Error_Notice("Punctions_Numbers_Words");
        return true;
    }
    return false;
}

bool Unit_Test::Start_Test()
{
    if(Lowercase_Uppercase())
    {
        return true;
    }
    if(Space_Lowercase())
    {
        return true;
    }
    if(Space_Uppercase())
    {
        return true;
    }
    if(Punctions_Numbers())
    {
        return true;
    }
    if(Punctions_Numbers2())
    {
       return true;
    }
    return false;
}
