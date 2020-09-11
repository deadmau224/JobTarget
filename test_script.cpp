#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>

using namespace std;


int max_sum(vector<vector<int>> data){

	for(int i=data.size()-2; i>=0; i--){
		for(int j=0; j<=i; j++){
			data[i][j] += max(data[i+1][j],data[i+1][j+1]);
		}
	}
	return data[0][0];
}


int main()

{

	//ifstream myFileStream("SampleData.txt");
	ifstream myFileStream("ExampleData.txt");

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
			cout << data[i][j];;
		}
		cout << "\n";
	}
	cout << endl;
	cout << "Data for data[2][2] " << data[2][2] << endl;

	cout << "Max sum: " << max_sum(data) << endl;


	return 0;



}