
#ifndef VIDEO_H
#define VIDEO_H
// put any includes here (such as #include <iostream>)

#include<iostream>
#include<string>

using namespace std;

class Video
{
    public:
        // public member functions go here
        Video (string Name, string url, string comment, float number, int star);
        void print();
    private:
        // member variables go here
        // member function used only by other member functions go here
        string m_name, m_url, m_comment;
        float m_number;
        int m_star;


}; // don't forget this ;

#endif
