#include"Person.h"
 
void Person::setInfo() {
	cout<<"Name = : ";
    getline(cin,this->name);
    cin.ignore();
    cout<<"Phone = : ";
    getline(cin,this->phoneNumber);
    cin.ignore();
    cout<<"Email = : ";
    getline(cin,this->email);
	cin.ignore();
	cout<<"Bank Account = : ";
	getline(cin,this->bankAccount);
	cin.ignore();
	cout<<"Age = : ";
	cin>>this->age;
}

void Person::getInfo() {
	cout<<"Name : "<<this->name<<endl;
    cout<<"Email = : "<<this->email<<endl;
    cout<<"Phone = : "<<this->phoneNumber<<endl;
	cout<<"Bank Account = : "<<this->bankAccount<<endl;
}
