//Lab5_RPG.cpp
/***
 * {Lab 5 teaches you???}
 ***/

#include "RPG.h"
#include <cstdlib>
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