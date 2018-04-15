#include "iostream"
#include "fstream"
#include "cstdio"
#include "string"
#include "cstring"
#include "algorithm"
using namespace std;

class Counting
{
private:
	string FileLoc;
	ifstream File;
	long long Ans;
	int Check_Str_Words(string Tmp)
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
	
public:
	bool Get_FileLoc()
	{
		cin>>FileLoc;
		File.open(FileLoc.data());
		if(!File.is_open())
		{
			return false;
		}
		return true;
	}
	long long Count_Character()
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
	long long Count_Words()
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
};

int main()
{
	string Command;
	Counting WC;
	while(cin>>Command)
	{
		cout<<"输入命令及文件路径："<<endl; 
		if(Command=="c")
		{
			if(!WC.Get_FileLoc())
			{
				cout<<"路径输入有误，请重新输入。"<<endl;
				continue;
			}
			cout<<WC.Count_Character()<<endl;
		}
		else if(Command=="w")
		{
			if(!WC.Get_FileLoc())
			{
				cout<<"路径输入有误，请重新输入。"<<endl;
				continue;
			}
			cout<<WC.Count_Words()<<endl;
		}
	}
	return 0;
}
