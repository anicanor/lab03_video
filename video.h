//video.h
//Aaron Nicnaor
//anicanor

#ifndef VIDEO_H
#define VIDEO_H

#include<iostream>
#include<string>

using namespace std;

class Video
{
    public:
        Video (string Name, string url, string comment, float length, int rating);
        void print();
        bool ratingCheck(Video *tester);
        bool lengthCheck(Video *tester);
        bool titleCheck(Video *tester);
    private:
        string m_name, m_url, m_comment;
        float m_length;
        int m_rating;


};

#endif
