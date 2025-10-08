#include <iostream>

class Player {
    std::string name;
    unsigned int jerseyNumber;
    std::string position;

    public:
    void set_name(const std::string& new_name) {
        name = new_name;
    }
    void set_number(unsigned int new_num) {
        jerseyNumber = new_num;
    }
    void set_position(const std::string& new_pos) {
        position = new_pos;
    }

    std::string get_name() {
        return name;
    }

    unsigned int get_number() {
        return jerseyNumber;
    }

    std::string get_pos() {
        return position;
    }

    void print() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Jersey Number: " << jerseyNumber << std::endl;
        std::cout << "Position: " << position << std::endl;
    }
};

class Team {
    std::string teamName;
    std::vector<Player> players;

    public:
    void set_name(const std::string& new_name) {
        teamName = new_name;
    }
    void add_player(Player player) {
        players.push_back(player);
    }
    void remove_player(Player player) {
        // ???
    }

    std::string get_name() {
        return teamName;
    }
    Player get_player(unsigned int position) {
        return players.at(position);
    }
};

int main() {
    Team bruhs = {};
    Player beef = {};
    beef.set_name("beef keevers");
    beef.set_number(7);
    beef.set_position("?");
    beef.print();
    bruhs.add_player(beef);
    return 0;
}