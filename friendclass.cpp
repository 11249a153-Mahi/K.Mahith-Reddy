#include <iostream>
using namespace std;

class Player {
private:
    string name;
    int health;
    int score;

public:
    Player(string n, int h, int s) : name(n), health(h), score(s) {}

    friend class GameMaster;
};

class GameMaster {
public:
    void displayPlayerStats(Player p) {
        cout << "---- Player Stats ----" << endl;
        cout << "Name: " << p.name << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
    }

    void updateHealth(Player &p, int newHealth) {
        cout << "\nUpdating health for " << p.name << "..." << endl;
        p.health = newHealth;
    }

    void addScore(Player &p, int points) {
        cout << "Adding " << points << " points to " << p.name << endl;
        p.score += points;
    }
};

int main() {
    Player p1("Arjun", 100, 50);
    GameMaster gm;

    gm.displayPlayerStats(p1);   
    gm.updateHealth(p1, 80);     
    gm.addScore(p1, 25);         

    cout << "\nAfter Updates:\n";
    gm.displayPlayerStats(p1);   

    return 0;
}
