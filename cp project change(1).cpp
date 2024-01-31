#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
//define structure
struct productdata {
	int code;
	string name;
	int max;
	int stock;
};
productdata enter[20];
int total=0;

void entry(){
	
	
		cout<<"ENTER DATA OF PRODUCT: "<<total+1<<endl<<endl;
		cout<<"ENTER PRODUCT CODE: \n";
		cin>> enter[total].code;
		cout<<"ENTER PRODUCT NAME: \n";
		cin>> enter[total].name;
		cout<<"ENTER PRODUCT MAX STOCK: \n";
		cin>> enter[total].max;
		cout<<"ENTER PRODUCT STOCK: \n";
		cin>>enter[total].stock;
	
	total++;
	
}
void show(){
	
	if(total==0){
		cout<<"THERE IS NO DATA OF PRODUCT: \n\n";
	}
	
	else{
		for (int i=0; i<total; i++){
			cout<<"THE DATA OF PROODUCT"<<i+1<<endl<<endl;
			cout<<enter[i].code<<endl;
			cout<<enter[i].name<<endl;
			cout<<enter[i].max<<endl;
			cout<<enter[i].stock<<endl;
		}
	
	}
}
void search(){
	if(total==0){
		cout<<"THERE IS NO DATA OF PRODUCT: \n\n";
	}
	
	else{
		int req;
		cout<<"ENTER THE CODE OF THAT YOU WANT TO SEARCH:\n\n";
		cin>> req;
		
		for (int i=0; i<total; i++){
			if(req==enter[i].code){
				cout<<"THE DATA OF PRODUCT"<<i+1<<endl<<endl;
				cout<<enter[i].code<<endl;
				cout<<enter[i].name<<endl;
				cout<<enter[i].max<<endl;
				cout<<enter[i].stock<<endl;
				break;
			}
			if(i==total-1){
				cout<<"NO DATA FOUND: \n\n";
			}
		}
	}
	
}
void update(){
	if(total==0){
		cout<<"THERE IS NO DATA OF PRODUCT: \n\n";
	}
	
	else{
		int req;
		cout<<"ENTER THE CODE OF PRODUCT THAT YOU WANTT TO UPDATE:\n\n";
		cin>> req;
			
		for (int i=0; i<total; i++){
			if(req==enter[i].code){
				cout<<"Previous data of product "<<i+1<<endl<<endl;
				cout<<enter[i].code<<endl;
				cout<<enter[i].name<<endl;
				cout<<enter[i].max<<endl;
				cout<<enter[i].stock<<endl;
				
				cout<<"\n\nEnter data of product: "<<i+1<<endl<<endl;
				cout<<"ENTER PRODUCT CODE: \n";
				cin>> enter[i].code;
				cout<<"ENTER PRODUCT NAME: \n";
				cin>> enter[i].name;
				cout<<"ENTER PRODUCT MAX: \n";
				cin>> enter[i].max;
				cout<<"ENTER PRODUCT STOCK: \n";
				cin>>enter[i].stock;
				
				break;
			}
			if(i==total-1){
				cout<<"\aNO DATA FOUND: \n\n";
			}
		}
	}
}
void del(){
	if( total==0){
		cout<<"THERE IS NO DATA OF PRODUCT: \n\n";
	}
	
	else{
		int id;
		cout<<"ENTER AN ID OF PRODUCT THAT YOU WANT TO DELETE: \n\n";
		cin>>id;
		
		for(int i=0; i<total; i++){
			if(id==enter[i].code){
				for(int j=i; j<total-1; j++){
					enter[j].code=enter[j+1].code;
					enter[j].name=enter[j+1].name;
					enter[j].max=enter[j+1].max;
					enter[j].stock=enter[j+1].stock;
					
				
				}
			}
		}
		total--;
	}
}
void add(){
	cout<<"HOW MUCH YOU HAVE RECEIVED";
	int addd;
	cin>>addd;
		int id;
		cout<<"ENTER code OF PRODUCT THAT YOU WANT TO ADD STOCK: \n\n";
		cin>>id;
		
		for(int i=0; i<total; i++){
			if(id==enter[i].code){
				enter[i].stock=enter[i].stock+addd;
				cout<<enter[i].code<<endl;
				cout<<enter[i].name<<endl;
				cout<<enter[i].max<<endl;
				cout<<enter[i].stock<<endl;
				
			}	    
}
}
void sub(){
	cout<<"HOW MUCH YOU HAVE DISPLAYED";
	int subb;
	cin>>subb;
	
		int id;
		cout<<"ENTER A CODE OF PRODUCT THAT YOU WANT TO SUBTRACT: \n\n";
		cin>>id;
		
		for(int i=0; i<total; i++){
			if(id==enter[i].code){
				enter[i].stock=enter[i].stock-subb;
				cout<<enter[i].code<<endl;
				cout<<enter[i].name<<endl;
				cout<<enter[i].max<<endl;
			cout<<enter[i].stock<<endl;
				
			}	    
}
}

