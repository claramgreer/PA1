/**********************************************************************
 *  Clara Greer                                                       *
 *  1 / 27 / 23                                                       *
 *  CPTS 223                                                          *
 *  PA1 - Linked List Reveiw                                          *
 *  nodeData.h                                                        *
 *                                                                    *
 *********************************************************************/
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

class Data
{
public:
Data();
Data(std::string newCom, std::string newDef, int newPoints);
~Data();

std::string getCom();
void setCom(std::string newCom);

std::string getDef();
void setDef(std::string newDef);

int getPoints();
void setPoints(int newPoint);

private:
std::string command; // command name
std::string def;     // command definition
int points;     // command points

};