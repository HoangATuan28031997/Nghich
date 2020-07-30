#pragma once
#include<string>
using namespace std;
class Person {
    protected :
        string name;
        string email;
        string bankAccount;
		string phoneNumber;
        int age;
		int humanID ;
    public:
        void setInfo() ;
		int setID();
		void getInfo();
		int getID(int ID);
}; 
