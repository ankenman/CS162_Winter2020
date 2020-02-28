#ifndef SONGLIST_H
#define SONGLIST_H

#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

class Song {
    public:
        Song(char title[], char artist[], char album[], char duration[]);
        ~Song();
        void printToConsole() const;
        void printToFile(ofstream file) const;
        bool matchesArtist(char *artistValue) const;
        bool matchesAlbum(char *albumValue) const;
    private:
        char *title;
        char *artist;
        char *album;
        char *duration;
};

class SongList {
    public:
        SongList();
        ~SongList();
        void insertSong(char title[], char artist[], char album[], char duration[]);
        void removeSong(int index);
        void printSongListToConsole();
        void printSongListToFile(ofstream file);
        void searchByArtist(char artist[]);
        void searchByAlbum(char album[]);
    private:
        Song *songs[100];
        int numSongs;
};

#endif