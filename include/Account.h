#pragma once
#include<iostream>
#include<string>
using namespace std;
class Account {
    protected:
        string accountName;
        string passWord;
        string temp;
        int starVote = 0 ;
    public:
        void setAccountInfo()  ;
		void getAccountInfo()  ;
        void changePassWord() ;
        int voteStar(int starVote) ;
};                                    
