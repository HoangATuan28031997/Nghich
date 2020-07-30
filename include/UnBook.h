#pragma once
#include"BookGrabSuccess.h"
#include"BookGrabFailed.h"
using namespace std;
class UnBook : public BookGrabSuccess , public BookGrabFailed {
	public :
		void deniedCar() ;
};
