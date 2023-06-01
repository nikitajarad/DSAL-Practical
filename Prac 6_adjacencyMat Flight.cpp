#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class adjmatlist
{
int m[10][10],n,i,j,ch;
string city[20];

public:
void getgraph();
void displaym();


};
void adjmatlist::getgraph()
{
cout<<"\n enter no. of cities:";
cin>>n;
cout<<"\n enter name of cities:";
for(i=0;i<n;i++)
cin>>city[i];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{ cout<<"\n if path is present between city "<<city[i]<<" and "<<city[j]<<" then press enter 1 otherwise 0:";
cin>>ch;
if(ch==1)
{
cout<<"\n enter time required to reach city "<<city[j]<<" from "<<city[i]<<":";
cin>>m[i][j];
}
else if(ch==0)
{
m[i][j]=0;
}
else
{ cout<<"\n unknown entry"; }
}
}
}

void adjmatlist::displaym()
{ cout<<"\n";
for(j=0;j<n;j++)
{ cout<<"\t"<<city[j]; }

for(i=0;i<n;i++)
{ cout<<"\n "<<city[i];
for(j=0;j<n;j++)
{ cout<<"\t"<<m[i][j];
}
cout<<"\n";
}
}


int main()
{ int m;
adjmatlist a;

while(1)
{
cout<<"\n 1.enter graph";
cout<<"\n 2.display adjacency matrix for cities";
cout<<"\n 3.exit";
cout<<"\n\n enter the choice:";
cin>>m;
switch(m)
{ case 1: a.getgraph();
break;
case 2: a.displaym();
break;
case 3: exit(0);
default: cout<<"\n unknown choice";
}
}
return 0;
}

