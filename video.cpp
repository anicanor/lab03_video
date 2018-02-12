//video.cpp
//Aaron Nicanor
//anicanor

#include"video.h"

#include<iostream>
#include<string>

using namespace std;

Video::Video(string name, string url, string comment, float length, int rating){
    
    m_name = name;
    m_url = url;
    m_comment = comment;
    m_length = length;
    m_rating = rating;

}

void Video::print(){
    
    cout << m_name << ", " << m_url << ", " << m_comment << ", " << m_length << ", ";
    for(int i = 1; i < m_rating; i++){
        
        cout << "*";

    }
    cout << endl;

}

bool Video::ratingCheck(Video *tester){
    
    return m_rating < tester->m_rating;

}

bool Video::lengthCheck(Video *tester){

    return m_length > tester->m_length;

}

bool Video::titleCheck(Video *tester){
    
    return m_name > tester->m_name;

}
    
