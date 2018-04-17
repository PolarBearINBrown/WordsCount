#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include "iostream"
#include "HEADERS/counting.h"

class Unit_Test
{
    Counting Test;
private:
    void Error_Notice(string Str);
    bool Blankfile();
    bool Lowercase_Uppercase();
    bool Space_Lowercase();
    bool Space_Uppercase();
    bool Punctions_Numbers();
    bool Punctions_Numbers2();
    bool BlankLines();
    bool BlankLines2();
    bool Comments_Line1();
    bool Comments_Line2();
    bool Comments_Line3();

public:
    bool Start_Test();
};


#endif // UNIT_TEST_H
