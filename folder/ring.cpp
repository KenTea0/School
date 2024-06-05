#include <iostream>
using namespace std;

int n;
//s1は調べたい文字列、s2は入力するためにある。
string s1,s2;

int main()
{
    cout<<"ENTER THE WORDS PLS...>";
	cin>>s1;    //input s1
    cout<<"ENTER THE NUMBER OF RING...>";
    cin>>n; //input rings


	int ans=0; //カウント用
	for(int i=1;i<=n;i++)
	{
		cin>>s2; //10桁の文字列を入力
        s2+=s2; 
		if(s2.find(s1)!=s2.npos)++ans;
	}
    cout<<s2<<endl;
    //結果の表示
	cout<<"FOUND:"<<ans<<endl;
	
	return 0;
}