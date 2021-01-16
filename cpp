intro
	this is c++ a bullshit ass language that can do everything very well, except its hard
	its like python, except if python was an actual python trying to kill you while giving you a bunch of nice libraries to lure you in
	you can fuck up in every way and due to it supporting everything there are numerous ways to fuck up
	i will cover this is more detail than i covered rust in cos we all know c++ is where the chads fuck
	i am sorry i have had lots of coffee

	when you think of code, provided youre cool/j , then c++ is what you should think of
	its programming for chads

	be warned c++ doesnt give a fuck about you its lawful neutral, it has laws and it doesnt care about you
	it wont tell you "yo ur missing a semicolon here", itll say ur entire program is outta wak broski on line 794829304 theres a missing }, when you only have 3 lines

	ok intro over lets get to the hot shit

basics
	to import a library its:
	#include <lib>

	the basic hello world program is:
		#include <iostream> //includes input output stream, obvs. not the missing semicolon, not a mistake
		using namespace std; //standard library
		int main(){ //main aint a void, it returns the error code, 0 being ran well
			cout << "Sup bitch";
			return 0;
		}

	cout prints whatever is jammed into it, you can jam multple things into it like this
	cout << "this is the value i" << i << endl; //note endl is equivelent to "\n", but better, it comes in the standard library


	as we both know // means comment
	comments along with whitespace are ignored by the compiler so yea

variables
	can be initialised a number of ways, but before i get into that we wanna get into types
	wanna know what the types are?
	glad you asked
	
	Types
		bool 1 bit
		void, the lack of a type
		char 8 bit
		int 32 bit
		short int 16 bit
		long int 64 bit
		long long int 64 bit (long long is guarenteed to be 64 bit wheras long isnt)
		float 32 bit
		double 64 bit
		long double 96 bit
		wchar_t 16 or 32 bits
		
		you can also put signed or unsigned infront of a value to say that it is signed or unsigned

		qualifiers:
			like modifers such as long, short, signed and unsigned but deal with access and variable saftey
			const - cannot be changed after being set
			volatile - can be changed in ways the program cannot see ie by other programs
			restrict - this is the only way this object can be referanced, (for pointer management)
			register - stored in a register not ram (RARELY USE THIS IT IS UNSTABLE)
			extern - a variable/function that is tored in another function

		enums:
			enums are a way of showing types that arent in cpp, such as color (it is in but this is an example shut up)
			enum color {red,green,blue}; this allows you to select a color from that list, and it makes code more readable than using ints

	declaration:
		type variable = value;
		ie: int i =0; or int i{0};
		to give multiple variables a value on instantation that is different use the 2nd approach
		so int i{2},j{3},k{5};
		if you dont wanna give values,
		int i,j,k; works fine
		if you dont give a value it will have the value that was last in that mermory location
		
		setting a value works like this
		memory location of lvalue = value in memory of right value
		so i=7; sets the memory bits of i to 7, this is why you cant do shit like this
		10=20;

	scope:
		if a global variable has the same name as a local variable and that varibale is used, it will use the closer one (the local one)
		to put a variable in global scope you just declare it outside of any function
	
literals:
	cpp is nice with types in literals but be careful just in case
	512 is 512 in base 10 form
	0xFF is 255 and the 0x means the integer is being given in hex
	032 is not 32 as the 0 means octal so its 26, cos fuck you
	512L or 512l is 512, but a long
	512u or 512U is 512, but unsigned
	the long and unsigned can be combined and arent case sensitive

	floating point literals are more fun
	3.14159 valid floating point literal
	3.14159L would be a valid long floating point literal
	5e10 is 5x10^10 as a float

	char literals are in the form 'a', remeber '' not "" 
	string literals are "text"

define,typedef and const
	#define val 5 //this means that when the compiler reads val it will see it as 5, in the same way it reads comments as nothing
	this works with syntax too, such as
	#define whilst while //leads to posher code

	constants can be set using arguments and are more flexible, and can be a number of types or custom types

	typedef is used for aliases for types such as
	tpyedef u8 unsigned char;
	typedef u64 unsigned long long int;

