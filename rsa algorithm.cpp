#include<iostream>
#include<conio.h>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	double m,p,q,e,c,d,n,fn,i,temp,powr;
	cout<<"Enter Message:";
	cin>>m;
	cout<<"\nEnter p      :";
	cin>>p;
	cout<<"\nEnter q      :";
	cin>>q;
	n=p*q;
	fn=(p-1)*(q-1);
	cout<<"\nEnter e      :";
	cin>>e;
	temp=pow(m,e);
	c=fmod(temp,n);
	cout<<"\nEncrypted Msg:"<<c;
	for(i=1;i<fn;i++)
	{
		if(fmod(i*e,fn)==1.0)
		{
			d=i;
			break;
		}
	}
	cout<<"\nValue of d   :"<<d;
	temp=fmod(c,n);
	powr=pow(temp,d);
	m=fmod(powr,n);
	cout<<"\nDecrypted Msg:"<<m;
	return 0;
}
