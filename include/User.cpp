#include<iostream>
#include"User.h"
using namespace std; 
    bool User::checkUserStatus() {
        if(userStatus == true) { 
            cout<<"User can book car "<<endl;
            return true ;
        } 
        else {
            cout<<"User already book car , ERROR , WARNING "<<endl;
            return false;
        }
    }
	void User::changeUserStatus() {
		this->userStatus = !this->userStatus;
	}
    


