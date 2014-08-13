#include <iostream>
//#include "product.h"
#include "gamecd.h"
#include "musiccd.h"
#include "audiotrack.h"

using namespace std;

//void addProduct(Product p);

int main()
{
    Product prod (1921,"title","me", "edi",1932,10.1);

    cout << "price" << endl;
    cout << prod.price()<< endl;

    prod.setAuthor("new author");
    cout << prod.author() << endl;

//    vector<AudioTrack> newTracks;
//    MusicCD cd(newTracks);
//    cd.addNewTracks(newTracks);

    vector<AudioTrack> NewTracks;
    NewTracks.emplace_back(1/*Track Number*/,"My Title", 1/*minutes*/, 1/*seconds*/);
    MusicCD cd(NewTracks);
    cd.addNewTracks(NewTracks);
//    cd.printTrackVector(NewTracks);

    GameCD game(1231,"the game","author","pub",1291,10.0,"PS4", 4);
    game.setPrice(50.0);
    game.printProductData();

//    AudioTrack MyTrack(1, "Hello", 1, 1);

//    if(MyTrack.trackNumber() == 1)
//        cout << "ok" << endl;
//    if(MyTrack.trackTitle() == "Hello")
//        cout << "ok" << endl;
//    if(MyTrack.minutes() == 1)
//        cout << "ok" << endl;
//    if(MyTrack.seconds() == 1)
//        cout << "ok" << endl;

    return 0;
}

//void addProduct(Product p){

//    cout << "Insert product data" << endl;
//    cout << "Bar Code "<< endl;
//    cin >> p.setBarCode();

//}
