/**********************************************************************
 *  Clara Greer                                                       *
 *  1 / 27 / 23                                                       *
 *  CPTS 223                                                          *
 *  PA1 - Linked List Reveiw                                          *
 *  commandList.cpp                                                   *
 *                                                                    *
 *********************************************************************/
#include "commandList.h"

/**********************************************************************
 *  Comlist constructor                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  This creates the list of the commands found in the commands.csv   
 *                                                                    
 *********************************************************************/
ComList::ComList()
{
    this->head = nullptr;

    std::fstream comFile;
    comFile.open("commands.csv");

    std::string temp = "temp", tCom = "", tDef = "";
    int tPoi = 0;

    while(temp != "")
    {

    std::getline(comFile, temp);    // gets line from file
    
    std::stringstream ss;           // sets the ss to that line
    ss << temp;

	std::getline(ss, temp, ',');    // gets the command
	tCom = temp;

	std::getline(ss, temp, ',');    // gets the definition
    tDef = temp;

    ss << tPoi;                     // gets the points
    
    insertNode(tCom, tDef, tPoi);

    }

    comFile.close();
}

/**********************************************************************
 *  comlist destructor                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  COME BACK HERE           
 *                                                                    
 *********************************************************************/
ComList::~ComList()
{

}

/**********************************************************************
 *  insertNode                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  Inserts a new node with given info :string command, string def, 
 *  int points           
 *                                                                    
 *********************************************************************/
void ComList::insertNode(std::string command, std::string def, int points)
{
    Node* cur = head;

    Node* n = new Node();
    n->setCommmandData(new Data(command, def, points));

    if(head == nullptr)
    {
        head = n;
    }
    else
    {
        while(cur->getNext() != nullptr)
        {
            cur = cur->getNext();
        }

        cur->setNext(n);
        cur->getNext()->setNext(nullptr);
    }
}

/**********************************************************************
 *  deleteNode                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  deletes a node in the list, finding the certain node by given 
 *  command            
 *                                                                    
 **********************************************************************/
void ComList::deleteNode(std::string command)
{
    Node* cur = head;

    if(cur == nullptr)
    {

    }
    else
    {
        while(cur->getNext()->getCommandData()->getCom() != command)
        {
            cur = cur->getNext();
        }

        Node* temp = cur->getNext();
        cur->setNext(nullptr);
        delete temp;
    }

}

bool ComList::search(std::string command)
{
    Node* cur = head;

    if(cur == nullptr)
    {

    }
    else
    {
        while(cur->getNext() != nullptr)
        {
            if (cur->getCommandData()->getCom() == command)
            {
                return true;
            }
            cur = cur->getNext();
        }
        
    }
    return false;
}

/**********************************************************************
 *  printComList                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  prints the list of commands, definition and points            
 *                                                                    
 *********************************************************************/
void ComList::printComList()
{
    Node* cur = head;
    std::cout << "Command name, command definition, command points" << std::endl;

    while(cur != nullptr)
    {
        std::cout << cur->getCommandData()->getCom() << ", ";
        std::cout << cur->getCommandData()->getDef() << ", ";
        std::cout << cur->getCommandData()->getPoints();
        std::cout << std::endl;

        cur = cur->getNext();
    }
}

/**********************************************************************
 *  Setters and Getters                                               
 *  1 / 27 / 23                                                       
 *                                                                    
 *  getHead -> returns head pointer                                   
 *  setHead -> takes given newHead and assigns it to head             
 *                                                                    
 *********************************************************************/
Node* ComList::getHead()
{
    return head;
}
void ComList::sethead(Node* newHead)
{
    head = newHead;
}