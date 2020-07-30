#include<iostream>
#include"BookGrabFailed.h"
#include"WaittingBookGrab.h"
#include"Out.h"
using namespace std;
	void BookGrabFailed::bookFailed() {
    	cout<<"Again (1) Or Out (2) ";
        cin>>againOrOut ;
        Out outApp;
		WaittingBookGrab wait;
        	switch (againOrOut) {
            	case 1 :
                	wait.waitting();
                    break;
                case 2 :
                    outApp.programOut();
                    break;
            }
    }