operators:
	i aint gonna do this, we know em
	you got arithmetic operators, comparitive operators and bitwise operators
	bitwise (just to cover it)
		& - bitwise and
		| - bitwise or
		^ - bitwise xor
		~ - bitwise 2s compiment
		<< - left shift
		>> - right shift
	
	operators can of course be mixed with = to make em assingment (eg + -> +=)

	misc
		sizeof(v) size of v in bytes
		A ? B : C if a then b else c
		. or -> access parts of a class (square.height or array.length)
		cast operators ie int(2.2) returns 2
		&v address of v
		*x value in address x

looping
	while - while condition do
	do - while condition do, but check condition at end
	for - for (int i =0;i<10;i+=1){do thing} - does thing for i values 0 to 9 inclusive
	break - terminated loop currently in
	continue - skip remander of this iteration of the loop
	i will not say the goto, do not use it, it leads to bad code

conditions
	if (a) {b} - if a do b
	if (a) {b}else if (c) {d}else{e} - if a then b, if not a but c then d if not a or c then e
	switch (v){
		case 5:
			cout << "5 is loveley";
		case 10:
			cout << "big 10\n"
			break;
		case 2-11:
			cout << "this is a cool number\n";
			break;
		default:
			cout << "not supported\n";
	}
	this switch will if given 5 print both 5 is loveley and this is a cool number as there was no break on the 5 case
	if 10 it will only print "big 10" as it broke so doesnt evaluate the last options
	if any value from 2 to 11 and not 5 or 10 it will print "this is a cool number"
	if its none of them it will print the default condition that happens if the switch hasnt been broken out of yet "not supported"
	
functions:
	declare them with
	return_type name(paramiters){
		//body
		return output;
	}

	or if you dont want to give them a body yet
	ret_type name(params);

	and you can give them a body like you would above
	
	if the return type is void then you dont need to return anything

	defualt values are done as such in this example
	int sum(int a,int b=20){return a+b;}
	this will give b the value of 20 if it isnt given

	you can pass pointers to directly affect the values, this is the only way you can pass/effect/return arrays using c++
	or pass by referance meaning you dont need to turn the value into a pointer before passing

numbers again:
	math operations: (you need <cmath> for these)
		double cos(double radian)
		double sin(double radian)
		double tan(double radian)
		double log(double n) -> returns log e(n)
		double pow(double x, double n) -> returns x^n
		double htpot(double a,double b) -> if you give a b it will calcuate c by sqrt(a^2 + b^2)
		double sqrt(double n)
		int abs(int)
		double fabs(double) (floating point abs = fabs)
		double floor(double) returns floored double

	random numbers:
		needs both <ctime> <cstdlib>
		srand((unsigned)time(null)); //sets seed to the time rn
		cout << rand() //prints random integer

arrays
	declaration+initialization
		type arrayName[const uint length];
		example initialization:
			nums = {2,3,5,7,11};
		example declar+init
			int nums = {2,3,5,7,11}; //could be int nums[5] = {2,3,5,7,11} but the squared part is not needed

	array[4] gets the 5th item of an array
	arrays must have constant lengths that are declared at compile time
	arrays cannot be passed/returned to and from functions either unless you pass them/return them by pointer

pointers
	THESE ARE NOT DYNAMIC ARRAYS
	pointers are literally pointers to a block of memory, you can ++ em to get the next segment in memory
	declaration
		you can declare a pointer to type T with name ptr like these two ways
		T* ptr;
		T *ptr;
		both mean the same thing, i prefer the first though as i read it as this is a pointer of this type with the name ptr
		wheras i read T *ptr as type T and the value at the address of ptr (for reasons you see later on)
	
	operators
		to get the address of a item you use &var
		to get the value at the address addr use *addr (this is the later on i ment)
		you can also add and subtract to move around
	
	dynamic arrays
		you can set a pointer to the first adress of a block of memory with constant but decided at runtime length such as
		int* ptr;
		ptr = new int[length]; //this is the same as 
		ptr = &((new int[length])[0]); //this

	pointers can be null, beware of such
	you can also point to a pointer and so on, but avoid having a pointer where you have to go through 4 pointers to get to a value, cos thats bad code
	and you should reconsider how you are handling that problem

	to get a feild of an objedct in a pointer without getting the value in the memory directly use ptr->feild;

