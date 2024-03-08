#include <Arduino.h>
#include "bspMontre.h"
#include "IHardware.h"
class ArduinoHardware:public IHardware{
public:
   bool IsLight(){
    return digitalRead(LIGHT_BUTTON);
   };
   bool IsMode(){
    return digitalRead(MODE_BUTTON);
   }
   bool IsStartStop(){
    return digitalRead(STARTSTOP_BUTTON);
   }
   bool IsSet(){
    return digitalRead(SET_BUTTON);
   }
};

