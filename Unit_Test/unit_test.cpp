#include "HEADERS/unit_test.h"

void Unit_Test::Error_Notice(string Str)
{
    cout<<"Got error at "<<Str<<endl;
}

bool Unit_Test::Blankfile()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test0.txt"))
    {
        Error_Notice("Blankfile_File");
        return true;
    }
    if(Test.Count_Character()!=0)
    {
        Error_Notice("Blankfile_Character");
        return true;
    }
    if(Test.Count_Words()!=0)
    {
        Error_Notice("Blankfile_Words");
        return true;
    }
    if(Test.Count_Line()!=1)
    {
        Error_Notice("Blankfile_Line");
        return true;
    }
    if(Test.Count_Blankline()!=1)
    {
        Error_Notice("Blankfile_Blankline");
        return true;
    }
    if(Test.Count_Commentline()!=0)
    {
        Error_Notice("Blankfile_Commentline");
        return true;
    }
    return false;
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

bool Unit_Test::BlankLines()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test6.txt"))
    {
        Error_Notice("BlankLines_File");
        return true;
    }
    if(Test.Count_Line()!=9)
    {
        Error_Notice("BlankLines_Line");
        return true;
    }
    if(Test.Count_Blankline()!=7)
    {
        Error_Notice("BlankLines_Blankline");
        return true;
    }
    return false;
}

bool Unit_Test::BlankLines2()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test7.txt"))
    {
        Error_Notice("BlankLines2_File");
        return true;
    }
    if(Test.Count_Line()!=8)
    {
        Error_Notice("BlankLine2_Line");
        return true;
    }
    if(Test.Count_Blankline()!=6)
    {
        Error_Notice("BlankLine2_Blankline");
        return true;
    }
    return false;
}

bool Unit_Test::Comments_Line1()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test8.txt"))
    {
        Error_Notice("Comments_Line1_File");
        return true;
    }
    if(Test.Count_Line()!=5)
    {
        Error_Notice("Comments_Line1_Line");
        return true;
    }
    if(Test.Count_Blankline()!=2)
    {
        Error_Notice("Comments_Line1_Blankline");
        return true;
    }
    if(Test.Count_Commentline()!=2)
    {
        Error_Notice("Comments_Line1_Commentline");
        return true;
    }
    return false;
}

bool Unit_Test::Comments_Line2()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test9.txt"))
    {
        Error_Notice("Comments_Line2_File");
        return true;
    }
    if(Test.Count_Line()!=7)
    {
        Error_Notice("Comments_Line2_Line");
        return true;
    }
    if(Test.Count_Blankline()!=1)
    {
        Error_Notice("Comments_Line2_Blankline");
        return true;
    }
    if(Test.Count_Commentline()!=5)
    {
        Error_Notice("Comments_Line2_Commentline");
        return true;
    }
    return false;
}

bool Unit_Test::Comments_Line3()
{
    if(Test.Import_FileLoc("E:\\WordsCount\\Unit_Test\\test10.txt"))
    {
        Error_Notice("Comments_Line3_File");
        return true;
    }
    if(Test.Count_Line()!=10)
    {
        Error_Notice("Comments_Line3_Line");
        return true;
    }
    if(Test.Count_Blankline()!=2)
    {
        Error_Notice("Comments_Line3_Blankline");
        return true;
    }
    if(Test.Count_Commentline()!=8)
    {
        Error_Notice("Comments_Line3_Commentline");
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
    if(BlankLines())
    {
        return true;
    }
    if(BlankLines2())
    {
        return true;
    }
    if(Comments_Line1())
    {
        return true;
    }
    if(Comments_Line2())
    {
        return true;
    }
    if(Comments_Line3())
    {
        return true;
    }
    return false;
}
