#pragma once
#include"Account.h"
using namespace std;
class UserAccount : public Account{
    protected:
        int userRealTimeLocation = 0 ;
	public:
		void setUserAccountInfo() ;
		void getUserAccountInfo() ;
};
