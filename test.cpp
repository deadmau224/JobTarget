#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
	
int main(){


	fstream newfile;
	newfile.open("testdata.txt",ios::out);
	if(newfile.is_open())
	{
		newfile<<"0"<<endl;
		newfile<<"0 1"<<endl;
		newfile<<"0 1 2"<<endl;
		newfile<<"0 1 2 3"<<endl;
		newfile<<"0 1 2 3 4"<<endl;
		newfile.close();
	}
/*
	newfile.open("testdata.txt",ios::in);
	string line;
	vector<int> array;



	for(int result; getline(newfile,line);result = stoi(line))
	{
		array.push_back(result);
	}
*/


	string line;
	string temp_string;
	//const char *temp_string;
	int temp_int;
	vector<int> tokens;
	vector<vector<int>> data;
/*	
	//reading string and inserting into temp -> data
	newfile.open("testdata.txt",ios::in);
	
	if(newfile.is_open()){
		string line;
		string temp_string;
		//const char *temp_string;
		int temp_int;
		vector<int> tokens;
		vector<vector<int>> data;

		while(getline(newfile,line)){
			stringstream ss(line);
			tokens.clear();
			while(getline(ss,temp_string,' ')){
				temp_int = stoi(temp_string);
				//for(auto ch : temp_string) temp_int = (temp_int*10) + (ch - '0');
				//ss >> temp_int; 
				//const char *c = temp_string.c_str();
				//sscanf(c,"%d",&temp_int);
				//temp_int = atoi(temp_string.c_str());
				tokens.push_back(temp_int);
			}
			data.push_back(tokens);
		}

	}
	newfile.close();

	*/

	/*
	while(getline(myFileStream,line)){
		stringstream ss(line);
		tokens.clear();
		while(getline(ss,temp_string,' ')){
			temp_int = stoi(temp_string);
			tokens.push_back(temp_int);
		}
		data.push_back(tokens);
		
	}

	myFileStream.close();
	
	for(int i =0; i<data.size();i++){
		for(int j=0; j<data[i].size(); j++){
			cout << data[i][j];
		}
	}
*/
	
	if(newfile.is_open()){
		string tp;
		while(getline(newfile,tp)){
			temp.push_back(tp);
		}
		data.push_back(temp);
		newfile.close();
	}
	

	/*
	does not work 
	newfile.open("testdata.txt",ios::in);
	vector<string> tokens;
	if(newfile.is_open()){
		char delimiter = " ";
		string token;
		istringstream tokenStream(line);
		while(getline(tokenStream,tokens,delimiter)){
			//tokens.push_back(token);
			//cout << token << endl;
			
		}
	}

	/*


	

	/*
	ifstream myFileStream("SamepleData.txt");

	string line;
	string temp_stinrg;
	vector<vector<int>> data;
	int str_int;
	vector<int> temp_int;

	while(getline(myFileStream,line)){
		//stringstream ss(line);
		int n = line.length();
		char str[n+1];
		strcpy(str,line.c_str());
		
		char* ptr = strtok(str," ");

		while(ptr!= NULL){
			str_int = stoi(ptr);
			temp_int.push_back(str_int);
			cout << str_int;
		}
		data.push_back(temp_int);
	}
	*/
	/*
	for(int i=0; i<data.size();i++){
		for(int j=0; j<data[i].size();j++){
			cout << data[i][j] <<endl;
		}
	}
	
	cout << data[2][2];
	*/
	/*
	ifstream myFileStream("SamepleData.txt");
	vector<string> tokens;
	string line;
	while(getline(myFileStream,line)){
		stringstream check1(line);
		string intermediate;

		while(getline(check1,intermediate,' '))
		{
			tokens.push_back(intermediate);
		}
	}

	for(int i=0; i<tokens.size();i++){
		cout << tokens[i] << endl;
	}
	*/

/*
	int main(){

	ifstream myFileStream("triangle.txt");

	string line;
	string temp_string;
	int temp_int;
	vector<int> tokens;
	vector<vector<int>> data;

	while(getline(myFileStream,line)){
		stringstream ss(line);
		tokens.clear();
		while(getline(ss,temp_string,' ')){
			temp_int = stoi(temp_string);
			tokens.push_back(temp_int);
		}
		data.push_back(tokens);
		
	}

	myFileStream.close();

	for(int i =0; i<data.size();i++){
		for(int j=0; j<data[i].size(); j++){
			cout << data[i][j];
		}
	}
	*/

	return 0;
}