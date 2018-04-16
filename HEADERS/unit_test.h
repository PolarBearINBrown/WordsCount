#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include "iostream"
#include "HEADERS/counting.h"

class Unit_Test
{
    Counting Test;
private:
    void Error_Notice(string Str);
    void Lowercase_Uppercase();
    void Space_Lowercase();
    void Space_Uppercase();
    void Punctions_Numbers();
    void Punctions_Numbers2();

public:
    void Start_Test();
};


#endif // UNIT_TEST_H
