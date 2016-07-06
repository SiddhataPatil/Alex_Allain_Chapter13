/*
 ==============================================================================================================================
 Name        : qs5.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program that compares the memory addresses of two different variables on the stack and
               prints out the order of the variables by numerical order of their addresses.
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()

{
	clock_t begin = clock();
	int seed = time (NULL);
	srand (seed);
	
	
int x = 4;
int y = 5;

if(&x > &y)
{

    cout<< "x= "<< &x<<endl;
    cout<< "y= "<< &y<<endl;
}

else
{

    cout<< "y= "<< &y<<endl;
    cout<< "x= "<< &x<<endl;

}


	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
