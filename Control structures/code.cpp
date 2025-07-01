// C++ is an object-oriented programming language.
// It is strong and flexible — you can build almost anything with it!

// -------------------------------------------------
// ▶ Repeat Structure: for loop
// Syntax:
//     for (initialization; condition; step) {
//         // body of the loop
//     }

// Example: General format of a for loop
int main() {
    for (initial value; loop condition; step) {
        // 1st command
        // 2nd command
        // ...
    }
}

// -------------------------------------------------
// ▶ Infinite Loop
// Syntax:
//     for ( ; ; ) {  }  ← This runs forever
// Stop it manually: CTRL + BREAK

int main() {
    for ( ; ; ) {
        // infinite commands
    }
}

// -------------------------------------------------
// ▶ Example: Print numbers 0 to 4
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
}

// -------------------------------------------------
// ▶ Example: Enter 5 numbers and calculate average
#include <iostream>
using namespace std;

int main() {
    int i, num, sum = 0;
    float ave;
    const int n = 5;  // 'const' means the value cannot be changed later

    for (i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        sum += num;
    }

    ave = static_cast<float>(sum) / n;
    cout << "The average is " << ave;

    cin.get();  // Hold the screen open
    cin.get();  // (Usually used in older systems)
}

// -------------------------------------------------
//   Example: count letter
#include <iostream> 
using namespace std;

int main() {
	int count;
	cout<<"Enter a sentence end with (.) :"<<endl;
	for(count=0 ; cin.get() != '.' ; count++);
	cout<<"the number of character is : "<<count;
	cin.get();
	cin.ignore();
}

// -------------------------------------------------
// use , in for loop and manage more it 
for (i = 0 , m += 1 ; i > 10 ; i++ , --m){
	...
}

// -------------------------------------------------
//generate a mathmatic code into program code 
#include <iostream> 
using namespace std;
#define NUM 25
int main() {
	int count ;
	float sum , x ;
	for(sum = 0 , x = 1.0 , count = 1 ; count<= NUM ; count ++ , x *= 2){
		sum += 1 / x;
		cout<<"sum = " << sum <<" when count = "<<count << endl;
	}
	cin.get();
}
// -------------------------------------------------
//loop : while 
while (condition){
	command 1 ;
	command 2 ;
	...
	command n ;
}

// -------------------------------------------------
#include <iostream> 
using namespace std;
int main() {
	int count = 0 ;
	cout<<"type a statemanet and ENTER to end : "<<endl;
	while(cin.get() != '\n')
		count ++ ; 
	cout << "length of the statemant is : "<<count;
	cin.get();
	cin.get();
}
// -------------------------------------------------
#include <iostream> 
using namespace std;
int main() {
	int x , sum = 0 , n = 0 ;
	char ans = 'y';
	while(ans == 'y'){
		cout<<"Enter a number : ";
		cin>> x ;
		sum += x*x ;
		n++;
		cout<<"Do you want to continue ?(y/n)";
		cin>>ans ; 
	}
	cout<<"\n you enterd "<<n <<" numbers."<<endl;
	cout<<"\n sum of squars is : "<<sum;
	cin.get();
	cin.get();
}
// -------------------------------------------------
// loop : do-while structure 
do {
	command 1 ;
	command 2 ;
	...
	command n ;
	
} while (condition);
// -------------------------------------------------
//inverse number
#include <iostream>
using namespace std;

int main() {
    int num, digit;
    while(true){
    	cout<<"\n Enter a Number : ";
    	cin>>num;
    	cout<<"inverse = ";
    	do {
    		digit = num % 10 ;
    		cout<<digit;
    		num/= 10;
		}   while(num != 0);
	}
}
// -------------------------------------------------
//if condition : 
if(condition){
	command 1 ;
	command 2 ;
	...
	command n ;
}
else {
	command 1 ;
	command 2 ;
	...
	command m ;
}
// -------------------------------------------------
//ascki code
#include <iostream>
using namespace std;

int main() {
    int i ;
    char ch ;
    for(i = 41 ; i <= 120; i++){
    	ch = i ;
    	cout << i << "  = "<<" "<<ch<<" ";
    	if(i % 5 == 0)
    		cout << "\n";
	}
	cin.get();
}











