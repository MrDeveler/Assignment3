#include <stdio.h>
#include <string.h>

void readFile();
int validateFile();
void runGame();
void handoutCards();
void checkMove();
void printCardboard();
void moveCard();
void gameWon();
void printHelp();

///
/// TODO Check if memory leaked
/// Linked Card lists
/// parameter of functions
///


int main(int argc, char* argv[])
{
  int returnvalue=0;

  if(argc !=1)
  {
    printf("[ERR] Usage: ./ass3 [file-name]\n");
    returnvalue= 1;
  }
  readFile();
  returnvalue =validateFile();
  runGame();


  return returnvalue;
}
void readFile()
{

}
int validateFile()
{

int fileIsCorrect=0;


  return fileIsCorrect;
}
void runGame()
{
  while(1==1)
  {

  }
}
void handoutCards()
{

}

//Check if move was valid
void checkMove()
{

}

//Output after a card is moved.
//Output of the Cardboard
void printCardboard()
{

}

void moveCard()
{

}

//Check if Game is won
void gameWon()
{

}

//print the help function
//
void printHelp()
{
printf("possible command:\n - move <color> <value> to <stacknumber>\n - help\n - exit\n");
}