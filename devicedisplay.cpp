#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay():displayResolution(0)
{

}

void DeviceDisplay::setDisplayResolution()
{
    cout <<"Choose your displayresolution 1-10" <<endl;
    cin >> displayResolution;
    cout <<" "<<endl;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
