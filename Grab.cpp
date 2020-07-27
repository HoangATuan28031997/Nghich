#include<iostream>
#include<string>
#include<ctime>
using namespace std;
class Person {
	public:
		int iD;
		string name;
		string email;
		string phoneNumber;
		bool status;
	public:
		int setID() {
			return  100000+rand()%900000;
		}
		bool checkStatus() {
			 if(status == true ) {
        	 	cout<<"User can book car "<<endl;
        		return true ;
    		 }
    		 else {
        		cout<<"User already book car , ERROR , WARNING "<<endl;
        		return false;
    		 }
		}
		void setInfo() {
            cout<<"Name = : ";
            getline(cin,this->name);
            cin.ignore();
            cout<<"Phone = : ";
            getline(cin,this->phoneNumber);
            cin.ignore();
            this->status = true ;
			cout<<"Email = : ";
            getline(cin,this->email);
            cin.ignore();
        }
		void getInfo() {
	   	    cout<<"Name : "<<this->name<<endl;
			cout<<"Email = : "<<this->email<<endl;
			cout<<"Phone = : "<<this->phoneNumber<<endl;
            cout<<"ID Driver "<<this->iD<<endl;
		}
};

class User : public Person {
	public:
		int setUserID() {
			return setID();
		}
	//	friend bool Everything_Done_For_User(User U);
		bool checkUserStatus () {
			return checkStatus();	
		}
};

class Driver : public Person {
	public:
		int setDriverIDOnly() {
			return setID();
		}
	//	friend bool Everything_Done_For_Driver(Driver D);
		bool checkDriverStatus() {
			return checkStatus();
		}
};
class Account {
	protected:
		string accountName;
		string passWord;
		string temp;
		int starVote = 0;
	public:
		void setAccountInfo() {
			cout<<"Account Name = :	";
            getline(cin,this->accountName);
            cin.ignore();
            cout<<"Password = : ";
            getline(cin,this->passWord);
            cin.ignore();
        }
		void setChangePassWord() {
			cout<<"Old Password = : ";
			getline(cin,this->temp);
			cin.ignore();
			if (this->temp == this->passWord) {
				cout<<"Now you can change password "<<endl;
				cout<<"Enter New Password";
		 		getline(cin,this->passWord);
            	cin.ignore();
			}
			else {
				cout<<"Error"<<endl;
			}
		}
		template<typename T>
		T voteStar (T starVote)
		{
			starVote += 1;
			return starVote;
		}
};

class Car {
	protected:
		string carType;
		string carColor;
		string carLicensePlates;
	public:
		int carID;
	public:
		void setCar() {
			cout<<"Car Type = : ";
            getline(cin,this->carType);
            cin.ignore();
            cout<<"CarColor = : ";
            getline(cin,this->carColor);
            cin.ignore();
            cout<<"Car Licecnse Plates = : ";
            getline(cin,this->carLicensePlates);
            cin.ignore();
            this->carID = 100000+rand()%900000;
		}
		void getCar() {
			cout<<"Car Type : "<<this->carType<<endl;
            cout<<"Car Color : "<<this->carColor<<endl;
            cout<<"Car License Plates : "<<this->carLicensePlates<<endl;
            cout<<"Car ID "<<this->carID<<endl;

		}
};

class UserAccount : public Account{
	protected:
		int userRealTimeLocation = 0 ;//link  GG map
		int userStarVote = 0;
	public:
		void setUserAccountInfo() {
			this->setAccountInfo();
			User U;
			U.setInfo();
		}			
		void getUserAccountInfo() {
			User U;
			U.getInfo();
		}
};

class DriverAccount : public Account {
	protected:
		int driverRealTimeLocation = 0;//link  GG map
		int driverStarVote =0 ;
	public:
		void setDriverAccountInfo() {
			this->setAccountInfo();
			Driver D;
			D.setInfo();
			Car C;
			C.setCar();
		}
		void getDriverAccountInfo() {
			Driver D;
            D.getInfo();
            Car C;
            C.getCar();
		}
};

class Location {
    public :
        int location = 1 ;

    public :
        void getLocationByGoogleMap() {
            this->location = 1;//link  googlemap 
        }
};

class MoneyTrade {
    private :
        int moneyPerKm = 1 ;
        int discount = 0;

    public :
        int getMoneyTrade() {
			Location l;
            return (l.location / this->moneyPerKm) - this->discount ;
        }
};

class Bank {
    public: 
        int bill ;
    public : 
        void bankTrade() {
            MoneyTrade moneyTradeTest;
            this->bill = moneyTradeTest.getMoneyTrade();
        }
};

class Out {
	public:
		void programOut(){
			cout<<"BB"<<endl;
		}
};

class BookGrab {
	public:
		void setBookGrab() {
			UserAccount userAccount;
			DriverAccount driverAccount;
			cout<<"Pick up the car you want "<<endl;
			driverAccount.getDriverAccountInfo();
		}
};

class BookGrabSuccess : public BookGrab {
    public :
        void bookSuccess() {
            Bank bankTest;
            bankTest.bankTrade();
            Location googleMapFake;
            googleMapFake.getLocationByGoogleMap();
			User user;
            Driver driver;
            user.status = false;
            driver.status = false;
        }
};
class BookGrabFailed{
    public:
        int againOrOut ;
    public:
        void bookFailed() {
            cout<<"Again (1) Or Out (2) ";
            cin>>againOrOut ;
			BookGrab bookGrabTest;
			Out outApp;
                switch (againOrOut) {
                    case 1 :
                        bookGrabTest.setBookGrab();
                        break;
                    case 2 :
                        outApp.programOut();
						break;
                }
        }
};
class WaittingBookGrab : public BookGrab , public BookGrabFailed{
	protected:
		int chooseCar ;
	public:
		void waiting() {
			Car car;
			cout<<"ID Car "<<car.carID<<endl;
			cout<<"search and choose by ID Car"<<endl;
			cin>>chooseCar;
			if(this->chooseCar == car.carID) {
				BookGrabSuccess bookGrabSuccessTest;
				bookGrabSuccessTest.bookSuccess();
				cout<<"Booking Success "<<endl;
			}
			else {
				cout<<"Didn't find any ID car like you enter "<<endl;
				this->bookFailed();
			}
		}
};
class Done : public BookGrabSuccess {
	public :
		void allDone() {
			Driver driver;
			User user;
			user.status = true;
    		driver.status = true;
		}
};
class UnBook : public BookGrabSuccess , public BookGrabFailed {
	public:
		void deniedCar() {
			Driver driver;
            User user;
            user.status = true;
            driver.status = true;

			this->bookFailed();
		}
};
int main()
{	
	srand((int)time(0));
	User user;
	Driver driver;
	Car car;
	cout<<"User Setting "<<endl;
	user.setInfo();
	cout<<"Driver Setting "<<endl;
	driver.setInfo();
	car.setCar();
	driver.getInfo();
	car.setCar();
	cout<<"When you book Grab "<<endl;
	BookGrab book;
	book.setBookGrab();
	WaittingBookGrab wait;
	wait.waiting();
	if (wait.againOrOut == 1 )
	{
		wait.waiting();
	}
	int switchCase ;
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
	}
	return 0;
}
