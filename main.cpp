#include <iostream>
#include "product.h"
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

    vector<AudioTrack> newTracks;
    MusicCD cd(newTracks);
    cd.addNewTracks(newTracks);
//    cout << prod.title() << "\n";

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
