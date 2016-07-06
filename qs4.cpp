/*
 ==============================================================================================================================
 Name        : qs4.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a function that takes two input arguments and provides two separate results to the caller, one
               that is the result of multiplying the two arguments, the other the result of adding them. Since you can
               directly return only one value from a function, you'll need the second value to be returned through a
               pointer or reference parameter.
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int mul(int *a, int *b)
{
    int mul;
    int temp;
    temp=*a;
    *a+=*b;
    return mul=(temp)*(*b);

}

int main()

{
	clock_t begin = clock();
	int seed = time (NULL);
	srand (seed);
	
int a=3;
int b=4;
int result;
result=mul(&a,&b);
cout<<"Multiplication: "<<result<<endl;
cout<<"Addition: "<<a<<endl;
	
	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
