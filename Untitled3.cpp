#include <iostream>
#include <vector>
#include <string>
using namespace std;

//get course
struct Crs {
    string n;
    int v;
    int nomre;
};

// get student
struct Std {
    string n;
    int id;
    string m;
};
float moadel() {
	    Crs C;
    	float moadel1 = 0;
        int vahedha = 0, soorat = 0;
        for (int i = 0; i < 4; i++) {
            vahedha += C.v;        
            soorat += C.v * C.nomre;
        }
           moadel1=soorat / vahedha;
        return (moadel1);
    }
    
vector<Std> stds;
Std readstd() {
	Std s;
    cout << "name: "; getline(cin, s.n);    
    cout << "id: "; cin>>s.id; cin.ignore();          //khali kardim bafer ra
    cout << "major: "; getline(cin, s.m);
	stds.push_back(s);
	cout<<"successful";
    return s;
}
int main()
{
	Std s;
	int ch;
	cout<< "choose a number please"<<"\n"<<"1- add student"<<"\n"<<"2- Exit
	";
	cin>>ch;
	while(ch!=2)
	{
		s=readstd();
	}
}
