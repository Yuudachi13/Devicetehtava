#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{

}

MyDeviceUI::~MyDeviceUI()
{
    delete oMouse;
    delete oTouchPad;
    delete oDisplay;
}

void MyDeviceUI::uiShowMenu()
{
    int valinta;
    do
     {

    cout<<"DEVICE MENU"<<endl;
    cout<<"==========="<<endl;

    cout<<"1: Set Mouse Information"<<endl;
    cout<<"2: Set Touch Pad Information"<<endl;
    cout<<"3: Set Display Information"<<endl;
    cout<<"4: Show Devices Information"<<endl;
    cout<<"5: Finish Him" <<endl;

    cout<<"Choose:"<<endl;
    cin>> valinta;
    cout <<" "<<endl;

    switch(valinta)
    {
        case 1:
            uiSetMouseInformation();
            break;
        case 2:
            uiSetTouchPadInformation();
            break;
        case 3:
            uiSetDisplayInformation();
             break;
        case 4:
            uiShowDeviceInformation();
            break;
        case 5:
            cout<<"Fatality bye"<<endl;
            break;
        default:
            cout<<"error try again"<<endl;
            break;
    }
    }while (valinta != 5);



}

void MyDeviceUI::uiSetMouseInformation()
{
    cout<<"SET MOUSE INFORMATION"<<endl;
    cout<<"====================="<<endl;
    oMouse->setDeviceID();
    oMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout<<"SET TOUCHPAD INFORMATION"<<endl;
    cout<<"========================"<<endl;
    oTouchPad->setDeviceID();
    oTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout<<"SET DISPLAY INFORMATION"<<endl;
    cout<<"======================="<<endl;
    oDisplay->setDeviceID();
    oDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout<<"DEVICE INFORMATION"<<endl;
    cout<<"=================="<<endl;
    cout<<"Mouse ID = "<<oMouse->getDeviceID()<<" MousePrimaryButton= "<<oMouse->getPrimaryButton()<<endl;
    cout<<"TouchPad ID = "<<oTouchPad->getDeviceID()<<" TouchPadsensitivity = "<<oTouchPad->getTouchPadSensitivity()<<endl;
    cout<<"Display ID = "<<oDisplay->getDeviceID()<<" Displayresolution = "<<oDisplay->getDisplayResolution()<<endl;
    cout<<"   "<<endl;
}
