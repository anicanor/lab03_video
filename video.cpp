#include"video.h"

#include<iostream>
#include<string>

using namespace std;

Video::Video(string name, string url, string comment, float number, int star){
    
    m_name = name;
    m_url = url;
    m_comment = comment;
    m_number = number;
    m_star = star;

}

void Video::print(){
    
    cout << m_name << ", " << m_url << ", " << m_comment << ", " << m_number << ", ";
    for(int i = 1; i < m_number; i++){
        
        cout << "*";

    }
    cout << endl;

}


    
