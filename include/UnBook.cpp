#include"UnBook.h"
#include"Driver.h"
#include"User.h"
void UnBook :: deniedCar() {
	Driver driver;
    User user;
	user.changeUserStatus();
	driver.changeDriverStatus();
    this->bookFailed();
}
