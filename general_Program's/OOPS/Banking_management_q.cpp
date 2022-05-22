1.	Define a class to represent a bank account, including the following data members:
	Name of the depositor  
	Account number  
	Type of account 
	Balance amount in the account  
And member functions: 
	To assign initial values  
	To deposit an amount    
	To withdraw an amount after checking the balance   
	To display the name and balance 
Write a main program to test the program.



#include<iostream>
using namespace std;
const int size =50;
class bank_ac{
    char name[size];
    int ac_num;
    char type_of_ac[size];
    float ac_bal;
   public:
       void init();//to initialize values.
       void put();//to deposit amount in account.
       void withdraw();//To withdraw an amount.
       void display();//to display the name & balance
};
void bank_ac::init(){
    cout<<"Enter name of depositor :";
    cin>>name;
    cout<<"\nEnter account number :";
    cin>>ac_num;
    cout<<"\nEnter account type :";
    cin>>type_of_ac;
    ac_bal=0;
    cout<<"\nAccount balance is: "<<ac_bal;
}
void bank_ac::put(){
    cout<<"Enter a amount to deposit: ";
    cin>>ac_bal;
}
void bank_ac::display(){
    cout<<"Name of account holder: "<<name<<endl;
    cout<<"\n account balance: "<<ac_bal;
}
void bank_ac::withdraw(){int n;
    cout<<"balance in account :"<<ac_bal;
    cout<<"enter an amount to withdraw : "<<endl;
    cin>>n;
    if(n<=ac_bal){
        ac_bal=ac_bal-n;
    cout<<"\n remaining balance in account is : "<<ac_bal;}
    else
        cout<<"\n Insufficient balance."<<endl;
}
int main(){
    int x=5;int n;
    bank_ac ob1;
    do{
       cout<< "\n you can choose any of the following ";
       cout<< "\n 1. Enter bank account detail";
       cout<< "\n 2. Enter amount to deposit ";
       cout<< "\n 3. Enter amount to withdraw ";
       cout<< "\n 4. To check account balance ";
       cout<< "\n 5. exit";
       cout<< "\n enter any option: ";
       cin>>n;
       switch(n){
       case 1:
        {ob1.init();
        break;}
       case 2:
        {
            ob1.put();
            break;
        }
       case 3:
        {
            ob1.withdraw();
            break;
        }
       case 4:
        {
            ob1.display();
            break;
        }
       case 5:
        {
           exit(0);
        }
        default: cout<< "\n invalid option";
       }
    }
    while(x!=0);
    return 0;
}
