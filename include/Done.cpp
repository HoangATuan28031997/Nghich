#include"Driver.h"
#include"User.h"
#include"Done.h"
void Done::allDone() {
	Driver driver;
	User user;
	user.changeUserStatus();
	driver.changeDriverStatus();
}

