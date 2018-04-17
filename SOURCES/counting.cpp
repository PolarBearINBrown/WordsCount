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

long long Counting::Count_Line()
{
    File.open(FileLoc.data());
    Ans=1;
    char Tmp;
    while(!File.eof())
    {
        File.get(Tmp);
        if(Tmp=='\n')
        {
            Ans++;
        }
    }
    File.close();
    return Ans;
}

long long Counting::Count_Blankline()
{
    File.open(FileLoc.data());
    Ans=0;
    char Tmp=0;
    bool flag=true;
    while(!File.eof())
    {
        File.get(Tmp);
        if(Tmp!='\n')
        {
            if(Tmp!=' '&&Tmp!='\t')
            {
                flag=false;
            }
        }
        else
        {
            Ans+=flag;
            flag=true;
        }
    }
    File.close();
    return Ans;
}

long long Counting::Count_Commentline()
{
    File.open(FileLoc.data());
    Ans=0;
    char Tmp[2]={};
    int Status=0;
    long long curline=1;
    while(!File.eof())
    {
        Tmp[0]=Tmp[1];
        File.get(Tmp[1]);
        if(Tmp[0]=='\n')
        {
            curline++;
            if(Status==1)
            {
                Status=0;
            }
            else if(Status==2)
            {
                Ans++;
            }
            continue;
        }
        if(Status==0)
        {
            if(Tmp=="//")
            {
                Status=1;
                Ans++;
            }
            else if(Tmp=="/*")
            {
                Status=2;
            }
        }
        else if(Status==2)
        {
            if(Tmp=="*/")
            {
                Ans++;
                Status=0;
            }
        }
    }
    File.close();
    return Ans;
}