referances
	referances are values that have the same address in memory as another value
	declaring:
		referance of type T name reffr
		T& reffr = variable;
	
	these are very useful for passing variables and returning them to functions

strings
	strings are arrays of chars, meaning you cannot easily change their length and this is a bit awkward
	they are terminalted with the '\0' char, but you dont need to put that in when you use "text"
	methods
		NOTE THE STRINGS MUST BE NULL TERMINATED FOR THESE TO WORK
		strcpy(s1,s2) -> copies s2 to s1 overwriting s1
		strcat(s1,s2) -> appends s2 to the end of s1
		strlen(s1) -> gets length
		strcmp(s1,s2) -> returns 0 if s1==s2  less than 0 is s1<s2 greater than 0 if s1>s2
		strchr(s1,ch) -> returns a pointer to the first occurance of char ch in string s1
		strstr(s1,s2) -> returns a pointer to the first occurance of string s2 in s1

datetime
	this is in the <ctime> library
	time is stored as 4 types/structs
		clock_t
		time_t
		size_t
		tm

	there are 4 methods
		time_t time(time_t *time) -> returns unix time
		char* ctime(time_t* time) -> returns pointer to string of the form "day month year hours:minutes:seconds year\n\0"
		tm* localtime(time_t* time) -> returns pointer to tm representing local time
		clock_t clock() -> returns amount of time the program has been running
		char* asctime(tm* time) -> returns pointer to string containg data in the structure in the form "day month date hours:minutes:seconds year\n\0"
		tm* gmtime(time_t* time) -> returns pointer to gmt in form of tm
		time_t mktime(tm* time) -> returns calender-time equivalent of time pointed to by time
		double difftime(time_t t1,time_t t2) -> returns differance in seconds between t1 and t2
		size_t strftime() -> formats time in a specific format

	examples
		current time
			time_t now = time(0); //time based on system
			char* dt = ctime(&now); // time in string form
			tm *gmtm = gmtime(&now); // convert to tm struct
			dt =  asctime(gmtm); //time in string form
		seperating it up
			time_t now = time(0);
			cout<<now<<endl;
			tm* ltm = localtime(&now);
			cout << "Year:" << 1900 + ltm->tm_year<<endl;
			cout << "Month: "<< 1 + ltm->tm_mon<< endl;
			cout << "Day: "<< ltm->tm_mday << endl;
			cout << "Time: "<< 5+ltm->tm_hour << ":";
			cout << 30+ltm->tm_min << ":";
			cout << ltm->tm_sec << endl;
	
I/O
	there are 3 modules needed <iosteam> <iomanip> <fstream>
		<iostream> -> cin, cout, cerr, clog
		<iomanip> -> parameterized steam manipulators
		<fstream> -> file processing
	
	iostream methods
		cin>> value; -> puts user input to predefined value variable
		cout << value; -> prints value
		cerr << errormsg<<endl; -> prints error message (unbuffered)
		clog << logtext<<endl; -> prints log message (buffered)

structs
	declared with:
		struct name{
			type feild;
			type feild;
			...
		};
		eg for a book
		struct Books{
			char title[50];
			char author[50];
			char subject[10];
			int id;
		};

	instantation:
		done in one of two ways
		struct Books book1{"hichhikers guide","douglass","sci/fi",1};
		or 
		struct Books book2;
		strcpy(book2.title,"lord of the rings");
		strcpy(book2.author,"JRR tolkein");
		strcpy(book2.subject,"fantasy");
		book2.id = 2;

	sturcts can be easily passed as arguments ie
	int printBook(struct Books book);

	pointers work too ie 
	struct Books* ptr = &book1;

	also insted of using struct everytime you make an object, declare the struct with typedef
	typedef struct{
		//feilds
	} Books;

	so you can make objects with "Books book1;"
