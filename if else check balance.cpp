#include<iostream>
using namespace std;
int main(){
	double balance;
	cout<<"Enter your balance : ";
	cin>>balance;
	
	int a;
	cout<<"What would do you like"<<endl;
	cout<<"Type 1 to withdraw"<<endl;
	cout<<"Type 2 to deposit"<<endl;
	cout<<"Type 3 to check balance"<<endl;
	cout<<"Type 4 to exit"<<endl;
	
	cin>>a;
	 if(a==1){
	 	cout<<"Write the withdrew amount : ";
	 	cin>>a;
	 	balance=balance - a;
	 	cout<<balance;
	 } 
	  
	 else if(a==2){
	 	cout<<"Write the deposit amount : ";
	 	cin>>a;
	 	balance =balance + a;
	 	cout<<balance;
	 } 
	 
	 	else if(a==3){
	 	cout<<balance;
	 } 
	 else if(a==4){
	 	cout<<"Thankyou For Your Service";
	 }
	 else{
	 	cout<<"Invaild Values";
	 }
	 return 0;
	 
	 
}