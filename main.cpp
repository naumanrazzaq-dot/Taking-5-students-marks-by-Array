#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter Math marks for 5 students: "<<endl;
    int math[5];
    for(int i=0; i<5; i++){
    do{
        cout<<"Student "<<i+1<<": ";
        cin>>math[i];
        if (math[i] < 0 || math[i] > 100) {
                cout << "Invalid input! Marks must be between 0 and 100\n";
            }
        }while(math[i] < 0 || math[i] > 100);
    } cout<<endl;

    cout<<"Enter Science marks for 5 students: "<<endl;
    int science[5];
    for(int i=0; i<5; i++){
        do{
        cout<<"Student "<<i+1<<": ";
        cin>>science[i];
        if (science[i] < 0 || science[i] > 100) {
                cout << "Invalid input! Marks must be between 0 and 100\n";
            }
        }while(science[i] < 0 || science[i] > 100);
    } cout<<endl;

    cout<<"Enter English marks for 5 students: "<<endl;
    int english[5];
    for(int i=0; i<5; i++){
        do{
        cout<<"Student "<<i+1<<": ";
        cin>>english[i];
        if (english[i] < 0 || english[i] > 100) {
                cout << "Invalid input! Marks must be between 0 and 100\n";
            }
        }while(english[i] < 0 || english[i] > 100);
    } cout<<endl;

    int total[5];
    for(int i=0; i<5; i++){
        total[i]=math[i]+science[i]+english[i];
    }

    int highest = total[0];
    int lowest = total[0];
    int highestStudent = 1;
    int lowestStudent = 1;

    for(int i = 1; i < 5; i++) {
        if (total[i] > highest) {
            highest = total[i];
            highestStudent = i + 1;
        }
        if (total[i] < lowest) {
            lowest = total[i];
            lowestStudent = i + 1;
        }
    }
    cout<<"Total Marks: "<<endl;
    for(int i = 0; i < 5; i++) {
        cout<<"Student "<< i + 1 <<": "<<total[i];
        if (i + 1 == highestStudent) {
            cout << " (Highest)";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Student with Lowest Marks: Student " << lowestStudent << " with " << lowest << " marks" << endl;
    cout << endl;

    cout<<"All Marks Result: "<<endl;
    for(int i=0; i<5; i++){
        cout<<"Student "<<i+1<<" - "<<"Math: "<<math[i]<<", "<<"Science: "<<science[i]<<", "<<"English: "<<english[i]<<", "<<"Total: "<<total[i]<<endl;
    } cout<<endl;


    return 0;
}
