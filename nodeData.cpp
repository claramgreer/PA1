/**********************************************************************
 *  Clara Greer                                                       *
 *  1 / 27 / 23                                                       *
 *  CPTS 223                                                          *
 *  PA1 - Linked List Reveiw                                          *
 *  node.cpp                                                          *
 *                                                                    *
 *********************************************************************/
#include "nodeData.h"

/**********************************************************************
 *  Node()                                                            *
 *  1 / 27 / 23                                                       *
 *                                                                    *
 *  Constructor for Node, initializes command and def                 *
 *                                                                    *
 *********************************************************************/
Data::Data()
{
    this->command = "";
    this->def = "";
    this->points = 0;
}

Data::Data(std::string newCom, std::string newDef, int newPoints)
{
    this->command = newCom;
    this->def = newDef;
    this->points = newPoints;
}



/**********************************************************************
 *  Node()                                                            *
 *  1 / 27 / 23                                                       *
 *                                                                    *
 *  Deconstructor for Node                                            *
 *                                                                    *
 *********************************************************************/
Data::~Data()
{

}

/**********************************************************************
 *  Setters and Getters                                               *
 *  1 / 27 / 23                                                       *
 *                                                                    *
 *  getCom -> returns command                                         *
 *  setCom -> takes given newCom name and sets command to it          *
 *                                                                    *
 *  getDef -> returns def (definition)                                *
 *  setDef -> takes given newDef and sets def to it                   *
 *                                                                    *
 *  getPoints -> returns points                                       *
 *  setPoints -> takes given newPoints and sets points to it          *
 *                                                                    *
 *********************************************************************/

std::string Data::getCom()
{
    return command;
}
void Data::setCom(std::string newCom)
{
    command = newCom;
}

std::string Data::getDef()
{
    return def;
}
void Data::setDef(std::string newDef)
{
    def = newDef;
}

int Data::getPoints()
{
    return points;
}
void Data::setPoints(int newPoint)
{
    points = newPoint;
}
