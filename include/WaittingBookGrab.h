#pragma once
#include"BookGrabSuccess.h"
#include"BookGrabFailed.h"
#include"Car.h"
using namespace std;
class WaittingBookGrab : public BookGrabSuccess, public BookGrabFailed {
	protected:
		int chooseCar;
	public:
		void waitting() ;
};
