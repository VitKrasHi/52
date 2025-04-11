#include <iostream>
#include <string>

using namespace std;

int main(){
  string str;
  cout << "Сис или сос?" << endl; getline(cin, str);
  cout << (str == "сис" ? "SIIIIIIIIIS":"SOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOS" );
}
