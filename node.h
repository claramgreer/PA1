/**********************************************************************
 *  Clara Greer                                                       *
 *  1 / 27 / 23                                                       *
 *  CPTS 223                                                          *
 *  PA1 - Linked List Reveiw                                          *
 *  node.h                                                            *
 *                                                                    *
 *********************************************************************/
#include "nodeData.h"

class Node
{
public:
Node();
~Node();

Data* getCommandData();
void setCommmandData(Data* newCom);

Node* getNext();
void setNext(Node* newNext);

private:
Data* commandData;  // pointer to data
Node* next;         // pointer to next node

};
