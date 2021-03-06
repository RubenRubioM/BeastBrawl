/**
 * Beast Brawl
 * Game created as a final project of the Multimedia Engineering Degree in the University of Alicante.
 * Made by Clover Games Studio, with members 
 * Carlos de la Fuente Torres delafuentetorresc@gmail.com,
 * Antonio Jose Martinez Garcia https://www.linkedin.com/in/antonio-jose-martinez-garcia/,
 * Jesús Mas Carretero jmasc03@gmail.com, 
 * Judith Mula Molina https://www.linkedin.com/in/judith-mm-18099215a/, 
 * Rubén Rubio Martínez https://www.linkedin.com/in/rub%C3%A9n-rubio-mart%C3%ADnez-938700131/, 
 * and Jose Valdés Sirvent https://www.linkedin.com/in/jose-f-valdés-sirvent-6058b5a5/ github -> josefrvaldes
 * 
 * 
 * @author Clover Games Studio
 * 
 */
 
 
 #include "StateEndRace.h"
#include <iostream>

using namespace std;

StateEndRace::StateEndRace(){

    //std::cout << "> ENDRACE constructor" << std::endl;

    // Inicializamos las facadas
    renderEngine = RenderFacadeManager::GetInstance()->GetRenderFacade();
    inputEngine = InputFacadeManager::GetInstance()->GetInputFacade();
    //renderFacadeManager->InitializeIrrlicht();

    renderEngine->FacadeInitEndRace();
    InitState();

}

void StateEndRace::InitState() {

    if (!soundEngine){
        soundEngine = SoundFacadeManager::GetInstance()->GetSoundFacade();
    }
    soundEngine->SetState(5);
}


void StateEndRace::Render(){
    renderEngine->FacadeBeginScene();
    renderEngine->FacadeDrawEndRace();
    renderEngine->FacadeEndScene();
}


void StateEndRace::Input(){
    renderEngine->FacadeCheckInputEndRace();
    //inputEngine->CheckInputEndRace();
}


void StateEndRace::Update(){
    EventManager::GetInstance().Update();

}