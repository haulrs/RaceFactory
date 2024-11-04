#pragma once
#include <string>
#include <iostream>
#include "pch.h"

#ifdef RACEFACTORYLIBRARY_EXPORTS
#define RACEFACTORY_API __declspec(dllexport)
#else
#define RACEFACTORY_API __declspec(dllimport)
#endif

class RACEFACTORY_API Car {
public:
    virtual void info() = 0;
    virtual ~Car() = default;
};

class RACEFACTORY_API Track {
public:
    virtual void info() = 0;
    virtual ~Track() = default;
};

class RACEFACTORY_API Team {
public:
    virtual void info() = 0;
    virtual ~Team() = default;
};

class RACEFACTORY_API AbstractRaceFactory {
public:
    virtual Car* createCar() = 0;
    virtual Track* createTrack() = 0;
    virtual Team* createTeam() = 0;
    virtual ~AbstractRaceFactory() = default;
};
