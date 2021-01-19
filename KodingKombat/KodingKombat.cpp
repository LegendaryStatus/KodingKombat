#include <iostream>
#include <vector>
//#include <iostream.h>
//#include <stdlib.h>
#include <string>
#include <cstdlib>
#include<time.h>

int player_fight(std::string player, int p_kick, int p_punch, int p_block, int p_special)
{

    int a;
    int b = 0;
    std::string player_attack_choice;

    std::cout << "Choose your attack! \n";
    std::cout << "1) Kick \n";
    std::cout << "2) Punch \n";
    std::cout << "3) Block \n";
    std::cout << "4) Special \n";
    std::cout << "Enter selection: ";

    std::cin >> a;

    switch (a)
    {
    case 1:
        b = p_kick;
        player_attack_choice = "Kicked";
        break;

    case 2:
        b = p_punch;
        player_attack_choice = "Punched";
        break;

    case 3:
        b = p_block;
        player_attack_choice = "Blocked";
        break;

    case 4:
        b = p_special;
        player_attack_choice = "Used special ability";
        break;

    default:
        std::cout << "Invalid selection!";
    }

    std::cout << player << " " << player_attack_choice << " for " << b << " " << "dammage" << "\n";

    return b;

}

int computer_fight(std::string comp, int c_kick, int c_punch, int c_block, int c_special)
{
    srand(time(NULL));

    int a = std::rand() % 4;
    int b = 0;

    std::string computer_attack_choice;

    switch (a)
    {

    case 1:
        b = c_kick;
        computer_attack_choice = "Kicked";
        break;

    case 2:
        b = c_punch;
        computer_attack_choice = "Punched";
        break;

    case 3:
        b = c_block;
        computer_attack_choice = "Blocked";
        break;

    case 4:
        b = c_special;
        computer_attack_choice = "Used special ability";
        break;

    default:
        std::cout << "Invalid selection!";
    }

    std::cout << comp << " " << computer_attack_choice << " for " << b << " " << "dammage";

    return b;

}

int main()
{

    std::cout << "=========================== \n";
    std::cout << "          Welcome \n";
    std::cout << "             to \n";
    std::cout << "      Koding Kombat!!! \n";
    std::cout << "=========================== \n\n";

    std::cout << " Welcome challenger. Today you will be fighting Vector! Vector is the champion of the Koding Kombat arena. The rules are simple, stay alive! You have 3 atack moves, PUNCH, KICK, and SPECIAL ABILITY. You also have one defensive move, BLOCK. Chose your fighting moves carefully as both fighters start with 100 health. The first challenger to zero health looses... Good luck! \n";



    int p_kick = 0, p_punch = 0, p_block = 0, p_special = 0;
    int c_kick = 7, c_punch = 9, c_block = 3, c_special = 15;

    std::string player;
    int x;
    std::string comp = "Vector";

    int p_health = 100;
    int c_health = 100;

    //kick, punch, block(regenerates health), special ability

    std::vector<int> vector = { 7, 9, 3, 15 };

    std::vector<int> bruce = { 4, 4, 5, 20 };
    std::vector<int> seagul = { 3, 9, 1, 10 };
    std::vector<int> arnold = { 7, 7, 7, 7 };
    std::vector<int> damme = { 3, 3, 3, 25 };
    std::vector<int> chuck = { 9, 9, 1, 5 };

    std::cout << "Choose your character: \n";
    std::cout << "1) Deep voice Bruce \n";
    std::cout << "2) Serious face Seagal \n";
    std::cout << "3) Where's the chopper Arnold \n";
    std::cout << "4) Dancing Van Damme \n";
    std::cout << "5) Thumbs up Chuck \n";
    std::cout << "Enter number selection: ";

    std::cin >> x;

    switch (x)
    {
    case 1:
        player = "Bruce";
        p_kick = bruce[0];
        p_punch = bruce[1];
        p_block = bruce[2];
        p_special = bruce[3];
        break;

    case 2:
        player = "Seagal";
        p_kick = seagul[0];
        p_punch = seagul[1];
        p_block = seagul[2];
        p_special = seagul[3];
        break;

    case 3:
        player = "Arnold";
        p_kick = arnold[0];
        p_punch = arnold[1];
        p_block = arnold[2];
        p_special = arnold[3];
        break;

    case 4:
        player = "Damme";
        p_kick = damme[0];
        p_punch = damme[1];
        p_block = damme[2];
        p_special = damme[3];
        break;

    case 5:
        player = "Chuck";
        p_kick = chuck[0];
        p_punch = chuck[1];
        p_block = chuck[2];
        p_special = chuck[3];
        break;

    default:
        std::cout << "Invalid selection";
        break;
    }

    //std::system ("CLS");
    std::cout << /*flush <<*/ "\n EXCELLENT SELECTION! \n";
    std::cout << "You have selected " << player << "\n";

    std::cout << player << " VS. " << comp << "\n";

    while (p_health > 1 && c_health > 1)
    {

        c_health = c_health - player_fight(player, p_kick, p_punch, p_block, p_special);
        p_health = p_health - computer_fight(comp, c_kick, c_punch, c_block, c_special);

        std::cout << "\n" << player << "'s health (" << p_health << ") ------ " << comp << "'s health (" << c_health << ") \n\n";



        //p_health = p_health - player_fight;
        //c_health = c_health - computer_fight;

    }



}