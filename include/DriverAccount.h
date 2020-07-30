#pragma once
#include"Car.h"
#include"Driver.h"
#include"Account.h"
using namespace std;
class DriverAccount : public Account {
	protected:
		int driverRealTimeLocation = 0;
	public:
		void setDriverAccountInfo() ;
		void getDriverAccountInfo() ;
		int getCarIDAgain();
};
