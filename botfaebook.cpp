#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    struct elev{
    char nume[4];
    char prenume[4];
    int note[10][10],absenta[20];
    char materie[20][20];
    }e;

    struct profesor{
    char numep[10],pernumep[20],materie[50],clasa[5];
    }p;
    ifstream f("elev.txt");
    ifstream g("prof.txt");

    f>>e.nume;
    f>>e.prenume;
    for(int i=1;i<=3;++i)
    {f>>e.materie[i];
    int j=1;
    while(f>>e.note[i][j]&&e.note[i][j]!=0)
    ++j;
    f>>e.absenta[i];}
for(int i=0;i<4;i++)
    cout<<e.nume[i];
cout<<' ';
for(int i=0;i<4;++i)
    cout<<e.prenume[i];
cout<<'\n';

for(int i=1;i<=3;++i)
{cout<<e.materie[i]<<'\n';
int j=1;
while(e.note[i][j]!=0)
 {cout<<e.note[i][j]<<' ';++j;}
cout<<'\n'<<e.absenta[i]<<'\n';}
}
