#include "pch.h"
#include <iostream>
#include "RaceFactory.h"

class Formula1Car : public Car {
public:
    void info() override { std::cout << "Formula 1 Car" << std::endl; }
};

class Formula1Track : public Track {
public:
    void info() override { std::cout << "Formula 1 Track" << std::endl; }
};

class Formula1Team : public Team {
public:
    void info() override { std::cout << "Formula 1 Team" << std::endl; }
};

class RallyCar : public Car {
public:
    void info() override { std::cout << "Rally Car" << std::endl; }
};

class RallyTrack : public Track {
public:
    void info() override { std::cout << "Rally Track" << std::endl; }
};

class RallyTeam : public Team {
public:
    void info() override { std::cout << "Rally Team" << std::endl; }
};

class MotoGPCar : public Car {
public:
    void info() override { std::cout << "MotoGP Bike" << std::endl; }
};

class MotoGPTrack : public Track {
public:
    void info() override { std::cout << "MotoGP Track" << std::endl; }
};

class MotoGPTeam : public Team {
public:
    void info() override { std::cout << "MotoGP Team" << std::endl; }
};


class Formula1Factory : public AbstractRaceFactory {
public:
    Car* createCar() override { return new Formula1Car(); }
    Track* createTrack() override { return new Formula1Track(); }
    Team* createTeam() override { return new Formula1Team(); }
};

class RallyFactory : public AbstractRaceFactory {
public:
    Car* createCar() override { return new RallyCar(); }
    Track* createTrack() override { return new RallyTrack(); }
    Team* createTeam() override { return new RallyTeam(); }
};

class MotoGPFactory : public AbstractRaceFactory {
public:
    Car* createCar() override { return new MotoGPCar(); }
    Track* createTrack() override { return new MotoGPTrack(); }
    Team* createTeam() override { return new MotoGPTeam(); }
};