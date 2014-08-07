#include "audiotrack.h"

AudioTrack::AudioTrack()
{
}

AudioTrack::AudioTrack(int trackNumber, const std::string &trackTitle, int minutes, int seconds)
    :d_trackNumber(trackNumber), d_trackTitle(trackTitle), d_minutes(minutes), d_seconds(seconds)
{

}

AudioTrack::~AudioTrack(){}

int AudioTrack::trackNumber(void) const {
    return d_trackNumber;
}

std::string const &AudioTrack::trackTitle(void) const{
    return d_trackTitle;
}

int AudioTrack::minutes(void) const {
    return d_minutes;
}

int AudioTrack::seconds(void) const {
    return d_seconds;
}


void AudioTrack::setTrackNumber(int trackNumber){
    d_trackNumber = trackNumber;
}

void AudioTrack::setTrackTitle(const std::string &trackTitle){
    d_trackTitle = trackTitle;
}

void AudioTrack::setMinutes(int minutes){
    d_minutes = minutes;
}

void AudioTrack::setSeconds(int seconds){
    d_seconds = seconds;
}
