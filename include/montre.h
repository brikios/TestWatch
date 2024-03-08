#include "afficheur.h"
#include "heure.h"
#include "chrono.h"
#include "IHardware.h"
enum MontreStates{

    ModeAffichage,
    ModeChrono,
    ModeReglage,
};

enum LightStates{
    LightOn,
    LightOff,
};

enum ModeChronoStates{
    Started,
    Stopped,
};

enum ModeReglageStates{
    SecondSetting,
    MinuteSetting,
    HourSetting
};

class Montre: public IHardware {
    
    private:
    
    IHardware* _hardware;
    bool isTimerLightActive = false;
    bool flagAffichage = false;
    public:

    Montre(IHardware* hardware) : _hardware(hardware) {
        _hardware=hardware;
    }

    
    MontreStates MontreState ;
    LightStates LightState;
    ModeChronoStates ChronoState;
    ModeReglageStates ReglageState;

    Afficheur afficheur;
    Heure heure;
    Chrono chrono;

    volatile bool flagTimerLight =false;
    volatile bool flagTimerAffichage =false;


    void FsmMontre();
    void FsmModeChrono();
    void FsmModeLight();
    void FsmModeReglage();
    void FsmModeAffichage();
    
    void ActivateLight();
    void DiactivateLight();
    
    void StartTimerLight2s();
    void StopTimerLight2s();
    bool IsTimerLight2sActive();
    bool IsEndTimerLight2s();
    
    void ArmerTimerMajHeure1s();
    bool IsEndTimerMajHeure1s();
};

