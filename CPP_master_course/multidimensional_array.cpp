#include<iostream>

int main()
{
   bool ships[4][14] = {
    {0, 1, 1, 0},
    {0, 0, 0, 0},
    {0, 0, 1, 0 }
   };

   //Keep the track of 

   int hits = 0;
   int numberofTurns = 0;

   while(hits < 4)
   {
       int row, column;
   

        std::cout << "Selecting coordinates\n";

        std::cout << "Choose a row number between 0 and 3: ";
        std::cin >> row;

        std::cout << "Choose a column number between 0 and 3: ";
        std::cin >> column;

        if(ships[row][column])
        { 
                //Check if a ship exists in those coordinates
                ships[row][column] = 0;
                //Increase the hit counter
                hits++;

                //Tell the player that they have a hit a ship and how many ships are left

                std::cout << "Hit!" << (4-hits) << "left. \n";
            
        }
        else
        {
            //Tell that player they missed
                std::cout << "Miss\n";
        }

   //Count how many turns the player has taken
   numberofTurns++;
}

    std::cout << "Victory\n";
    std::cout << "You won in " << numberofTurns << " turns";


}