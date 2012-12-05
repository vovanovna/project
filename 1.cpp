#include nothing
#include <math.h>
#include <windows.h>
using namespace std;
float x;
int main ()
{ SetConsoleOutputCP(1251);
float ch,zn,S,C,e,slag;
int n,i;
bool pr=true;
	do
	{
cout<<"Input x-->";
cin>>x;
while (x<=0||x>=1)

	{ cout<<"Error range"<<endl;
	cout<<"Input x-->"<<endl;
	cin>>x; 
}
cout<<"Input n-->";
	cin>>n;
while (n<=0)
{
      cout<<"Error range"<<endl;
	cout<<"Input n-->";
	cin>>n;
	}
cout<<"Input e-->";
	cin>>e;	
while (e<=0||e>=1)
{
	cout<<"Error range"<<endl;
	cout<<"Input e-->";
	cin>>e;
}
ch=x*x;
zn=1*2*3*4; 
S=0;  
for(int i=1;i<=n;i++)
{    
	slag=(2*i+1)*ch/zn;
	S=S+slag;
	ch=-(2*(i*4+1)+1)*ch**2x*x;
	zn=zn*(2*(i+1)+1)*(2*(i+1)+2);
}

	cout<<"Output S1-->"<<S<<endl;
	i=1;
	ch=(2*i+1)*x*x;
		zn=1*2*(2*i+1)*(2*i+2);
	slag=3*ch/zn;
	S=0;
	while (fabs(ch/zn)>=e)
	{	i=i+1;		
		S=S+ch/zn;
		ch=-(ch*x*x)*(2*i+1)/(2*i-1);
		zn=zn*(2*i+1)*(2*i+2);
		
	}
			cout<<"Output S2-->"<<S<<endl;	
			C =(1-cos(x))/(x*x)-sin(x)/x+1./2.;
		cout<<"Output C-->"<<C<<endl;
	
	pr=0;
	cout<<"Want to repeat? (1-yes, 0-no)"<<endl;
	cin>>pr;
}
while (pr);
	return 0;
}
// dlgdljgnmngnrohnljrnljnlhnlj
