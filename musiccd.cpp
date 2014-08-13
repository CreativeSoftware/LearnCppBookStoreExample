#include "musiccd.h"

MusicCD::MusicCD()
{
}

//Overload Condstrutor

MusicCD::MusicCD(std::vector<AudioTrack> myTracks)
    :d_myTracks(std::move(myTracks))
{}

MusicCD::~MusicCD(){}

//Mutator Functions
void MusicCD::addNewTracks(std::vector<AudioTrack> & myTracks){

     unsigned int noTracks;
     AudioTrack myTrack;

     int trackno;
     std::string mtitle;
     int min, sec;

    std::cout << "How many tracks will have this CD? " << std::endl;
    std::cin >> noTracks;

    for(unsigned int i=0; i < noTracks; i++){
        std::cout << "Track Number: ";
        std::cin >> trackno;
        myTrack.setTrackNumber(trackno);

        std::cout << "Music Title: ";
        std::cin >> mtitle;
        myTrack.setTrackTitle(mtitle);

        std::cout << "Minutes ";
        std::cin >> min;
        myTrack.setMinutes(min);

        std::cout << "Seconds ";
        std::cin >> sec;
        myTrack.setSeconds(sec);

        myTracks.push_back(myTrack);
        std::cout << std::endl;

    }
    std::cout << std::endl;

}

//void MusicCD::printTrackVector(std::vector<AudioTrack> & myTracks){

//    unsigned int size = myTracks.size();
//    for (unsigned int i=0; i < size; i++){
//        std::cout << "Track Number: " << myTracks[i].trackNumber() << std::endl;
//        std::cout << "Track Title: " << myTracks[i].trackTitle() << std::endl;
//        std::cout << "Track has  " << myTracks[i].minutes()
//                  << " minutes " << myTracks[i].seconds() << " seconds " << std::endl;
//    }

//}


