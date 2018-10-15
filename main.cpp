#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include "linearSearch.h"
using namespace std;

const int vectSize = 10000000;



vector<string> A(vectSize);

int Copy_to_Vector();

int main(){

    int n = Copy_to_Vector();
    cout << "Alphabetic" << endl;

   /* for(int i = 0; i < 10; ++i){
        cout << "\"" << A.at(i) << "\" : " << linearSearch(A.at(i), A, n, &assignments, &comparisons) << endl;
    }
    cout << endl;
    for(int i = n; i < n - 10; --i){
        cout << "\"" << A.at(i) << "\" : " << linearSearch(A.at(i), A, n, &assignments, &comparisons) << endl;
    }*/



  MergeSort(A, 0, n);

  return 0;
}

//a function to copy only the strings to the vector
int Copy_to_Vector(){

    string read;
    ifstream infile;

    infile.open("C:\\Users\\Emathio\\Desktop\\Fall 2018 courses\\Algorithms\\Assignment\\Problem 2\\searchFromFile-master\\unsorted.txt");
    if (!infile.is_open())
        perror("error while opening file"); //check if it can't open the file

        //transfer only the strings by excluding the special symbols
    int k = 0;  //a variable used as a vector index
    for(int i= 0; i < 1000000; i++) {
        infile >> read;
        if(read[0] == ',' || read[0] == '.' || read[0] == ':' || read[0] == '!' || read[0] == '?' || read[0] == ';' || read[0] == '\'' || read[0] == '&')
            continue;

        A[k] = read;
        k++;
    }
    //close the file
    infile.close();

    return k;
}

