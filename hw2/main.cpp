//
//  main.cpp
//  hw2
//
//  Created by Дима on 06.09.23.
//

#include <iostream>
using namespace std;

class Fraction{
private:
    int numerator;
    int denominator;
    
public:
    
    void Init(){
        numerator = rand() % (10 - 1);
        denominator = rand() % (10 - 1);
    }
    
    void Print(){ //методы класса Point
        cout << numerator << "." << denominator << endl;
    }
    
    Fraction sum(Fraction b){
        Fraction result;
        result.numerator = numerator + b.numerator;
        result.denominator = denominator + b.denominator;
        return result;
    }
    
    Fraction difference(Fraction b){
        Fraction result;
        result.numerator = numerator - b.numerator;
        result.denominator = denominator - b.denominator;
        return result;
    }

    Fraction multiply(Fraction b){
        Fraction result;
        result.numerator = numerator * b.numerator;
        result.denominator = denominator * b.denominator;
        return result;
    }

    
    Fraction division(Fraction b){
        Fraction result;
        result.numerator = numerator / b.numerator;
        result.denominator = denominator / b.denominator;
        return result;
    }

    
    void setNumerator(int v){ //модификатор (сеттер)
        if(v > 0){
            numerator = v;
        }
    }
    
    void setDenomenator(int v){//модификатор (сеттер)
        if(v > 0){
            denominator = v;
        }
    }
    
    int getNumerator(){ //инспектор
        return numerator;
    }
    
    int getDenominator(){ //инспектор
        return denominator;
    }
    void printResults(Fraction result, Fraction result1, Fraction result2, Fraction result3, Fraction fraction1, Fraction fraction2){
         result = fraction1.sum(fraction2); //сумма
        cout << "сумма: ";
        result.Print();
        
         result1 = fraction1.difference(fraction2); //разница
        cout << "разница: ";
        result1.Print();
        
         result2 = fraction1.multiply(fraction2); //умножение
        cout << "умножение: ";
        result2.Print();
        
         result3 = fraction1.division(fraction2); //деление
        cout << "деление: ";
        result3.Print();
    }
    
};


int main(int argc, const char * argv[]) {
    Fraction fraction1;
    Fraction fraction2;
    Fraction mainResult;
    fraction1.Init();
    fraction2.Init();
    Fraction result;
    Fraction result1;
    Fraction result2;
    Fraction result3;
    mainResult.printResults(result, result1, result2, result3, fraction1, fraction2);
    int answer;
    cout << "хотите ввести свои значения? " << endl;
    cout << "1 - да" << endl;
    cout << "0 - нет" << endl;
    cin >> answer;
    int v;
    if(answer == 1){
        cout << "введите числитель первой дроби: ";
        cin >> v;
        fraction1.getNumerator();
        fraction1.setNumerator(v);
        
        cout << "введите знаменатель первой дроби: ";
        cin >> v;
    
        fraction1.getDenominator();
        fraction1.setDenomenator(v);
        
        
        cout << "введите числитель второй дроби: ";
        cin >> v;
        fraction2.getNumerator();
        fraction2.setNumerator(v);
        
        cout << "введите знаменатель второй дроби: ";
        cin >> v;
        fraction2.getDenominator();
        fraction2.setDenomenator(v);
    }
    mainResult.printResults(result, result1, result2, result3, fraction1, fraction2);
}
