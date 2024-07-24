#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
using namespace std;

void cofmenu();
void login();
void registration();
void forgot();

int main(){
	cout<<"\t\t\t                   _________________________________ \n";
	cout<<"\t\t\t                  |!!! GREETING TO COFFEE LATAE !!! | \n";
	cout<<"\t\t\t                  |_________________________________| \n";
	
	int ch;
	cout<<"\t\t\t\n\n  Press 1 to go to the SIGN-UP/LOG-IN PAGE :";
	cin>>ch;
	if(ch==1){
	cout<<endl<<endl;
 int op;
 cout<<"\n\n\t\t\t    ___________________________________________________________         \n\n";
 cout<<"\n\n\t\t\t                      WELCOME TO LOGIN PAGE                             \n\n";
 cout<<"\n\n\t\t\t             ------------------MENU------------------                   \n\n";
 cout<<"                                                                                  \n\n";
 cout<<"\t\t | Please LOGIN / REGISTER  \t\t\n";
 cout<<"\t\t | Press 1 to LOGIN : \t\t\n";
 cout<<"\t\t | Press 2 to REGISTER : \t\t\n";
 cout<<"\t\t | Press 3 if you FORGOT PASSWORD : \t\t\n";
 cout<<"\t\t | Press 4 to EXIT : \t\t\n";
cout<<endl;
 cout<<"Please select the choice : ";
 cin>>op;
 cout<<endl;
 
 switch(op){
 	case 1: 
	      login();
 	break;
 	case 2:
	      registration();
 	break;
 	case 3: 
	      forgot();
 	break;
 	case 4: 
	      cout<<"\t\t\t Thank You \n\n";
 	break;
 	default:  
 	      system("cls");
	      cout<<"Please select from above choice : ";
 	      main();
 	break;
 }

 return 0;
}
else{
	cout<<"\t\t\t   !!! You cannot proceed further without LOGIN !!!... ";
}
}

