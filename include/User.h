#pragma once
#include"Person.h"
#include<string>
using namespace std;
class User : public Person {
    protected:
        bool userStatus;
    public:
        bool checkUserStatus();
		void changeUserStatus();
};


