//video.cpp
//Aaron Nicanor
//anicanor

#include"video.h"

#include<iostream>
#include<string>

using namespace std;

//Used to set up the Video's info
Video::Video(string name, string url, string comment, float length, int rating){
    
    m_name = name;
    m_url = url;
    m_comment = comment;
    m_length = length;
    m_rating = rating;

}

//Prints out the Video's info
void Video::print(){
    
    cout << m_name << ", " << m_url << ", " << m_comment << ", " << m_length << ", ";
    for(int i = m_rating; i > 0; i--){
        
        cout << "*";

    }
    cout << endl;

}

//Used to compare one video object's rating with another's rating
bool Video::ratingCheck(Video *tester){
    
    return m_rating < tester->m_rating;

}
//Used to compare one video object's length with another's length
bool Video::lengthCheck(Video *tester){

    return m_length > tester->m_length;

}
//Used to compare one video object's name with another's name
bool Video::titleCheck(Video *tester){
    
    return m_name > tester->m_name;

}
    
