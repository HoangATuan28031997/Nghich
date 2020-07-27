#include"Person.h":
	int Person::setUserID() {
    	userID = 100000+rand()%900000;
        return userID;
    }
    bool Person::checkStatus() {
		if(status == true ) { 
			cout<<"User can book car "<<endl;
            return true ;
        } 
        else {
            cout<<"User already book car , ERROR , WARNING "<<endl;
            return false;  
        }
    }



