// Exam-InventorySytem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h"
#include "Weapon.h"
#include "Potion.h"
#include "Armor.h"
using namespace std;

//TODO: FIX INDEX OUT OF BOUNDS
void useItem(Player* p) {
    cout << "Vilken plats vill du anv�nda:";
    int choice;
    cin >> choice;
    p->useItem(choice);
}
void addItem(Player* p) {
    cout << "Vilken item vill du l�ga till?\n"
        << "(1. Potion, 2. Weapon, 3. Armor): ";
    int choice;
    cin >> choice;
    switch (choice) 
    {
        case 1:
            p->addItem(new Potion());
            break;
        case 2:
            p->addItem(new Weapon());
            break;
        case 3: 
            p->addItem(new Armor());
            break;
        default:
            cout << "V�nligen v�lj en siffra mellan 1-3";
            break;
    }

}
//TODO: FIX INDEX OUT OF BOUNDS
void removeItem(Player* p) {
    cout << "Vilken plats vill du ta bort:";
    int choice;
    cin >> choice;
    p->removeItem(choice);
}

int main()
{
    Player* player = new Player;

    shared_ptr<Weapon> excalibur = make_shared<Weapon>("Excalibur", 1, 666, 5);

    bool active = true;
    int choice;
    while (active) {
        cout << "1. L�gga till ett f�rem�l till inventariet.\n"
            << "2. Visa alla f�rem�l i inventariet.\n"
            << "3. Anv�nda ett f�rem�l.\n"
            << "4. Ta bort ett f�rem�l fr�n inventariet.\n"
            << "5. Avsluta programmet(och frig�ra allt dynamiskt allokerat minne).\n"
            << "6. Anänd Excalibur! \n";
        cin >> choice;
        switch (choice) {
        case 1: 
            addItem(player);
            break;
        case 2:
            player->displayInventory();
            break;
        case 3:
            useItem(player);
            break;
        case 4:
            removeItem(player);
            break;
        case 5:
            active = false;
            break;
        case 6:
            player->addItem(excalibur.get());  // Lägger till en pekare till Excalibur i inventariet
            cout << "Excalibur har lagts till i inventariet!\n";
            break;
        default:
            cout << "V�nligen v�lj en siffra mellan 1-5\n";
            break;
        }
    }
    delete(player);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
