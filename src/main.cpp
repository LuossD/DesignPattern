//
// Created by hg on 3/22/23.
//
#include "Observer.h"
#include "Subject.h"
#include "Player.h"
#include "Base.h"
int main()
{
    Observer* player1 = new Player("A","无警戒状态");
    Observer* player2 = new Player("B","无警戒状态");
    Observer* player3 = new Player("C","无警戒状态");

    Subject* subject = new Base();
    subject->attach(player1);
    subject->attach(player2);
    subject->attach(player3);
    subject->change("警戒状态");

    subject->detach(player3);
    subject->change("fight状态");

    delete player1, player2, player3, subject;
    return 0;
}