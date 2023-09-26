#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass():deviceID(0)
{


}

void DeviceBaseClass::setDeviceID()
{
    cout <<"Give ID for your device" <<endl;
    cin >> deviceID;

}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
