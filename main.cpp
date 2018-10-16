#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int linearSearch(string value, vector<string> A);
const int vectSize = 10000000;
vector<string> A(vectSize);
int comparisons = 0, assignments = 0;
int main(){
  A.at(0) = "end";
    string read;
    ifstream infile;
    vector<int> count(25000);

    infile.open("C:\\Users\\Emathio\\Desktop\\Fall 2018 courses\\Algorithms\\Assignment\\Problem 2\\searchFromFile-master\\unsorted.txt");
    if (!infile.is_open())
        perror("error while opening file"); //check if it can't open the file

    //transfer only the strings by excluding the special symbols
    int k = 0;  //a variable used as a vector index
    for(int i= 0; i < 20; i++) {
        infile >> read;

        if (read[0] == ',' || read[0] == '.' || read[0] == ':' || read[0] == '!' || read[0] == '?' || read[0] == ';' ||
            read[0] == '\'' || read[0] == '&')
            continue;
        if (linearSearch(read, A) == -1) {
            A[k] = read;
            assignments++;
            cout << "for loop"<< endl;
            A[k + 1] = "end";
            k++;
        } else {//count[k]++;
        k++;}
    }
        //close the file
    infile.close();
    cout << "Alphabetic" << endl;
        for (int j = 0; j < 10; ++j) {
            cout << A.at(j) << endl;
        }



  //MergeSort(A, 0, n);

  return 0;
}


int linearSearch(string value, vector<string> A){

    int i = 0;
    while(A.at(i) != "end") {
        comparisons ++;
        cout << "linear search" << endl;
        if (A.at(i) == value) return i;
        i++;
    }

    return -1;

}

