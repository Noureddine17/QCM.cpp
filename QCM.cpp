#include <iostream> 
using namespace std;

int main ()
{
    string Reponse;
    cout << "Question 1 - Calculez 100-8 et entrez la reponse: \n A- 92\n B- 108"<<endl;
    cin >>Reponse;
    
    if(Reponse == "A")
        cout <<"woaw tu sais compter la reponse est bien: A- 92"<< endl;
    else if (Reponse == "B")
        cout <<"Abuse frero"<<endl;
	else 
		cout << "alors toi ta rien compris " << endl;
			
    return 0;
}
