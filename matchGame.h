/**********************************************************************
 *  Clara Greer                                                       *
 *  1 / 27 / 23                                                       *
 *  CPTS 223                                                          *
 *  PA1 - Linked List Reveiw                                          *
 *  matchGame.h                                                       *
 *                                                                    *
 *********************************************************************/
#include "commandList.h"

class MatchGame
{
public:
MatchGame();
~MatchGame();

void menu();
void gameRules();

void newGame();
void loadGame();
void playGame();

void addCom();
void removeCom();
void displayCom();

void exitAndSave();

private:
ComList* comlist;
// player array?
};