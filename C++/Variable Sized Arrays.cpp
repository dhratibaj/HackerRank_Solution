#include <iostream>
using namespace std;

int main() {  
    int numSequence,numQueries, k;
    cin >> numSequence >> numQueries;
// sequence
    int** array = new int*[numSequence];
// query 
    int** query = new int*[numQueries];
    for(int i=0;i<numSequence;i++){
        cin >> k; 
        array[i] = new int[k];   
        for (int j=0;j<k;j++){
            cin >> array[i][j];
        } 
    }
    for(int i = 0; i<numQueries;i++){
        query[i] = new int[2];
        cin >> query[i][0] >> query[i][1]; 
        cout << array[query[i][0]][query[i][1]] << endl;
    } 
    return 0;
}
