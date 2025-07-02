//
// Created by Owner on 7/1/2025.
//

#ifndef FINALFANTACYTACTICSADVANCE_CHARACTERS_H
#define FINALFANTACYTACTICSADVANCE_CHARACTERS_H

#include <string>
using namespace std;


class Characters {
private:
    string name;
    int hp;
    int level;
    int wepAtk;

public:
    explicit Characters(const string &name);

    const string &getName() const;

    void setName(const string &name);

    int getHp() const;

    void setHp(int hp);

    int getLevel() const;

    void setLevel(int level);

    int getWepAtk() const;

    void setWepAtk(int wepAtk);
};


#endif //FINALFANTACYTACTICSADVANCE_CHARACTERS_H
