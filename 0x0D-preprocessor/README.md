Function-like macros can take arguments, just like true functions. To define a macro that uses arguments, 
you insert parameters between the pair of parentheses in the macro definition that make the macro function-like. 
The parameters must be valid C identifiers, separated by commas and optionally whitespace.

To invoke a macro that takes arguments, you write the name of the macro followed by a list of actual arguments in 
parentheses, separated by commas. The invocation of the macro need not be restricted to a single logical line—it can 
cross as many lines in the source file as you wish. The number of arguments you give must match the number of parameters 
in the macro definition. When the macro is expanded, each use of a parameter in its body is replaced by the tokens of the 
corresponding argument. (You need not use all of the parameters in the macro body.)

As an example, here is a macro that computes the minimum of two numeric values, as it is defined in many C programs, and some uses.

     #define min(X, Y)  ((X) < (Y) ? (X) : (Y))
       x = min(a, b);          ==>  x = ((a) < (b) ? (a) : (b));
       y = min(1, 2);          ==>  y = ((1) < (2) ? (1) : (2));
       z = min(a + 28, *p);    ==>  z = ((a + 28) < (*p) ? (a + 28) : (*p));
(In this small example you can already see several of the dangers of macro arguments. See Macro Pitfalls, for detailed explanations.)
