#include<iostream>
#include"Person.h"
using namespace std;
void Person::setInfo() {
	cout<<"Name = : ";
    getline(cin,this->name);
    cout<<"Phone = : ";
    getline(cin,this->phoneNumber);
	cout<<"Age = : ";
	cin>>this->age;
	cin.ignore();
	cout<<"Email = : ";
    getline(cin,this->email);

}
int Person::setID() {
    this->humanID=10000+rand()%90000;
}

void Person::getInfo() {
	cout<<"Name : "<<this->name<<endl;
    cout<<"Email = : "<<this->email<<endl;
    cout<<"Phone = : "<<this->phoneNumber<<endl;
	cout<<"Age = : " <<this->age<<endl;
	cout<<"ID = : " <<this->humanID<<endl;
}
int Person::getID(int ID) {
	ID = this->humanID;
	return ID;
}
