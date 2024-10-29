#include <iostream>
using namespace std;


string leggiComando(string ximenes)
{
    do
    {
        cout << "[R] Per aumentare i fondi; [P] Per una previsione del budget; [S] Per aggiungere una spesa imprevista; [X] Per uscire" << endl;
        cin >> ximenes;
    }while(ximenes != "R" or ximenes != "P" or ximenes != "S" or ximenes != "X");
}

float updateBudget(float & budget, float a)
{
    budget += a;
}

float previsioneBudget(float budget, float a)
{
    budget *= a;
}



int main() 
{
    float budget(0),a;
    string ximenes;
    do
    {
        cout << "Budget: " << budget << endl;
        ximenes = leggiComando();
        if(ximenes == "R")
        {
            cin >> a;
            updateBudget(budget, a);
        }
        if(ximenes == "P"){
            cin >> a;
            cout << "Budget previsto: " << previsioneBudget(budget,a) << endl;
        }
    }while(ximenes != "x");
}

