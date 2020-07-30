#include<iostream>
#include"WaittingBookGrab.h"
#include"BookGrabSuccess.h"
#include"DriverAccount.h"
using namespace std;
void WaittingBookGrab :: waitting() { 
    DriverAccount driverAccount;        
	int choose;
	cout<<"ID Car "<<driverAccount.getCarIDAgain()<<endl;
    cout<<"search and choose by ID Car"<<endl;
	cin>>chooseCar;
	if(this->chooseCar ==driverAccount.getCarIDAgain()) {
		this->bookSuccess();
		cout<<"Booking Success "<<endl;            
	}
    else {
		cout<<"Didn't find any ID car like you enter "<<endl;
        this->bookFailed();
    }
}
