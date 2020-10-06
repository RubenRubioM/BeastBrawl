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
 
 
 #pragma once

#include "Component.h"

#include <glm/vec3.hpp>
#include <string>
#include <iostream>

using namespace std;
//using namespace glm;

class CPosDestination : public Component
{
public:
    CPosDestination();
    CPosDestination(glm::vec3 _pos, int _type,int _id);
    CPosDestination(glm::vec3 _pos, int _type,int _id, float _radious);
    ~CPosDestination();

    glm::vec3 position;
    int id;
    float radious;
    //int type;
    // tenemos varios tipos:
    // 0 : cuando el destino es un nodo
    // 1 : cuando el destino es un Totem o un coche 
};