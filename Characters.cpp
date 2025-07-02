//
// Created by Owner on 7/1/2025.
//

#include "Characters.h"

const string &Characters::getName() const {
    return name;
}

void Characters::setName(const string &name) {
    Characters::name = name;
}

int Characters::getHp() const {
    return hp;
}

void Characters::setHp(int hp) {
    Characters::hp = hp;
}

int Characters::getLevel() const {
    return level;
}

void Characters::setLevel(int level) {
    Characters::level = level;
}

int Characters::getWepAtk() const {
    return wepAtk;
}

void Characters::setWepAtk(int wepAtk) {
    Characters::wepAtk = wepAtk;
}

Characters::Characters(const string &name) : name(name) {
    Characters::setName(name);
    Characters::setLevel(3);
    Characters::setHp(100);
    Characters::setWepAtk(10);
}
