#include<iostream>
#include"Car.h"
using namespace std;
	void Car::setCarInfo() {
		cout<<"Car Type = : ";
 		getline(cin,this->carType);
        cout<<"Car Color = : ";
        getline(cin,this->carColor);
        cout<<"Car Licecnse Plates = : ";
        getline(cin,this->carLicensePlates);
    }
	int Car::setCarID() {
		this->carID = 1000+rand()%9000;
	}
    void Car::getCarInfo() {
    	cout<<"Car Type : "<<this->carType<<endl;
        cout<<"Car Color : "<<this->carColor<<endl;
        cout<<"Car License Plates : "<<this->carLicensePlates<<endl;
        cout<<"Car ID "<<this->carID<<endl;
    }
	int Car::getIDCar(int ID) {
		ID = this->carID ;
		return ID ;
	}
		

