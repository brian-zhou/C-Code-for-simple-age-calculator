    #include<iostream> /* Removed the ".h" from the header name, it's deprecated in C++ */
    #include<conio> /* Same for this one */
    /* Added a line to use the std namespace, otherwise you'd have to use std::cout & std::cin instead of cout & cin */
    using namespace std;
    int main() /* Changed the return-type to int */
    {
    /* this code is now indented, so that we know it's in main() */
    int birthmonth,birthyear;
    int currentmonth,currentyear;
    int agey,agem;
    int test;
    /* Adding carriage returns between distinct blocks of code can aid readability */
    cout << "\n\n\t\t\tRaje\'s Age Calculator\n\n"; /* Used "\'" instead of just "'", since this will cause an error */
    cout << "Enter Your Birth Year(Eg:1989):";
    cin >> birthyear;
    /* Added some white space between the elements of these statements to aid readability */
    cout << "\n\nEnter Your Birth Month(Eg:7):";
    cin >> birthmonth;
    /* Added this bit to demonstrate return values from main */
    if(birthmonth > 12 || birthmont < 1)
    return 1; /* return 1 when something's gone wrong */
    cout << "\nEnter The Current Month(Eg:7):";
    cin >> currentmonth;
    cout << "\nEnter The Current Year(Eg:2010):";
    cin >> currentyear;
    agey = currentyear - birthyear;
    agem = 12 - birthmonth;
    cout << "\n\n\t\tYour Age is " << agey << " Years And " << agem << " Months ";
    getch();
    return 0; /* We now return "0", so that we can check from another program if this one finished OK */
    }