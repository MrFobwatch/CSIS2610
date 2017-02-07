/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on January 11, 2017, 5:28 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int SwitchOne      = 0;
    int SwitchTwo      = 1;
    //bool SwitchThree    = true;
    //LightOn      = cout << "The light is ON.";  
    //LightOff     = cout << "The light is OFF.";
    
    switch(SwitchOne)
    {
        case 0:                
                if(SwitchTwo == 0)
                {
                    cout << "The light is OFF";
                }
                if(SwitchTwo == 1)
                {
                    cout << "The light is ON";
                }
                break;
                
        case 1:
                if(SwitchTwo == 0)
                {
                    cout << "The light is ON";
                }
                if(SwitchTwo == 1)
                {
                    cout << "The light is OFF";
                }
    }
  return 0;
}

