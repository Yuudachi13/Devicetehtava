#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicetouchpad.h"
#include "devicemouse.h"
#include "devicedisplay.h"


class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();

private:

   DeviceMouse* oMouse = new DeviceMouse();
   DeviceTouchPad* oTouchPad = new DeviceTouchPad();
   DeviceDisplay* oDisplay = new DeviceDisplay();


};

#endif // MYDEVICEUI_H
