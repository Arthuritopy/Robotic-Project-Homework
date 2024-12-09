#ifndef FSM_H
#define FSM_H

#include "Motors.h"
#include "Ultrasonic.h"

enum RobotState {
    Idle,
    ObstacleDetected,
    RunForward,
    RunBackward,
    Stop
};

class FSM {
public:
    FSM();               // Constructeur
    void init();         // Initialisation de la FSM
    void run();          // Exécuter la logique de la FSM
    
private:
    RobotState state;    // État actuel
    void handleState();  // Gérer les transitions d'état
};

#endif