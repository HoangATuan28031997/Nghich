#pragma once
#include"Person.h"
using namespace std;
class Driver : public Person {
	protected:
		bool driverStatus;
	public:
		bool checkDriverStatus();
		void changeDriverStatus();
};
