#include"BookGrabSuccess.h"
#include"User.h"
#include"Driver.h"
	void BookGrabSuccess::bookSuccess() {
    	User user;
        Driver driver;
        user.changeUserStatus();
        driver.changeDriverStatus();
    }

