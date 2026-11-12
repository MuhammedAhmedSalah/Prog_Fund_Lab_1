
#include <iostream>

/*#include "/home/mohamed-ahmed-salah/Documents/Prog_Fund_Lab_1/include/terminal.h"
#include "/home/mohamed-ahmed-salah/Documents/Prog_Fund_Lab_1/include/menu.h"
#include "/home/mohamed-ahmed-salah/Documents/Prog_Fund_Lab_1/include/colors.h"*/
#include "terminal.h"
#include "menu.h"
#include "application.h"
using namespace std;
int main() {
    /* cout << "Hello, World!" << endl;
   setCursorPosition(20, 20);
   cout<<"\033[2J";
   cout << "Testing postion change of cursor" << endl;*/
   
  /*displayMenu(1, 1,7,1);
  int width, height;
getTerminalSize(width, height);

cout << "Terminal width: " << width << endl;
cout << "Terminal height: " << height << endl;
cout<<"Validating position (70, 20): " << (validatePosition(70, 20, width, height) ? "Valid" : "Invalid") << endl;*/
runApplication();
  return 0;
}