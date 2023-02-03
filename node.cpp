/**********************************************************************
 *  Clara Greer                                                       *
 *  1 / 27 / 23                                                       *
 *  CPTS 223                                                          *
 *  PA1 - Linked List Reveiw                                          *
 *  node.cpp                                                          *
 *                                                                    *
 *********************************************************************/
#include "node.h"

/**********************************************************************
 *  Node()                                                            *
 *  1 / 27 / 23                                                       *
 *                                                                    *
 *  Constructor for Node, initializes commandData and next            *
 *                                                                    *
 *********************************************************************/
Node::Node()
{
    this->next = nullptr;
    this->commandData = nullptr;
}

/**********************************************************************
 *  Node()                                                            *
 *  1 / 27 / 23                                                       *
 *                                                                    *
 *  Deconstructor for Node                                            *
 *                                                                    *
 *********************************************************************/
Node::~Node()
{

}

/**********************************************************************
 *  Setters and Getters                                               *
 *  1 / 27 / 23                                                       *
 *                                                                    *
 *  getCommandData -> returns command data                            *
 *  setCommandData -> takes given newCom and asigns it to data        *
 *                                                                    *
 *  getNext -> returns next                                           *
 *  setNext -> takes given newNext and assigns it to next             *
 *                                                                    *
 *********************************************************************/
Data* Node::getCommandData()
{
    return commandData;
}
void Node::setCommmandData(Data* newCom)
{
    commandData = newCom;
}

Node* Node::getNext()
{
    return next;
}
void Node::setNext(Node* newNext)
{
    next = newNext;
}
