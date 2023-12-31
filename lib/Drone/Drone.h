#ifndef DRONE_H
#define DRONE_H
#include <ESP32Servo.h>
class Drone {
    public:
        // ESC declaration
        Servo ESC;
        Servo ESC2;
        Servo ESC3;
        Servo ESC4;

        int speedVal;
        
        int potPin1;
        int motorPin1;

        //Declare btn
        int landBtn;
        

        //function declaration
        void droneInit();
        void controlESC();
        void btnInit(); // 4 btn for 4 different directions
        void stopDrone(bool state);
        void setInterupt();
        
};
#endif