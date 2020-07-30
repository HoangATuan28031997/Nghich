#include"Account.h"
using namespace std;
	int Account::voteStar(int starVote) {
		    int choose ;
            cin>>choose ;
            switch (choose) { 
					case -5:case -4:case -3:case -2:case -1:case 0:case 1:case 2:case 3:case 4:case 5:
                    starVote += choose;
                    break;
                default :
                    cout<<"error"<<endl;
                    break;
            }
	};
	void Account::setAccountInfo() {
            cout<<"Account Name = : ";
            getline(cin,this->accountName);
            cout<<"Password = : ";
            getline(cin,this->passWord);

	};
	void Account::getAccountInfo() {
			cout<<"Account Name = : "<<this->accountName<<endl;
			cout<<"Password = : "<<this->passWord<<endl;
	};
    void Account::changePassWord() {
            cout<<"Old Password = : ";
            getline(cin,this->temp);
            if (this->temp == this->passWord) {
                cout<<"Now you can change password "<<endl;
                cout<<"Enter New Password";
                getline(cin,this->passWord);
            }
            else {
                cout<<"Error"<<endl;
            }
    };

