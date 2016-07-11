*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : 3. Modify the program you wrote for exercise 1 so that instead of always prompting the user for a last
               name, it does so only if the caller passes in a NULL pointer for the last name.
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>

using namespace std;


struct Info
{
    char *first;
	char *last;

};

void swap2 (string &x, string &y)
{
    string temp;
    temp = x;
    x=y;
    y=temp;
}

int main()

{

Info blah;
blah.first="Sid";
blah.last="\0";
string first_name=blah.first;
string last_name=blah.last;
if (last_name=="\0")
{
cout<<"Enter last name"<<endl;
cin>>last_name;
}
cout<< first_name <<"  "<<last_name<<endl;
swap2 (first_name, last_name);
cout<< first_name <<"  "<<last_name<<endl;

	system ("pause");
	return 0;
}
