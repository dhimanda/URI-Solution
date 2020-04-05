///coded by Dhiman Sarker Bappi
// Problem Link : https://www.urionlinejudge.com.br/judge/en/challenges/view/503/1
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,m;
	while((scanf("%d %d",&h,&m)==2))
	{
        h /= 30;
        m /= 6;
        (h>9) ? cout <<h<< ":":cout<<0<<h<< ":";
        (m>9) ? cout <<m<<"\n":cout<<0<<m<< "\n";
	}
	return 0 ;
}
