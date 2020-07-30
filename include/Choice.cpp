#include<iostream>
#include"UnBook.h"
#include"Done.h"
#include"Choice.h"
using namespace std;
void Choice::event() {
	UnBook deniedCar;
  	Done allDone;
	int switchCase ;
	cout<<"your choice 1.Denied , 2.Success (test ver only :D)"<<endl;
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
}

