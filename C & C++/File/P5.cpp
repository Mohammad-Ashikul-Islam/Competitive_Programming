#include<fstream>

using namespace std;
                        //Copying File
int main()
{
    char str[100];

    ifstream fin;
    ofstream fout;
    fin.open("P5__1.txt");
    fout.open("P5__2.txt");
    while(1)
    {
        fin>>str;
        if(fin.eof())
            break;
        fout<<str<<endl;
    }
    fin.close();
    fout.close();

    return 0;
}
