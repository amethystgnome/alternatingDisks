#include <iostream>
#include <vector>

using namespace std;

 void alternating_disks(int n, vector<string> disks){
    int moves = 0; //Number of swaps
    int stop_condition = n/2; //Algorithm repeats n/2 times
    while (stop_condition != 0)
    {
        //Left to Right Swapping
        for (int i = 0; i < 2 * n - 1; i++)
        {    
            if (disks[i] == "light" && disks[i + 1] == "dark") 
            {
                swap(disks[i], disks[i+1]);
                moves++;
            }
        }
        //Right to Left Swapping
        for (int i = 2*n - 1; i>0; i--){
            if (disks [i] == "dark" && disks[i - 1] == "light") 
            {
                swap(disks[i], disks[i-1]);
                moves++;
            }
        }
    stop_condition--;
    }
    cout << endl << "Your sorted disks: ";
    for (int i = 0; i <= 7; i++) {
        cout << disks[i] << " ";
    } 
    cout << "Number of moves: " << moves << endl;
}


int main(){
    
    vector<string> disks = {"dark", "light", "dark", "light", "dark", "light", "dark", "light"};
    int n = 4;
    cout << "Unsorted disks: ";
    for (int i = 0; i <= 7; i++){
        cout << disks[i] << " ";
        }
    alternating_disks(n, disks);

}