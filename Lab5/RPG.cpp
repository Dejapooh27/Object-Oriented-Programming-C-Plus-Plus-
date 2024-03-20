//Lab5_RPG.cpp
/***
* {Lab 5 teaches you???}
 ***/

#include "RPG.h"
#include <cstdlib>
#include <iostream>
using namespace std;

 RPG::RPG(){
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
 }

 RPG::RPG(string inputName, int inputHealth, int inputStrength, int inputDefense, string inputType){
    name = inputName;
    health = inputHealth;
    strength = inputStrength;
    defense = inputDefense;
    type = inputType;
    setSkills();
 }

/**
 * @brief set the skills based on the RPG's role
 * 
*/
void RPG::setSkills() {
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    } else if (type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    } else if (type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    } else {
        skills[0] = "slash";
        skills[1] = "parry";
        }
}

/**
 * @brief Prints along the lines of NAME used SKILL on OPPONENT
 * 
 * @param skill
 * @param opponent 
*/
void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
    }

/**
 * @brief 
 * 
* @param new_health
*/
void RPG:: updateHealth(int new_health) {
    health = new_health;
}

/**
* @brief returns whether health is greater than 0
*
* @return true
* @return false
*/
bool RPG:: isAlive() const {
    return health > 0;
} 


/**
 * @brief getNAME gets whatever character was choosen
 * 
 * @return string
 */

string RPG::getName() const {
    return name;
}

/**
 * @brief getHealth gets the health of the character 
 * 
 * @return int 
 */
int RPG::getHealth() const {
    return health;
}

/**
 * @brief getstrength is how strong the character is 
 * 
 * @return int 
 */
int RPG::getStrength() const {
    return strength;}

/**
 * @brief getdefense is the defense it has toward the opponent 
 * 
 * @return int 
 */
int RPG::getDefense() const {
    return defense;
    }

/**
 * @brief attack decreases the opponent's health by (strength - opponent's defense)
 * In other words, the opponent's defense should soften the blow from the attack 
 * 
 * For example, if opponent's health is 100, opponent' defense is 5, and player's 
 * strength is 20, then after the attack, opponent's health should be 
 * 85 (i.e 100 - (20-5)).
 * 
 * First calculate the opponent's health, then use (*opponent).getUpdate(new_health)
 * to update their health 
 * 
 * @param opponent 
 */
void RPG::attack(RPG * opponent){
    // int new_health = (*opponent).getHealth ();
    //int new_health = *opponent->getHealth();
    int new_health = (*opponent).getHealth () - (strength - (*opponent).getDefense());
    (*opponent).updateHealth(new_health);
}

/**
 * @brief Prompts the user to choose a skill and calls printAction() and attack()
 * 
 * @param opponent 
 */
void RPG::useSkill(RPG * opponent){
    //use a for loop to print out all the player's skill
    // i is the index given your for loop 
    // The value of i should be 0 <= i < SKILL_SIZE
    for(int i = 0; i <SKILL_SIZE; i ++){
        printf("Skill %i: %s\n", i, skills[i].c_str());
    }
    // create an int called chosen_skill_index
    // use a print to output "Choose a skill...."
    int chosen_skill_index;
    printf("Choose a skill to use: Enter 0 or 1 on the terminal\n");
    // get user input and assign it to chosen_skill_index
    cin >> chosen_skill_index;
    //assigns the chosen_skill into a string called chosen_skill 
    string chosen_skill = skills[chosen_skill_index];
    //call printAction(string, RPG) and use chosen_skill and (*opponent)
    printAction(chosen_skill,(*opponent));
    // as the parameters
    attack(opponent);
}