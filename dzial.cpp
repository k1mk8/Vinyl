#include<bits/stdc++.h>
#include"dzial.h"
using namespace std;

Section::Section(string nameIN, vector<string> vinylIN)
{
    name = nameIN;
    vinyl = vinylIN;
}
Section::Section(const Section& obj)
{
    name = obj.name;
    vinyl = obj.vinyl;
}
string Section::getName() {return name;}
vector<string> Section::getVinyl() {return vinyl;}
vector<pair <string, Section> > list_of_sections;
void Section::setName(string nameIN) {name=nameIN;}
void Section::setVinyl(vector<string> vinylIN) {vinyl = vinylIN;}
ostream& operator<<(ostream& os, Section& obj)
{
    os << "Nazwa: " << obj.getName() << "\n";
    vector<string> vinyl = obj.getVinyl();
    os << "Płyty zawierające się w dziale:\n";
    for(auto it = vinyl.begin(); it != vinyl.end(); it++)os << int(it - vinyl.begin()) + 1 << ". '" << *it << "'\n";
    return os;
}
bool operator==(Section& obj1, Section& obj2)
{
    if(obj1.getName() == obj2.getName())
        if(obj1.getVinyl() == obj2.getVinyl())
            return 1;
    return 0;
}
bool operator!=(Section& obj1, Section& obj2)
{
    if(obj1.getName() == obj2.getName())
        if(obj1.getVinyl() == obj2.getVinyl())
            return 0;
    return 1;
}
Section& Section::operator=(Section& obj)
{
    this -> setName(obj.getName());
    this -> setVinyl(obj.getVinyl());
    return obj;