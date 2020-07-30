#include"Person.h"
#include"Car.h"
#include"DriverAccount.h"
Person Per;
Car C; 
void DriverAccount::setDriverAccountInfo() { 
    Per.setInfo();
	Per.setID();
	C.setCarInfo();
	C.setCarID();
}
void DriverAccount::getDriverAccountInfo() {
    Per.getInfo();
	C.getCarInfo();	
}
int DriverAccount::getCarIDAgain() {
	int ID=0;
	int temp=C.getIDCar(ID);
	return temp;
}



