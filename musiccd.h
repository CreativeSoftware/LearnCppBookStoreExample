#ifndef MUSICCD_H
#define MUSICCD_H

#include "audiotrack.h"
#include <vector>

class MusicCD
{
    std::vector < AudioTrack > d_myTracks;

public:
    //Default constructor
    MusicCD();

    //Overload constructor
    MusicCD(std::vector <AudioTrack> myTracks);

    //Destructor
    ~MusicCD();

    //Acessor Functions

    //Mutator Functions

    void addNewTracks(std::vector <AudioTrack> &);



};

#endif // MUSICCD_H
