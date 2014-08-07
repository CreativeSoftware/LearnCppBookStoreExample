#ifndef AUDIOTRACK_H
#define AUDIOTRACK_H

#include <iostream>
#include <string>

class AudioTrack
{
    int d_trackNumber;
    std::string d_trackTitle;
    int d_minutes, d_seconds;

public:
    //Default Construtor
    AudioTrack();

    //Overload Constructor
    AudioTrack(int trackNumber, std::string const &trackTitle, int minutes, int seconds);

    //Destructor
    ~AudioTrack();

    //Accessor Functions
    int trackNumber(void) const;
    std::string const &trackTitle(void) const;
    int minutes(void) const;
    int seconds(void) const;

    //Mutator Functions
    void setTrackNumber(int trackNumber);
    void setTrackTitle(std::string const &trackTitle);
    void setMinutes(int minutes);
    void setSeconds(int seconds);
};

#endif // AUDIOTRACK_H
