#pragma once
#include<string> 
using namespace std;
class Car {
    protected:
        string carType;
        string carColor;
        string carLicensePlates;
        int carID;
	public:
		void setCarInfo();
		int setCarID();
		void getCarInfo();
		int getIDCar(int ID);
};

