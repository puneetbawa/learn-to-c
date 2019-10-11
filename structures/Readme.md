Structure is user-defined datatype and using the structure we define a datatype which is capabale of holding more than one element of differnet types. However, we have primitive datatypes i.e. char, int, float , double etc where as with the help of the structures one can defines its own data type which is termed to be user defined datatype.

SYNTAX:

struct <Identity>{
	data-type elem1;
	data-type elem2;
	...............
        ...............
}; //Important point here is that every structure must end with the semicolon.

struct <Identity> <object_name> //The part for this used is the declaration.

Also, the structure can be declared with object variable as mentioned below:

struct <Identity>{
	data-type elem1;
	data-type elem2;
	................
	................
}e1; So the object name can be called herewith and important point remain same for the rule of semicolon as mentioned earlier. 

*NOTE: we cannot initialize elements/variables inside the structure as the structure is meant for the declaration not he definition.*


EXAMPLE:

struct Employee{
	int eno;
	char ename[20];
	float esal;
};

So, inorder to initialize the variables we use accessor(.) or dot operator. 
Consider identity to be named as Employee and object_name as e1

*The syntax for declaration is as following 
For eg. struct Employee e1 //
The syntax uses multiple methods inorder to intialize any structure.

Method1:
e1.eno=10;
e1.ename="puneet";
e1.esal=28741.50;

Method2:
e1 = {10,"puneet",28741.50};

Method3:
Employee e1 = {.eno=10,.ename="puneet",.esal=28741.50}*

The Following are the programs that will be used for the practice of basic programming in strutures. 
*The braces at the end indicates the code in particular directory*
1) Write a program to show the basic use of the structure.{emp_details.c}
2) Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.{feet_inch.c}
3) Write a program to increment the values using the parameter where function is used inorder to intialize the value of the declared variables inside the structure.{in_func_str_dec.c} 

Points to Remember in C Nested Structures

To print the structure variable we have to use dot operator (.)
To print the C nested structure variable we have to use 2 dot operators such as (Structure Variable. Nested Structure Variable. Structure Member)
printing the structure pointer variable we have to use arrow operator instead of dot operator. (Structure Variable -> Structure Member)
To print the C nested structure variable using pointers then we have to use combination of arrow operator and dot operator. (Structure Variable -> Nested Structure Variable. Structure Member)
