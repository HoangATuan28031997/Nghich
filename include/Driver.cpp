#include<iostream>
#include"Driver.h"
using namespace std;
	bool Driver::checkDriverStatus() {
		if(driverStatus == true) {
			cout<<"Driver can get Customer"<<endl;
			return true ;
		}
		else {
			cout<<"Driver Busy "<<endl;
			return false;
		}
	}
	void Driver::changeDriverStatus() {
		this->driverStatus = !this->driverStatus;
	}