void cofmenu(){
	int h;
	cout<<"\t\t\t\n\n\n   --------> COFFEE MENU <---------         \t\t\t\n\n";
    cout<<"\t\t\t Press 1 for CAPPUCCIONO : "<<endl;
    cout<<"\t\t\t Press 2 for ESPRESSO : "<<endl;
    cout<<"\t\t\t Press 3 for LATTE : \n\n"<<endl;
    cout<<"Please Select you COFFEE type : ";
    cin>>h;
    cout<<"\n\n\n"<<endl;
    system("cls");
    switch(h){
    	case 1:{
    		int x;
			cout<<"\t\t\t\t   CAPPUCIONO COFFEE   \n\n";
			cout<<"\t\t  Size :     Price:           \n\n";
    		cout<<"\t\t 1.Small      1$          \n"; 
			cout<<"\t\t 2.Medium     3$           \n"; 
			cout<<"\t\t 3.Large      5$           \n\n\n";
			cout<<"Please Select the size:";
			cin>>x;
			cout<<"\n"<<endl;
			if(x==1){
				int cups1,user1,sub1,price1;
				cout<<"Enter the Quantity/Cups : ";
				cin>>cups1;
				price1=cups1*1;
				cout<<"\n\nTotal Price = "<<price1<<"$";
				cout<<"\n"<<endl;
				cout<<"Enter the Price which you want to give to the Cashier : ";
				cin>>user1;
				sub1=user1-price1;
				if(user1==price1){
					cout<<"\n Have a Nice Day !!!! \n";
				}
				else{
					cout<<"\n Received Ammount = "<<sub1<<"$ \n"<<endl;
					cout<<"\n Have a Nice Day !!!!  \n";
				}
			}
			
			else if(x==2){
				int cups2,user2,sub2,price2;
			    cout<<"Enter the Quantity/Cups : ";
				cin>>cups2;
				price2=cups2*3;
				cout<<"\n\nTotal Price = "<<price2<<"$";
				cout<<"\n"<<endl;
				cout<<"Enter the Price which you want to give to the Cashier : ";
				cin>>user2;
				sub2=user2-price2;
				if(user2==price2){
					cout<<"\n Have a Nice Day !!!! \n";
				}
				else{
					cout<<"\n Received Ammount = "<<sub2<<"$ \n"<<endl;
					cout<<"\n Have a Nice Day !!!!  \n";
				}				
			}
			else if(x==3){
				int cups3,user3,sub3,price3;
			    cout<<"Enter the Quantity/Cups : ";
				cin>>cups3;
				price3=cups3*5;
				cout<<"\n\nTotal Price = "<<price3<<"$";				
			cout<<"\n"<<endl;
				cout<<"Enter the Price which you want to give to the Cashier : ";
				cin>>user3;
				sub3=user3-price3;
				if(user3==price3){
					cout<<"\n Have a Nice Day !!!! \n";
				}
				else{
					cout<<"\n Received Ammount = "<<sub3<<"$ \n"<<endl;
					cout<<"\n Have a Nice Day !!!!  \n";
				}
			}
			break;
		
	}
		case 2:{
			int y;
			cout<<"\t\t\t\t   ESPRESSO COFFEE   \n\n";
			cout<<"\t\t  Size :     Price:           \n\n";
    		cout<<"\t\t 1.Small      2$          \n"; 
			cout<<"\t\t 2.Medium     4$           \n"; 
			cout<<"\t\t 3.Large      6$           \n\n\n";
			cout<<"Please Select the size:";
			cin>>y;
			cout<<"\n"<<endl;
			if(y==1){
				int cups1,user1,sub1,price1;
				cout<<"Enter the Quantity/Cups : ";
				cin>>cups1;
				price1=cups1*2;
				cout<<"\n\nTotal Price = "<<price1<<"$";
				cout<<"\n"<<endl;
				cout<<"Enter the Price which you want to give to the Cashier : ";
				cin>>user1;
				sub1=user1-price1;
				if(user1==price1){
					cout<<"\n Have a Nice Day !!!! \n";
				}
				else{
					cout<<"\n Received Ammount = "<<sub1<<"$ \n"<<endl;
					cout<<"\n Have a Nice Day !!!!  \n";
				}
			}
			else if(y==2){
				int cups2,user2,sub2,price2;
			    cout<<"Enter the Quantity/Cups : ";
				cin>>cups2;
				price2=cups2*4;
				cout<<"\n\nTotal Price = "<<price2<<"$";
				cout<<"\n"<<endl;
				cout<<"Enter the Price which you want to give to the Cashier : ";
				cin>>user2;
				sub2=user2-price2;
				if(user2==price2){
					cout<<"\n Have a Nice Day !!!! \n";
				}
				else{
					cout<<"\n Received Ammount = "<<sub2<<"$ \n"<<endl;
					cout<<"\n Have a Nice Day !!!!  \n";
				}				
			}
			else if(y==3){
				int cups3,user3,sub3,price3;
			    cout<<"Enter the Quantity/Cups : ";
				cin>>cups3;
				price3=cups3*6;
				cout<<"\n\nTotal Price = "<<price3<<"$";		
			    cout<<"\n"<<endl;
				cout<<"Enter the Price which you want to give to the Cashier : ";
				cin>>user3;
				sub3=user3-price3;
				if(user3==price3){
					cout<<"\n Have a Nice Day !!!! \n";
				}
				else{
					cout<<"\n Received Ammount = "<<sub3<<"$ \n"<<endl;
					cout<<"\n Have a Nice Day !!!!  \n";
				}						
			}			
			break;
	}
		case 3:{
			int z;
			cout<<"\t\t\t\t   LATTE COFFEE   \n\n";
			cout<<"\t\t  Size :     Price:           \n\n";
    		cout<<"\t\t 1.Small      3$          \n"; 
			cout<<"\t\t 2.Medium     6$           \n"; 
			cout<<"\t\t 3.Large      9$           \n\n\n";
			cout<<"Please Select the size:";
			cin>>z;
			cout<<"\n"<<endl;
			if(z==1){
				int cups1,user1,sub1,price1;
				cout<<"Enter the Quantity/Cups : ";
				cin>>cups1;
				price1=cups1*3;
				cout<<"\n\nTotal Price = "<<price1<<"$";
				cout<<"\n"<<endl;
				cout<<"Enter the Price which you want to give to the Cashier : ";
				cin>>user1;
				sub1=user1-price1;
				if(user1==price1){
					cout<<"\n Have a Nice Day !!!! \n";
				}
				else{
					cout<<"\n Received Ammount = "<<sub1<<"$ \n"<<endl;
					cout<<"\n Have a Nice Day !!!!  \n";
				}				
			}
			else if(z==2){
				int cups2,user2,sub2,price2;
			    cout<<"Enter the Quantity/Cups : ";
				cin>>cups2;
				price2=cups2*6;
				cout<<"\n\nTotal Price = "<<price2<<"$";
				cout<<"\n"<<endl;
				cout<<"Enter the Price which you want to give to the Cashier : ";
				cin>>user2;
				sub2=user2-price2;
				if(user2==price2){
					cout<<"\n Have a Nice Day !!!! \n";
				}
				else{
					cout<<"\n Received Ammount = "<<sub2<<"$ \n"<<endl;
					cout<<"\n Have a Nice Day !!!!  \n";
				}				
			}
			else if(z==3){
				int cups3,user3,sub3,price3;
			    cout<<"Enter the Quantity/Cups : ";
				cin>>cups3;
				price3=cups3*9;
				cout<<"\n\nTotal Price = "<<price3<<"$";
			    cout<<"\n"<<endl;
				cout<<"Enter the Price which you want to give to the Cashier : ";
				cin>>user3;
				sub3=user3-price3;
				if(user3==price3){
					cout<<"\n Have a Nice Day !!!! \n";
				}
				else{
					cout<<"\n Received Ammount = "<<sub3<<"$ \n"<<endl;
					cout<<"\n Have a Nice Day !!!!  \n";
				}								
			}			
			break;
		}
	}
}


