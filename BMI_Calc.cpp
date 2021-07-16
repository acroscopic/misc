// BMI_Calc.cpp  
// BMI formula is weight/height^2

#include <string>
#include <iostream>


using std::endl;
using std::cout; using std::cin;
using std::string; using std::to_string;

int main()
{
    float height = NULL, weight = NULL, bmi = NULL;
    string bodytype, unitofmeasure;

    void body_type(); { // function that dictates the body type based on the calculated BMI 
        if (bmi < 18)
            bodytype = "underweight";
        else if (bmi > 25)
            bodytype = "overweight";
        else
            bodytype = "healthy";
    }




    cout << "Would you like to use the metric or imperial system?" << endl;
    cin >> unitofmeasure;
    system("cls");

    //if the input is not "metric" or "imperial" the system breaks
    while (unitofmeasure != "metric" || "imperial") {
        break;
    }

    if (unitofmeasure == "metric") {
        cout << "Please enter your weight(kg), and your height(m)" << endl;
        cin >> weight >> height;
        height = height * height;
        bmi = weight / height;

    }

    if (unitofmeasure == "imperial") {

        cout << "Please enter you weight(lb), and your height(in)" << endl;
        cin >> weight >> height;

        height = height / 39.37; //converting m to in
        height = height * height;
        weight = (weight * 0.453592); //converting kb to lb
        bmi = weight / height;
    }
    
    system("cls");
    cout << "Your Mass Body Index is: ";
    printf("%.2f", bmi);
    cout << "\nAccording to your BMI you are considered " + bodytype << endl;
    system("pause>0");
}
