/**********************************************************************
 *  Clara Greer                                                       *
 *  1 / 27 / 23                                                       *
 *  CPTS 223                                                          *
 *  PA1 - Linked List Reveiw                                          *
 *  matchGame.cpp                                                     *
 *                                                                    *
 *********************************************************************/
#include "matchGame.h"

/**********************************************************************
 *  MatchGame                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  Match game constructor, just gets the list of commands ready.            
 *                                                                    
 *********************************************************************/
MatchGame::MatchGame()
{
    


}

/**********************************************************************
 *  ~MatchGame                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  MatchGame destructor            
 *                                                                    
 *********************************************************************/
MatchGame::~MatchGame()
{

}

/**********************************************************************
 *  menu                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  Displays the menu for the game, and will direct you to what you 
 *  choose.           
 *                                                                    
 *********************************************************************/
void MatchGame::menu()
{
    int option = 0;

    while(1)
    {
    std::cout << "\t\tMain Menu \n"
                 "\n\t1. Game Rules"
                 "\n\t2. Play New Game"
                 "\n\t3. Load Past Game"
                 "\n\t4. Add Command"
                 "\n\t5. Remove Command"
                 "\n\t6. Display All Commands"
                 "\n\t7. Save and Exit"
                 "\n\n\toption: ";
    std::cin >> option; 

    if(option == 1) // rules
    {
        gameRules();
    }
    else if(option == 2) // new game
    {

    }
    else if(option == 3) // load game
    {

    }
    else if(option == 4) // add command
    {
        addCom();
    }
    else if(option == 5) // delete command
    {
        removeCom();
    }
    else if(option == 6) // displays command
    {
        //displayCom();
    }
    else if(option == 7) // save and exit
    {
        exit(0);
    }
    else
    {
        std::cout << "Option not available" << std::endl;
    }        
    }

    
}

/**********************************************************************
 *  gameRules                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  prints rules to the game and explination           
 *                                                                    
 *********************************************************************/
void MatchGame::gameRules()
{
    std::cout << "\n\n\t\tRULES:\n"
                 "\tThis is a linix command matching game, and its very sinple to play!\n"
                 "\tIf its your first time playing you will start a new game, after inputing\n"
                 "\tyour name you will choose how many commands you want to be quized with.\n"
                 "\tAfter that the quiz will begin! The game will show you a linix command\n"
                 "\tand three different definitions to choose from. You will guess which\n"
                 "\tdefinition you believe is correct by typing in the number to the left \n"
                 "\tof the definition(1,2,or 3). If you got the answer correct the amount\n"
                 "\tof points that the command gives will be added to your score, and if it\n"
                 "\tis wrong you will have those point taken away from your score. This will\n"
                 "\tcontinue for as many times as you specified, keeping track of all your\n" 
                 "\tpoints.\n";
}

/**********************************************************************
 *  newGame                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  prompts user for name to add to player array, starts game           
 *                                                                    
 *********************************************************************/
void MatchGame::newGame()
{

}

/**********************************************************************
 *  loadGame                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  promps user for name and find it in the player array, starts game            
 *                                                                    
 *********************************************************************/
void MatchGame::loadGame()
{

}

/**********************************************************************
 *  playGame                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  this will prompt the user how many questions they want to play, 
 *  then will run through that many, each time displaying the command
 *  name and three definition options to choose from, and keeping score
 *  on the player array.           
 *                                                                    
 *********************************************************************/
void MatchGame::playGame()
{

}

/**********************************************************************
 *  addCom                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  adds a command to the list, user enters all the details           
 *                                                                    
 *********************************************************************/
void MatchGame::addCom()
{
    std::string ctemp = "", dtemp = "";
    int ptemp = 0;

    std::cout << "\tWhich command do you want to add?: ";
    std::cin >> ctemp;

    std::cout << "\n\tWhat is the definition?(please put in quotes): ";
    std::cin >> dtemp;

    std::cout << "\n\tHow many points is it worth?: ";
    std::cin >> ptemp;

    comlist->insertNode(ctemp, dtemp, ptemp);

    std::cout << "\n\n" << ctemp << " has been added." << std::endl;

}

/**********************************************************************
 *  removeCom                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  user will give a command to delete and the command will be deleted
 *  deleted from the list            
 *                                                                    
 *********************************************************************/
void MatchGame::removeCom()
{
    std::string temp = "";

    std::cout << "Which command do you want to remove?: ";
    std::cin >> temp;

    if(comlist->search(temp))
    {
        comlist->deleteNode(temp);
        std::cout << "\n\n" << temp << " has been deleted." << std::endl;   
    }
    else
    {
        std::cout << "\n\n" << temp << " is not listed." << std::endl;
    }
}

/**********************************************************************
 *  displayCom                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  prints the list of commands, definition and points            
 *                                                                    
 *********************************************************************/
void MatchGame::displayCom()
{
    comlist->printComList();
}

/**********************************************************************
 *  exit                                              
 *  1 / 27 / 23                                                       
 *                                                                    
 *  saves progress and exits the program           
 *                                                                    
 *********************************************************************/
void MatchGame::exitAndSave()
{

}