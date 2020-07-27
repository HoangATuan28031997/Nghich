#include"Grab.cpp"
int main()
{
    srand((int)time(0));
    userAccount user;
    driverAccount driver;
    cout<<"User Setting "<<endl;
    user.setAccountInfo();
    cout<<"Driver Setting "<<endl;
    driver.setAccountInfo();
    list(driver);
    cout<<"When you book Grab "<<endl;
    bookGrab book;
    book.setBookGrab();
    waittingBookGrab wait;
    wait.waiting();
    if (wait.againOrOut == 1 )
    {
        wait.waiting();
    }
    int switchCase ;
    unBook deniedCar;
    done allDone;
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