int main (){
	cout<<"======================================= WELCOME TO INVENTORY MANAGMENT SYSTEM ===========================================================================";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"                                                                                                      ***"<<endl;	
	cout<<"                                                           ***"<<endl;
	cout<<"                                                           ***"<<endl;
	cout<<"                                                           ***"<<endl;
	cout<<"                                               ***************************"<<endl;
	cout<<"                                               *************************** "<<endl;
	cout<<"                                               *************************** "<<endl;
	cout<<"                                                           *** "<<endl;
	cout<<"                                                           *** "<<endl;
	cout<<"                                                           *** "<<endl;
	cout<<"                                                           *** "<<endl;	                                               
	cout<<"                                                                                  POWERED BY: microsoft"<<endl;
	int choice;
    int what,pass;
    string x;
	cout<<"1) old product:else Press any key "<<endl;
    cin>>what;
    fstream fout;
    string record;
    int count,temp;
	if(what==1){
	fout.open("cpproject.txt", ios::in|ios::out|ios::app);
	while (fout) {

        getline(fout, record);
        cout<<"Record : " <<endl<< record<<endl;

}
	cout<<"rememeber this and enter the values by using enter new data ";}
	cout<<"ENTER PASSWORD: "<<endl;
	cin>>pass;
	int restart = 1;
	while(restart){
		cout<<"PRESS ANY KEY";
		cin>>x;
		system("CLS");
		cout<<"=============================================================================================================================================\n";
		cout<<"                                             PRESS 1 TO ENTER NEW DATA: \n";
		cout<<"                                             PRESS 2 TO SHOW DATA: \n";
		cout<<"                                             PRESS 3 TO SEARCH DATA: \n";
		cout<<"                                             PRESS 4 TO UPDATE DATA: \n";
		cout<<"                                             PRESS 5 TO DELETE DATA: \n";
		cout<<"                                             PRESS 6 TO EXIT DATA: \n";
		cout<<"                                             PRESS 7 TO ENTER ARRIVEL:\n";
		cout<<"                                             PRESS 8 TO SUBTRACT DATA:\n";
		cout<<"=============================================================================================================================================\n";
		for(int x=0;x<total;x++){
			cout<<enter[x].code<<"||"<<enter[x].name<<endl;
				
		}
		cin>>choice;
		
		switch(choice){
			case 1:{
				entry();
				break;
			}
			
			case 2:{
				show();
				break;
			}
			
			case 3:{
				search();
				break;
			}
			
			case 4:{
				update();
				break;
			}
			
			case 5:{
				del();
				break;
			}
			
			case 6:{
				restart = 0;
				break;
			}
			case 7:{
				add();
				break;
			}
			case 8:{
				sub();
				break;
			}
			default :{
				cout<<"Invalid Input: \n";
				break;
			}
		} 
		
	}
	cout<<"INPut File ";
	ofstream out("cpproject.txt");
	cout<< "total : " <<total<<endl;
	for(int x = 0;x<total;x++){
	
	
	out<<enter[x].code << "|" <<enter[x].name << "|" <<enter[x].max << "|" <<enter[x].stock << endl;
	}
	}
