#include <iostream>
#include <ctime>

using namespace std;


string leggiComando()
{
    string ximenes;
    do
    {
        cout << "[R] Per aumentare i fondi; [P] Per una previsione del budget; [S] Per aggiungere una spesa imprevista; [X] Per uscire" << endl;
        cin >> ximenes;
    }while(ximenes != "R" and ximenes != "P" and ximenes != "S" and ximenes != "X");
    return ximenes;
}

float updateBudget(float & budget, float a)
{
    budget += a;
}

float previsioneBudget(float budget, float a)
{
    budget = budget + (budget / 100)*a;
}



int main() 
{
    srand(time(0));
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
            a = -15;
            a = a + rand() % 30;
            cout << "Budget previsto: " << previsioneBudget(budget,a) << endl;
        }
        if (ximenes == "S"){
            cin >> a;
            updateBudget(budget,(-a));
        }
    }while(ximenes != "x");
}

