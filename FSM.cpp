#include "fsm.hpp"
#include <iostream>
#include <string>

using namespace std;

FSM::~FSM() {
    // Destructor kosong
}

FSM::FSM(uint32_t delay){
  moveCount=delay; //pake properti yang tidka digunakan
}
void FSM::start(){
  cout << moveCount << " kalo ditambah 10, jadi " << moveCount + 10 << "\n";
}
