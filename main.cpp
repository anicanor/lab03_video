//main.cpp
//Aaron Nicanor
//anicanor

#include<iostream>
#include<string>
#include<istream>
#include<fstream>

#include"video.h"
//creating the pointer array
const int MAX = 100;
Video  *vidp[MAX];

//Will handle the sorting of the videos by rating and will also print
void ratingSort(int);
//Will handle the sorting of the videos by length and will also print
void lengthSort(int);
//Will handle the sorting of the videos by title and will also print
void titleSort(int);

int main(){
    
    //Declaring the variables
    string input, title, url, video, comment;
    float length;
    int rating, vidCounter = 0;
    getline(cin,input);
    
    //Handles the input of the Videos from the user
    while( getline(cin, title) ){
        
        //Makes sure the user does not go over the limit of the max videos
        if(vidCounter == MAX){
            
            cerr << "Too many videos, giving up." << endl;
            return 1;
        
        }



        getline(cin, url);
        getline(cin, comment);
        cin >> length;
        cin >> rating;

        cin.ignore();
        //Adds a new video into the vidp array and increases the number of videos stored by one
        vidp[vidCounter] = new Video(title, url, comment, length, rating);
        vidCounter++;
    
    }
    
    //Checks the user's inputed sorting method of choice
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

    return 0;

}

void ratingSort(int counter){
    
    /*This is mostly the same for all three functions so this applies to
    the other two. Basically I cycle through the array and will use the 
    swap() function to properly sort the collection of videos. The pointers 
    are compared using the functions I have within the Video class.
    */
    for(int i = counter-1; i > 0; i--){
        
        for(int o = 0; o < i; o++){
            
            if(vidp[o]->ratingCheck(vidp[o+1])){
                
                swap(vidp[o], vidp[o+1]);
            
            }
        
        }
    
    }
            
    //Prints out the videos
    for(int i = 0; i < counter; i++){
        
        vidp[i]->print();
    
    }

}



void lengthSort(int counter){
    
    //See ratingSort's block of text for info
    for(int i = counter-1; i > 0; i--){
        
        for(int o = 0; o < i; o++){
            
            if(vidp[o]->lengthCheck(vidp[o+1])){
                
                swap(vidp[o], vidp[o+1]);
            
            }
        }
    }
    
    //Prints out the videos
    for(int i = 0; i < counter; i++){
        
        vidp[i]->print();
    
    }

}



void titleSort(int counter){
    
    //See ratingSort's block of text for info
    for(int i = counter-1; i > 0; i--){
        
        for(int o = 0; o < i; o++){
            
            if(vidp[o]->titleCheck(vidp[o+1])){
                
                swap(vidp[o], vidp[o+1]);
            
            }
        }
    }
    
    //Prints out the videos
    for(int i = 0; i < counter; i++){
        
        vidp[i]->print();
    
    }

}
