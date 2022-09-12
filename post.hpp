//#Zhi Rong Fu,zhi.fu57@myhunter.cuny.edu
#include <iostream>
#include <time.h>
using namespace std;
class Post {
private:
    string Title;
    string Body;
    time_t Time;
public:
    Post(string title, string body)
        Title=title;
        Body=body;
        Time=time(NULL);
    string gettitle();
    string getbody();
    time_t gettime();
    void setTitle(string Title);
    void setBody(string Body);
}
string Post::gettitle()
{
    return Title;
}
string Post::getbody()
{
    return Body;
}
time_t Post::gettime()
{
    return Time;
}
void Post::setTitle(string Title)
{
    Title=title;
}
void Post::setBody(string Body)
{
    Body=body;
}
