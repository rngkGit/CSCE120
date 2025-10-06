#include <iostream>
#include <vector>

int main() {
    struct TeamPlayer {
            std::string playerName;
            int playerNumber;
            std::string playerPosition;
    };
    struct SoccerTeam {
        std::string teamName;
        std::vector<TeamPlayer> teamPlayers;
    };

    TeamPlayer Geef = {"geef", 8, "goalie"};
    TeamPlayer Justin = {"Justin", 21, "center"};

    std::vector<TeamPlayer> teamPlayersList{Geef, Justin};

    SoccerTeam teamAggieBallers = {"Aggie Ballers", teamPlayersList};


    // Output
    std::cout << "Team Name: " << teamAggieBallers.teamName << std::endl;

    for (int i = 0; i < teamAggieBallers.teamPlayers.size(); i++) {
        std::cout << "Player Name: " << teamAggieBallers.teamPlayers.at(i).playerName << " --- Player Number: " << teamAggieBallers.teamPlayers.at(i).playerNumber << " --- Player Position: " << teamAggieBallers.teamPlayers.at(i).playerPosition << std::endl;
    }

    return 0;
}