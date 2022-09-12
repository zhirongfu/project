#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include "Post.hpp"
using namespace std;
Post::Post()
{

}
Post::Post(string posttitle, string postbody)
{
    post_title = posttitle;
    post_body = postbody;
    time_stamp_ = time(0);

}
void Post::setTitle(string title)
{
    post_title = title;
}
string Post::getTitle()
{
    return post_title;
}
void Post::setBody(string body)
{
    post_body = body;
}
string Post::getBody()
{
    return post_body;
}
void Post::getTimeStamp()
{
 
    struct tm* localTime;

    time(&time_stamp_);
    localTime = localtime(&time_stamp_);

    int Hour = localTime->tm_hour;
    int Min = localTime->tm_min;
    int Sec = localTime->tm_sec;

    std::cout << "Post Time: " << Hour << ":" << Min << ":" << Sec << std::endl;
    
}
void Post::displayPost()
{
    std::cout << "Title: " << post_title<<endl;
    std::cout << "Body: " << post_body << endl;
}
