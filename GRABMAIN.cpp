#include"include/Account.h"
#include"include/BookGrab.h"
#include"include/BookGrabFailed.h"
#include"include/BookGrabSuccess.h"
#include"include/Car.h"
#include"include/Choice.h"
#include"include/Done.h"
#include"include/Driver.h"
#include"include/DriverAccount.h"
#include"include/Out.h"
#include"include/Person.h"
#include"include/UnBook.h"
#include"include/User.h"
#include"include/UserAccount.h"
#include"include/WaittingBookGrab.h"
//#include"include/"
int main() {
	srand((int)time(0));
	UserAccount userAccount;
	DriverAccount driverAccount;
	cout<<"User Setting "<<endl;
    userAccount.setUserAccountInfo();
    cout<<"Driver Setting "<<endl;
    driverAccount.setDriverAccountInfo();
	cout<<"User's User Interface "<<endl;
	userAccount.getUserAccountInfo();
	cout<<"Driver's User Interface "<<endl;
	driverAccount.getDriverAccountInfo();
    cout<<"When you book Grab "<<endl;
    BookGrab book;
    book.setBookGrab();
    WaittingBookGrab wait;
    wait.waitting();
    if (wait.againOrOut == 1 )
    {
        wait.waitting();
    }
/*    int switchCase ;
    UnBook deniedCar;
    Done allDone;
    cin>>switchCase;
    switch (switchCase) {
        case 1 :
            cout<<"denied car"<<endl;
            deniedCar.deniedCar();
            break;
        case 2 :
            cout<<"Success"<<endl;
            allDone.allDone();
            break;
    }*/
	return 0;
}
