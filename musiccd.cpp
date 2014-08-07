#include "musiccd.h"

MusicCD::MusicCD()
{
}

//Overload Condsxtrutor

MusicCD::MusicCD(std::vector<AudioTrack> myTracks)
    :d_myTracks(std::move(myTracks))
    //:d_myTracks(myTracks)
{}

//Mutator Functions
void MusicCD::addNewTracks(std::vector<AudioTrack> & myTracks){

     int noTracks;
     AudioTrack myTrack;

     int trackno;
//     std::string mtitle;
//     int min, sec;

    std::cout << "How many tracks will have this CD? " << std::endl;
    std::cin >> noTracks;

    for(int i=0; i < noTracks; i++){
        std::cout << "Track Number: ";
        std::cin >> trackno;
        myTrack.setTrackNumber(trackno);
        //std::cin >> myTrack.setTrackNumber();
        //std::getline(myTrack.setTrackNumber());

//        std::cout << "Music Title: ";
//        //std::cin >> mtitle;
//        std::cout << "Minutes ";
//        //std::cin >> min;
//        std::cout << "Seconds ";
//        //std::cin >> sec;

        myTracks.push_back(myTrack);
        std::cout << std::endl;

    }
    std::cout << std::endl;
}


