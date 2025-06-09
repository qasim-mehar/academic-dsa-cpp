#include <iostream>
#include <C:\Users\student\Desktop\Qasim DSA\ListStack\Stack.h>
using namespace std;
void decimalToBinary(int number);
void validatWord(string text);
void symbolBalancing(string text);
void postfixValuation(string text);

int main(int argc, char** argv) {
	int choice;
	int number;
	do
	{ 
		cout<<"press to 1 converts decimal to binary \n";
		cout<<"press 0 to exit\n";
		cin>>choice;
		switch(choice)
		{
		
			case 1:
				{
					cout<<"Provide Number to convert into binary\n";
					cin>>number;
					decimalToBinary(number);
					break;
				}
			case 0:	
			{
				exit(-1);
			
			}
			break;
		}
	}
	while(true);

	
	return 0;
}

void decimalToBinary(int number)
{
	Stack<int> s1(10);
	while(number!=0)
	{
		s1.push(number%2);
		number=number/2;		
	}
	while(!s1.isEmpty())
	{
		cout<<s1.pop()<<endl;
	}
}

void validWord(string text){
	for (int i=0 ;i<input.length(text), i++)
	{
		if(input[i]=='a')
		s1.push(input[i])
	}
	else if(input[i]=='b')
	{
		if(s1.isEmpty())
		s1.pop
		else 
		cout<<"invalid";
		return;
	}
}

void symbolBalancing(string text){
	Stack<char> s1(text);
	for (int i=0 ;i<input.length(text), i++)
	{
		if(input[i]=='('|| input[i]=='['|| input[i]=='{')
		s1.push(input[i])
	
    	else if(input[i]==')'|| input[i]==']'|| input[i]=='}')
    	{
		if(s1.isEmpty())
		{
		char p1 = s
   	    }
   }
   	   
} 


