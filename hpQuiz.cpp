// hpQuiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;


int main() {


    //The magic strats here

    cout << "\n\n\t\tHogwarts School of Witchcraft and Wizardry welcomes you!\n\n";
    cout << "\n\t\t\t\"A thousand years or more ago, \n\t\t\tWhen I was newly sewn, ";
    cout << "\n\t\t\tThere lived four wizards of renown, \n\t\t\tWhose names are still well known.\"\n\n";


    int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
    int answer1 = 0, answer2 = 0, answer3 = 0, answer4 = 0;
    int max = 0;
    string house;

    cout << "\n\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
    cout << "\t\t\t\tTHE SORTING HAT QUIZ!\n";
    cout << "\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n\n";
    cout << "\n\t\tQ1) When I'm dead, I want people to remember me as:\n\n";
    cout << "\t\t\t1) The Good\n";
    cout << "\t\t\t2) The Great\n";
    cout << "\t\t\t3) The Wise\n";
    cout << "\t\t\t4) The Bold\n\t\t\t\t\t";
    cin >> answer1;


    if (answer1 == 1) {
        hufflepuff++;
    }
    else if (answer1 == 2) {
        slytherin++;
    }
    else if (answer1 == 3) {
        ravenclaw++;
    }
    else if (answer1 == 4) {
        gryffindor++;
    }
    else {
        cout << "Invalid input\n";
    }
    cout << "\n\t\tQ1) Dawn or Dusk?\n\n";
    cout << "\t\t\t1) Dawn\n";
    cout << "\t\t\t2) Dusk\n\t\t\t\t\t";
    cin >> answer2;


    if (answer2 == 1) {
        gryffindor++, ravenclaw++;
    }
    else if (answer2 == 2) {
        slytherin++, hufflepuff++;
    }
    else {
        cout << "Invalid input\n";
    }
    cout << "\n\t\tQ1) What kind of instruments most please your ear?\n\n";
    cout << "\t\t\t1) The violin\n";
    cout << "\t\t\t2) The trumpet\n";
    cout << "\t\t\t3) The piano\n";
    cout << "\t\t\t4) The drum\n\t\t\t\t\t";
    cin >> answer3;


    if (answer3 == 1) {
        slytherin++;
    }
    else if (answer3 == 2) {
        hufflepuff++;
    }
    else if (answer3 == 3) {
        ravenclaw++;
    }
    else if (answer3 == 4) {
        gryffindor++;
    }
    else {
        cout << "Invalid input\n";
    }
    cout << "\n\t\tQ1) Wich road tempts you most?\n\n";
    cout << "\t\t\t1) The wide, sunny grassy lane\n";
    cout << "\t\t\t2) The narrow, dark, lantern-lit alley\n";
    cout << "\t\t\t3) The twisting, leaf-strewn path through woods\n";
    cout << "\t\t\t4) The cobbled street lined (ancient buildings)\n\t\t\t\t\t";
    cin >> answer4;


    if (answer4 == 1) {
        hufflepuff++;
    }
    else if (answer4 == 2) {
        slytherin++;
    }
    else if (answer4 == 3) {
        gryffindor++;
    }
    else if (answer4 == 4) {
        ravenclaw++;
    }
    else {
        cout << "Invalid input\n";
    }
    if (gryffindor > max)
    {
        max = gryffindor;
        house = "GRYFFINDOR";
    }
    if (hufflepuff > max)
    {
        max = hufflepuff;
        house = "HUFFLEPUF";
    }
    if (ravenclaw > max)
    {
        max = ravenclaw;
        house = "RAVENCLAW";
    }
    if (slytherin > max)
    {
        max = slytherin;
        house = "SLYTHERIN";
    }
    cout << "\n\n\t***>>> Y O U   B E L O N G   T O   " << house << "'S   H O U S E <<<***\n\n\n";
}
