//main.cpp
//Aaron Nicanor
//anicanor

#include<iostream>
#include<string>
#include<istream>
#include<fstream>

#include"video.h"

const int MAX = 100;
Video  *vidp[MAX];

void ratingSort(int);
void lengthSort(int);
void titleSort(int);

int main(){
    
    string input, title, url, video, comment;
    float length;
    int rating, vidCounter = 0;
    getline(cin,input);
    
    while( getline(cin, title) ){
        
        if(vidCounter >= MAX){
            
            cerr << "Too many videos, giving up." << endl;
            return 1;
        
        }

        getline(cin, url);
        getline(cin, comment);
        cin >> length;
        cin >> rating;
        cin.ignore();
        vidp[vidCounter] = new Video(title, url, comment, length, rating);
        vidCounter += 1;
    
    }

    if(input == "rating"){

        ratingSort(vidCounter);
    
    }else if(input == "length"){
            
        lengthSort(vidCounter);
    
    }else if(input == "title"){

        titleSort(vidCounter);
    
    }else{

        cerr << input << " is not a legal sorting method, giving up." << endl;
        return 1;
    
    }
    delete[] *vidp;

    return 0;

}

void ratingSort(int counter){
    
    for(int i = counter-1; i > 0; i--)
        
        for(int o = 0; o < i; o++)
            
            if(vidp[o]->ratingCheck(vidp[o+1]))
                
                swap(vidp[o], vidp[o+1]);
            

    for(int i = 0; i < counter; i++){
        
        vidp[i]->print();
    
    }

}



void lengthSort(int counter){
    
    for(int i = counter-1; i > 0; i--)
        
        for(int o = 0; o < i; o++)
            
            if(vidp[o]->lengthCheck(vidp[o+1]))
                
                swap(vidp[o], vidp[o+1]);

    for(int i = 0; i < counter; i++){
        
        vidp[i]->print();
    
    }

}



void titleSort(int counter){
    
    for(int i = counter-1; i > 0; i--)
        
        for(int o = 0; o < i; o++)
            
            if(vidp[o]->titleCheck(vidp[o+1]))
                
                swap(vidp[o], vidp[o+1]);
    for(int i = 0; i < counter; i++){
        
        vidp[i]->print();
    
    }

}
