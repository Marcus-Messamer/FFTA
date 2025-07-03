//
// Created by Owner on 7/1/2025.
//

#include "Characters.h"
#include "GameBoard.h"
using namespace CommandLine;


//getters/setters

const string &Character::getName() const {
    return name;
}

void Character::setName(const string &name) {
    Character::name = name;
}

int Character::getHp() const {
    return hp;
}

void Character::setHp(int hp) {
    Character::hp = hp;
}

int Character::getLevel() const {
    return level;
}

void Character::setLevel(int level) {
    Character::level = level;
}

int Character::getWepAtk() const {
    return wepAtk;
}

void Character::setWepAtk(int wepAtk) {
    Character::wepAtk = wepAtk;
}

Character::Character(const string &name) : name(name) {
    Character::setName(name);
    Character::setLevel(3);
    Character::setHp(100);
    Character::setWepAtk(10);
}

//todo - overload the constructor




