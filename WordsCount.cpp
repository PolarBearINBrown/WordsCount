#include "iostream"
using namespace std;

#include "E:\WordsCount\HEADERS\counting.h"

class Unit_Test
{
	Counting Test;
private:
	void Error_Notice(string Str)
	{
		cout<<"��������ڣ�"<<Str<<endl;
	}
	void Lowercase_Uppercase()
	{
		if(!Test.Import_FileLoc("test1.txt"))
		{
			Error_Notice("Lowercase_and_Uppercase");
		}
		if(Test.Count_Character()!=52)
		{
			Error_Notice("Lowercase_and_Uppercase");
		}
		if(Test.Count_Words()!=1)
		{
			Error_Notice("Lowercase_and_Uppercase");
		}
	}
	void Space_Lowercase()
	{
		if(!Test.Import_FileLoc("test2.txt"))
		{
			Error_Notice("Space_Lowercase");
		}
		if(Test.Count_Character()!=60)
		{
			Error_Notice("Space_Lowercase");
		}
		if(Test.Count_Words()!=11)
		{
			Error_Notice("Space_Lowercase");
		}
	}
};

int main()
{
	string Command;
	Counting WC;
	while(cin>>Command)
	{
		cout<<"��������ļ�·����"<<endl; 
		if(Command=="c")
		{
			if(!WC.Get_FileLoc())
			{
				cout<<"·�������������������롣"<<endl;
				continue;
			}
			cout<<WC.Count_Character()<<endl;
		}
		else if(Command=="w")
		{
			if(!WC.Get_FileLoc())
			{
				cout<<"·�������������������롣"<<endl;
				continue;
			}
			cout<<WC.Count_Words()<<endl;
		}
	}
	return 0;
}
