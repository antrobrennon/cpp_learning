#include <iostream>
#include <unordered_map>

int main(){
    std::unordered_map<char,int> mp;

    //Insertion
    mp['d']++;
    mp.insert({'c', 10});
    mp.emplace('c', 10);
    std::cout << mp['d'] << std::endl;


    //Modify
    mp['d'] = 25;
    

    std::cout << mp['d'];


}