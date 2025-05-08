// stl approach
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    string paragraph;
    cout<<"Enter a paragraph :";
    getline(cin,paragraph);

    transform(paragraph.begin(),paragraph.end(),paragraph.begin(),::tolower);

    stringstream ss(paragraph);
    string word;
    vector<string>words;

    while(ss>>word)
    {
        words.push_back(word);

    }
    map<string,int>frequency;
    for(const string &w:words)
    {
        frequency[w]++;
    }
    cout<<"word frequency"<<endl;
    for(const auto& pair: frequency)
    {cout<<pair.first<<" : "<<pair.second<<endl;

    }
    cout<<"24CE118_chinmay";
    return 0;


}
