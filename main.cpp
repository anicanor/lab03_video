#include<iostream>
#include<string>

#include"video.h"

int main(){
    
    Video video1("Title One", "www.youtube.com/one", "Comment ONE", 1.1, 1);
    Video video2("TItle Two", "www.youtube.com/two", "Comment TWO", 2.2, 2);

    video1.print();
    video2.print();
    return 0;

}
