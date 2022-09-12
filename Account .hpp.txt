#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<vector>
class Account
{
private:
	std::string username;
	std::string password;
	std::vector<Post> Post_obj;
public:
	Account();
	Account(std::string, std::string);
	void setUsername(std::string);
	std::string getUsername();
	void setPassword(std::string);
	std::string getPassword();
	void addPost(std::string,std::string);
	void viewPosts();
};
#endif 
