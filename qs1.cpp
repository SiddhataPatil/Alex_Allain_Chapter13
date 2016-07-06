/*
 ==============================================================================================================================
 Name        : qs1.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a function that prompts the user to enter his or her first name and last name, as two separate
               values. This function should return both values to the caller via additional pointer (or reference)
               parameters that are passed to the function. Try doing this first with pointers and then with references.
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Info
{
    string first;
    string last;

};

void swap1(string *a, string *b)
{
    string *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}

void swap2 (string &x, string &y)
{
    string temp;
    temp = x;
    x=y;
    y=temp;
}

int main()

{

	clock_t begin = clock();
	int seed = time (NULL);
	srand (seed);

Info blah;
cout<<"Enter First name"<<endl;
cin>>blah.first;
cout<<"Enter last name"<<endl;
cin>>blah.last;
cout<< blah.first <<"  "<<blah.last<<endl;
//swap1 (&blah.first, &blah.last);
swap2(blah.first, blah.last);
cout<< blah.first <<"  "<<blah.last<<endl;


	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