void login() {
	int count;
	string userid,password,id,pass,name;
	system("cls");
	cout<<"\t\t\t  Please Enter the USERNAME and PASSWORD  \n\n";
	cout<<"\t\t\t  USERNAME : ";
	cin>>userid;
	cout<<"\t\t\t  PASSWORD : ";
	cin>>password;
	
	ifstream read("record.txt");
	while(read>>name>>id>>pass){
		if(id==userid && pass==password){
			count=1;
			system("cls");
		}
	}
	read.close();
	if(count==1){
		cout<<"\t LOGIN Successfully...\n\n  \t\t\t\t    |-|-|-| Thanks for LOGGING IN COFFEE LATAE |-|-|-| \n\n";
    cout<<"\n\n\n"<<endl;

		 char s;
 cout<<"\t\t Press Y for Open Menu :";
 cin>>s;
 system("cls");
  if(s=='Y' || s=='y'){
 	cofmenu();
 }
	}
	else{
		cout<<"LOGIN ERROR \n Please check your USERNAME and PASSWORD...\n\n";
		cout<<"\t\t\t Please Enter the correct Credentials....\n\n";
		cout<<"\t\t\t  USERNAME : ";
	    cin>>userid;
	    cout<<"\t\t\t  PASSWORD : ";
	 	 cin>>password;
	 	 cout<<"\t LOGIN Successfully...\n\n  \t\t\t\t    |-|-|-| Thanks for LOGGING IN COFFEE LATAE |-|-|-| \n\n";
         cout<<"\n\n\n"<<endl;
	 	char s;
 		cout<<"\t\t Press Y for Open Menu :";
 		cin>>s;
 		system("cls");
  		if(s=='Y' || s=='y'){
 			cofmenu();
 }
	}
	}
	
void registration(){
	
	
	string rname,ruserid,rpassword,rid,rpass;
	system("cls");
	cout<<"\t\t\t Enter your NAME : ";
	cin>>rname;
	cout<<"\t\t\t Enter the USERNAME : ";
	cin>>ruserid;
	cout<<"\t\t\t Enter the PASSWORD : ";
	cin>>rpassword;
   if(rpassword.size()<8){
   	  cout<<"\t\t\n\n  Password must contain 8 words...\t\t \n\n";
	  cout<<"\t\t\t Enter the PASSWORD : ";
	  cin>>rpassword;   	  
   }
	
	ofstream f1("record.txt",ios::app);
	f1<<rname<<' '<<ruserid<<' '<<rpassword<<endl;
	system("cls");
	cout<<"\t Registration is Successfull..   \t\t \n\n  \t\t\t\t  |-|-|-| You are Successfully registered in COFFEE LATAE |-|-|-|";
    cout<<"\n\n\n"<<endl;
    cout<<"\t\t\t   Now LOGIN to Website... \t\t\t\n\n";
	int n;
	cout<<"\n\n Press 1 for login page : ";
	cin>>n;
	if(n==1){
		login();
	}
	
	
	//main();
	
	
}	

void forgot(){
	int opt;
//	string suserid,sid,spass;
	system("cls");
	cout<<"\t\t You FORGOT YOUR PASSWORD :\n";
	cout<<"Press 1 to search your id by username : \n";
	cout<<"Press 2 to go back to main menu : \n";
	cout<<"\t Please Select the Option : ";
	cin>>opt;
	switch(opt){
		case 1:
			{
			  int count;
			 string sname,suserid,sid,spass;
			 cout<<"\n\t\t Enter your username : ";
			 cin>>suserid;
			 
			 ifstream read2("record.txt");
			 while(read2>>sname>>sid>>spass){
			 	if(sid==suserid){
			 		count=1;
				 }
			 }
			 read2.close();
			 if(count==1){
			 	cout<<"\n\t\t Your account is found! \n";
			 	cout<<"\n\n Your Password is : "<<spass;
			 	main();
			 }
			 else{
			 	cout<<"\n\t Sorry! Your account is not found!";
			 }
			 break;
	}
	case 2: 
	     main();
	     break;
	  
	 default:
	        cout<<"\t\t\t Wrong choice ! Please try again "<<endl;
			break;    
}
}

