<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {

    auto lang = "C++";
    cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {

        cout << "amyaya test ccccc amya again" << i << endl;
        cout << "New Line meme first branch amaya" <<endl;
    }
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
=======
/*  Basics and Fundamentals of C++
 *  Balion, Angel Amaya B.
 */


#include <iostream>
#include <limits>

using namespace std;

//void function for validating input
void ValidateInput(int &num, bool &valid, int max){
    cin>>num;
    if(cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "\tInvalid input. Please enter an integer."<<endl<<endl;
        valid = false;
    }else if(max != 0 && (num > max || num <= 0)){ //max == 0 means walang maximum na nakaset
        cout << "\tInvalid input. Please enter an integer between 1 and "<< max <<"."<<endl<<endl;
        valid = false;
    }else{
        valid = true;
    }

}

int main(){
    int fnum, snum;
    bool valid = true;

    cout<<"\t\t\tMerge Descending Order"<<endl<<endl;

    //First Array
    do{ //get array size
        cout<<"Enter number of elements for the first array (10 max): ";
        ValidateInput(fnum, valid, 10);
        while ((getchar()) != '\n');
    }while(!valid);
    int firstArray[fnum];
    cout<<"Enter "<< fnum <<" elements of the first array:"<<endl;
    for(int i = 0; i < fnum; i++){ //get elements of the array
        do{
            cout<<"["<<i+1<<"]: ";
            ValidateInput(firstArray[i], valid, 0);
            while ((getchar()) != '\n');
        }while(!valid);
    }

    cout<<endl<<endl;

    //Second Array
    do{ //get array size
        cout<<"Enter number of elements for the second array (10 max): ";
        ValidateInput(snum, valid, 10);
        while ((getchar()) != '\n');
    }while(!valid);
    int secondArray[snum];
    cout<<"Enter "<< snum <<" elements of the second array: \n"; //get array elements
    for(int i = 0; i < snum; i++){
        do{
            cout<<"["<<i+1<<"]: ";
            ValidateInput(secondArray[i], valid, 0);
            while ((getchar()) != '\n');
        }while(!valid);
    }

    //Combine First and Second Array
    int totalNum = fnum + snum;
    int mergeArray[totalNum];
    for(int i = 0; i < totalNum; i++){
        if(i < fnum){
            mergeArray[i] = firstArray[i];
        }else{
            mergeArray[i] = secondArray[i-fnum];
        }
    }

    //bubble sort the merge array in descending order
    for(int i = 0; i < totalNum; i++) {
        int prev;
		for(int j = i+1; j < totalNum; j++) {
            //if the next element is greater than the current element, switch
			if(mergeArray[i] < mergeArray[j]) {
				prev = mergeArray[i];
				mergeArray[i] = mergeArray[j];
				mergeArray[j] = prev;
			}
		}
	}
    cout<<"hihi";

    //print
    cout<<endl<<endl<<"Descending Merge: ";
    for(int i = 0; i < totalNum; i++){
        cout<<mergeArray[i]<<" ";
    }
}

