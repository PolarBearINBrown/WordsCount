#include "HEADERS\counting.h"

int Counting::Check_Str_Words(string Tmp)
{
    int ans=0;
	bool is_word=false;
	for(string::iterator i=Tmp.begin();i!=Tmp.end();i++)
	{
		if((*i>='a'&&*i<='z')||(*i>='A'&&*i<='Z'))
		{
			is_word=true;
		}
		else
		{
			ans+=is_word;
			is_word=false;
		}
	}
    ans+=is_word;
	return ans;
}

bool Counting::Open_File()
{
    File.open(FileLoc.data());
    if(!File.is_open())
    {
        File.close();
        return true;
    }
    File.close();
    return false;
}

void Counting::Close_File()
{
    File.close();
}

bool Counting::Import_FileLoc(string Loc)
{
	FileLoc=Loc;
    return Open_File();
}

bool Counting::Get_FileLoc()
{
	cin>>FileLoc;
    return Open_File();
}

long long Counting::Count_Character()
{
    File.open(FileLoc.data());
    Ans=-1;
	char Tmp;
	while(!File.eof())
	{
        File.get(Tmp);
		Ans++;
	}
    File.close();
	return Ans;
}

long long Counting::Count_Words()
{
    File.open(FileLoc.data());
    Ans=0;
	string Tmp;
	while(!File.eof())
	{
		File>>Tmp;
		Ans+=Check_Str_Words(Tmp);
	}
    File.close();
	return Ans;
}
