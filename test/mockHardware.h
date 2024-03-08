#include "IHardware.h"

class MockDigital: public IHardware{
    public:
     bool IsLight(){
        return 1;
     };
    bool IsMode(){
        return 1;
    }
    bool IsStartStop(){
        return 1;
    }
    bool IsSet(){
        return 1;
    }  ;  

};