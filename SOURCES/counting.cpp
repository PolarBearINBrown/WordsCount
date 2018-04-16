#include "HEADERS\counting.h"

int Counting::Check_Str_Words(string Tmp)
{
	int ans;
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
	return ans;
}

bool Counting::Import_FileLoc(string Loc)
{
	FileLoc=Loc;
	if(!File.is_open())
	{
		return false;
	}
	return true;
}

bool Counting::Get_FileLoc()
{
	cin>>FileLoc;
	File.open(FileLoc.data());
	if(!File.is_open())
	{
		return false;
	}
	return true;
}

long long Counting::Count_Character()
{
	Ans=0;
	char Tmp;
	while(!File.eof())
	{
		File>>Tmp;
		Ans++;
	}
	return Ans;
}

long long Counting::Count_Words()
{
	Ans=0;
	string Tmp;
	while(!File.eof())
	{
		File>>Tmp;
		Ans+=Check_Str_Words(Tmp);
	}
	return Ans;
}
