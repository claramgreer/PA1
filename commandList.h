/**********************************************************************
 *  Clara Greer                                                       *
 *  1 / 27 / 23                                                       *
 *  CPTS 223                                                          *
 *  PA1 - Linked List Reveiw                                          *
 *  commandList.h                                                     *
 *                                                                    *
 *********************************************************************/
#include "node.h"

class ComList
{
public:
ComList();
~ComList();

void insertNode(std::string command, std::string def, int points);
void deleteNode(std::string command);
bool search(std::string command);

void printComList();

Node* getHead();
void sethead(Node* newHead);

private:
Node* head;

};
