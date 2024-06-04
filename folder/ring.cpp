#include <iostream>
using namespace std;

int n;
string s1,s2;

int main()
{
    cout<<"ENTER THE WORDS PLS...>";
	cin>>s1;
    cout<<"ENTER THE NUMBER OF RING...>";
    cin>>n;


	int ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>s2;
        s2+=s2;
		if(s2.find(s1)!=s2.npos)++ans;
	}
	cout<<"FOUND:"<<ans<<endl;
	
	return 0;
}