#include"Person.h":
using namespace std;
class User : public Person {
	protected:
		int userID;
		bool userStatus;
	public:
		int setUserID() { 
			userID = 100000+rand()%900000;
			return userID;
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

}
