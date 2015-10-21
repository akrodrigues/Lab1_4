//============================================================================
// Name        : Lab_1_Part4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

string mutateDNA(string y)
{
int t;
int z = y.size();
int v=rand() % z;

for(t=0;t<1;t++)
{
if (y[v] == 'A' || y[v] == 'a') {
y[v] = 'T';
}
else if (y[v] == 'T' || y[v] == 't') {
y[v] = 'A';
}
else if (y[v] == 'G' || y[v] == 'g') {
y[v] = 'C';
}
else if (y[v] == 'C' || y[v] == 'c') {
y[v] = 'G';
}
}
return (y);
}


string function1(string a)
{
int i;
int j;
int c=0;
string comp=a;
string mut=a;
int s=a.size();

for(i=0;i<a.size();i++)
{
if (a[i] == 'A' || a[i] == 'a' || a[i] == 'G' || a[i] == 'g' || a[i] == 'C' || a[i] == 'c' || a[i] == 'T' || a[i] == 't')
{
++c;
}
}

if (c<a.size())
{
cout << "DNA entered is : " << a << " chars(" << a.size() << ") : INVALID DNA\n";
}

else
{
for(j=0;j<a.size();j++)
{
if (a[j] == 'A' || a[j] == 'a') {
comp[j] = 'T';
}
else if (a[j] == 'T' || a[j] == 't') {
comp[j] = 'A';
}
else if (a[j] == 'G' || a[j] == 'g') {
comp[j] = 'C';
}
else if (a[j] == 'C' || a[j] == 'c') {
comp[j] = 'G';
}
}
mut = mutateDNA(a);
cout << "DNA entered is : " << a << " chars(" << a.size() << ") : VALID DNA : complement("<<comp<<") : mutate : " <<mut<<"\n";
}
return (a);
}


int main () {

srand (time(NULL));
string str1;
string comp;

while (1)
{
cout << "Enter the DNA string: \n";
cin >> str1;
function1(str1);
}

}
