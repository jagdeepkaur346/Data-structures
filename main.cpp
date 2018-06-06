#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;



int SIMULATION_COUNT =100;

int hideCar(); /**function to randomly pick a door to hide the car**/

int openDoor( int a, int b); /**function to open the door(other than the contestant selected) to reveal the goat**/

int makeFirstChoice(); /**Contestant randomly picks a door to make his first choice**/

int makeSecondChoice( int c, int d); /**Contestant switches his choice to third door after one goat is revealed**/




int main()
{
    int win1 = 0, win2 = 0;

    cout<<"\n#  car here \t 1st choice \t 2nd choice \t 1st win  2nd win\n"; /**For making a table**/

    for (int i = 1; i <= SIMULATION_COUNT; i++)
    { int car_door, door_opened,first_choice,second_choice;

        car_door= hideCar();
        first_choice= makeFirstChoice();
        door_opened = openDoor(car_door,first_choice);
        second_choice= makeSecondChoice(first_choice,door_opened);


        cout<<"\n"<<i<<"\t"<<car_door<<"\t\t"<<first_choice<<"\t\t"<<second_choice<<"\t ";

        if (car_door == first_choice)
        {
          win1++;
          cout<<"yes";
        }

        if (car_door == second_choice)
        {
            win2++;
            cout<<" \t   yes";
        }


    }

cout<<"\n\n\n"<<win1<<" wins if stay with the first choice";
cout<<"\n"<<win2<<" wins if switch to the second choice";
cout<<"\n\nWin ratio of switch over stay: "<< double(win2) /win1<<"\n\n" ;


return 0;
}



int hideCar()
{
    int door;
door = rand()%3+1;
return door;

}



int openDoor(int a, int b)
{
    int door;
    if (a==b)
    {
      door = rand() %3 +1;

    while (door == a)
    {
        door = rand()% 3 +1;
    }

    }

    else
    {
        door = rand()%3 +1 ;
        while (door == a || door ==b)
        {
            door =rand()%3 +1;
        }

    }

    return door;
}



int makeFirstChoice()
{
    int door;
door = rand()%3+1;
return door;

}




int makeSecondChoice(int c , int d)
{
    int door;

    door=rand()%3 +1;

    while(door==c || door == d)
    {
        door = rand()%3 + 1;
    }
    return door;
}
