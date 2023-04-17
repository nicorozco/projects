#include <stdio.h>
//BMI Calculator 
// this programs gives the user their BMI
// takes in users height and weight from inches to cm, pounds to kilogrmas, squares height and divides weight 

//function that takes in weight
    //**NOTES FOR SELF**
    // the value in front of the function name is what you want to return
    // the value in the parameter is what you want to take in
    double weightFunc(void); 
//function that takes users height in inches and converts it to cm and squares it
    double heightFunc(void); 

int main(void){
    
    //calling height function
    int x = 1;
    printf("BMI Calculator!\n");

    // while ( x != 0){
        double h;
        h = heightFunc();
        //calling weight function
        double w;
        w = weightFunc();
        printf("Your BMI is %5.2f",(w/h));




    return 0;

}


 double weightFunc(void){
         // declare where we store the users weight
        double userWeight;
    // programs that converts pounds to kilograms
        printf("Please enter your weight(in pounds):\n");
    //get user input
        scanf("%lf", &userWeight);
        double userKG = userWeight / 2.205 ;
    // gives back the weight 
    return userKG;
    }

double heightFunc(void){
        double userInches;
        // take height in inches
        printf("Please enter your height in inches(in): \n");

        //store user input
        scanf("%lf",&userInches);

        //convert them to centimeters 
        double userCM = userInches * 2.54;

        double userMeters = userCM / 100;

        double userHeight = userMeters * userMeters ;

        return userHeight;
        //return it
    }