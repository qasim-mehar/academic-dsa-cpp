#include<iostream>
using namespace std;
int main(){
	int sub1,sub2,sub3,sub4,sub5,id,avg,sum;
	string name;
	char grade;
	cout<<"Enter the name of the student";
	cin>>name;
	cout<<"Enter the id of the student";
	cin>>id;
	cout<<"Enter the marks of each subject:\n";
	cin>>sub1; 
	cin>>sub2; 
	cin>>sub3; 
	cin>>sub4; 
	cin>>sub5; 
	sum=sub1+sub2+sub3+sub4+sub5;
	avg=sum/5;
	if(avg>=85 && avg<=100){
		grade='A';
		
	}
		else if(avg>=70 && avg<85){
		grade='B';
		
	}
		else if(avg>=60 && avg<70){
		grade='C';
		
	}
		else if(avg>=50 && avg<60){
		grade='D';
		
	}
	else{
		grade='F';
	}
	cout <<"Here Are the Credentials of Student"<<endl;
	cout <<"Name:"<<name<<endl;
	cout <<"ID:"<<name<<endl;
	cout<<"Total Marks Obtained:"<<sum<<endl;
	cout<<"Average="<<avg<<endl;
	cout<<"Grade="<<grade<<endl;
	
}

