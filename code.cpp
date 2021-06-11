#include <iostream>
#include <fstream>

using namespace std;

#define NEV "main.cpp"

int main()
{
  ifstream f(NEV, ios::binary);
  if(f.is_open())
  {
    f.seekg(0, ios_base::end);
    streampos vege = f.tellg();
    char* tomb = new char[vege];
    f.seekg(0, ios_base::beg);
    f.read(tomb, vege);
    for(char* m = tomb; m < tomb + vege; m++)
    {
      cout << *m;
    }
    cout << endl;
    delete[] tomb;
    f.close();
  }
  else
  {
    cerr << "Fajlmegnyitasi hiba!" << endl;
  }
  return 0;
}
