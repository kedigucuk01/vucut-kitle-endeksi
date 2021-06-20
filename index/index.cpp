#include <iostream>
#include <math.h>

using namespace std;

void endeks(double kilo, double boy){

    try{
        if(kilo <= 0 || boy <= 0) throw 1;

        else{

            double result = kilo / pow(( boy/ 100), 2);


            if (result <= 20)
                cout << "Ideal kilonuzun altindasiniz." << endl;

            else if(result > 20 && result <= 25)
                cout << "Ideal kilodasiniz." << endl;

            else if(result > 25 && result <= 30)
                cout << "Ideal kilonun ustundesiniz." << endl;

            else if(result > 30)
                cout << "Obezsiniz." << endl;
            

            cout << "Vucut kitle endeksiniz: " << result << endl;

        }
    }

    catch(int num){
        cout << "Lutfen gecerli boy ve kilo verisi giriniz." << endl;
    }

}

int main(){

    while(true){

        string sk, sb;
        double k, b;

        cout << "\n" << "Lutfen kilonuzu giriniz(kg): ";
        getline(cin, sk);

        cout << "Lutfen boyunuzu giriniz(cm): ";
        getline(cin, sb);

        try {
            k = stod(sk);
            b = stod(sb);
        
        } catch(invalid_argument& e){
            cout << "Lutfen sayi giriniz." << endl;
            continue;
            
    }

        endeks(k,b);
    }
    
    system("pause");
    return 0;
}
