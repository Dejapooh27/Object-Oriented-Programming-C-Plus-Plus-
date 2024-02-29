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

/**
 * @brief set the skills based on the RPG's role
 * 
*/
void RPG::setSkills() {
    if (type == "mage"){
        skills [0] = "fire";
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

* @brief updates health into new_health
*
* @param new_health
*/
Implement isAlive()

/**
* @brief returns whether health is greater than 0
*
* @return true
* @return false
*/


/**
 * @brief getNAME is a string 
 * 
 * @return string
 */
string RPG::getName(){
    return name;
}
int RPG::getHealth(){
    return health;
}
int RPG::getstrength(){
    return strength;

}

int RPG::getdefense(){
    return defense
}




