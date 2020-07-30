#include"Person.h"
#include"UserAccount.h"
Person P;
void UserAccount::setUserAccountInfo() {
	P.setInfo();
	P.setID();
}
void UserAccount::getUserAccountInfo() {
    P.getInfo();
}

