//
// Created by Emathio on 10/13/2018.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;


void MergeSort(vector<string> &vect, int p, int q);
void Merge(vector<string> &vect, int p, int r, int q);

void MergeSort(vector<string> &vect, int p, int r)
{
    string read;
    int middle;
    if (p < r)
    {
        middle=(p + r)/2; // divide the sub vector into two half.
        MergeSort(vect, p, middle); //sort the first half
        MergeSort(vect, middle+1, r); //sort the second half

        // finally merge them
        Merge(vect, p, r, middle);
    }
    ofstream outfile(("C:\\Users\\Emathio\\Desktop\\Fall 2018 courses\\Algorithms\\Assignment\\Problem 2\\searchFromFile-master\\sorted.txt"));
    cout << "am here" << endl;
    for(int i= 0; i < r; i++) {
        read = vect.at(i);
        transform(read.begin(), read.end(), read.begin(), ::tolower);
        outfile << read << "\n";
    }
}
void Merge(vector<string> &vect, int p, int r, int q)
{
    vector<string> temp(r-p+1); //create a temporary vector
    int i = p;
    int k = 0;
    int j = q + 1;

// Merge the two parts
    while (i <= q && j <= r)
    {
        if (vect.at(i) < vect[j])
        {
            temp.at(k) = vect.at(i);
            k++;
            i++;
        }
        else
        {
            temp.at(k) = vect[j];
            k++;
            j++;
        }
    }

    while (i <= q){
        temp.at(k) = vect.at(i);
        k++;
        i++;
    }

    while (j <= r){
        temp.at(k) = vect.at(j);
        k++;
        j++;
    }

    for (i = p; i <= r; i++)
    {
        vect.at(i) = temp.at(i-p);
    }
}


