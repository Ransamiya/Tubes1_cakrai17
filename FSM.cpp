#include "FSM.hpp"
#include <iostream>
#include <string>

using namespace std;
void FSM::dapetkata(){
  cout << "masukan 1 kata!\n";
  cin >> kata;
}
void FSM::ngomong(){
  cout << "saya ngomong" << kata << "ke kamu\n";
}
