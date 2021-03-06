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
 * @author Carlos de la Fuente Torres <delafuentetorresc@gmail.com>
 * @author Antonio Jose Martinez Garcia
 * 
 */
 
 
 #pragma once



#include <iostream>
#include <memory>
#include <vector>

#include "SystemAI.h" 

using namespace std;

struct selector;
struct CarAI;
struct Manager;
struct ManCar;
struct SystemFuzzyLogicAI;
struct SteeringBehaviours;
struct CLPhysics;

class SystemBtLoDMove : public SystemAI{
   public:
      SystemBtLoDMove();
      ~SystemBtLoDMove(){};

      void init();
      void update(CarAI* actualCar) override;

      void AddManager(Manager &);
      void AddCLPhysicsSB(CLPhysics* clPhysics);
      void InitFuzzyLogic(ManCar &);

      int getFrecuency(){ return frec; };


   private:
      shared_ptr<selector> selectorBehaviourTree;
      //shared_ptr<SystemFuzzyLogicAI> fuzzyLogic;
      shared_ptr<SteeringBehaviours> steeringBehaviours;

      vector<Manager *> managers;
      //bool entradoFL = false;

      int frec {1};

};