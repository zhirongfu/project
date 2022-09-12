#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include "Post.hpp"
#include "Account.hpp"
using namespace std;
Account::Account()
{
    username = " ";
    password = " ";
}
Account::Account(string tmpusername, string tmppassword)
{
    username = tmpusername;
    password = tmppassword;
}
void Account::setUsername(string tmpusername)
{
    username = tmpusername;
}
string Account::getUsername()
{
    return username;
}
void Account::setPassword(string tmppassword)
{
    password = tmppassword;
}
string Account::getPassword()
{
    return password;
}
void Account::addPost(string title,string body)
{
    Post obj;
    obj.setTitle(title);
    obj.setBody(body);
    Post_obj.push_back(obj);
}
void display(Post obj)
{
    cout << "Title: " << obj.getTitle() << endl;
    cout << "Body: " << obj.getBody() << endl;
}
void Account::viewPosts()
{
    for (size_t i = 0; i < Post_obj.size(); ++i)
    {
        Post obj=Post_obj.at(i);
        display(obj);
        cout << endl;
    }
   
}
