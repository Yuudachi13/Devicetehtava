#include "devicemouse.h"

DeviceMouse::DeviceMouse():primaryButton(0)
{

}

void DeviceMouse::setPrimaryButton()
{
    cout <<"choose your primarybuttom 1-2 " <<endl;
    cin >> primaryButton;
    cout<<"  "<<endl;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
