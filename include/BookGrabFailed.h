#pragma once
#include"BookGrab.h"
using namespace std;
class BookGrabFailed : public BookGrab {
	public:
		int againOrOut ;
    public:
        void bookFailed(); 
};
