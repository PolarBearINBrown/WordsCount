#ifndef _COUNTING_H_
#define _COUNTING_H_

#include "iostream"
#include "fstream"
#include "string"
#include "cstring"
using namespace std;

class Counting
{
private:
	string FileLoc;
	ifstream File;
	long long Ans;
    int Check_Str_Words(string Tmp);
    bool Open_File();
    void Close_File();
	
public:
	bool Import_FileLoc(string Loc);
	bool Get_FileLoc();
    long long Count_Character();
	long long Count_Words();
    long long Count_Line();
    long long Count_Blankline();
    long long Count_Commentline();
};

#endif
