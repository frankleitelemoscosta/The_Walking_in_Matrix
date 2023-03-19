<h1>The_Walking_in_Matrix</h1>

<h2>THE PROBLEM</h2>

This problem is about how walking in a matrix, where the Jack can init in
any position of the matrix and he will walking per it for the houses with 
the bigger element, and for that it´s necessary to make different checks 
in the positions of the matrix, checks in right or down or in the diagonally 
or back one position, and after go to the position that have the bigger 
element between the five options, this is a greedy method. 

<h3>THE GREEDY METHOD</h3>

This method check all options that you have in the moment and select the 
best options and it´s not important if this is good or bad in the future, 
in other words the greedy method make the best select in each stage with 
base in the informations provided in that stage. He can used when you 
need check the best possible the each interaction. Here the method is 
used for select the bigger number between five option in each stage and
sum the selected element and recorde in the variable Bigger 

<h3>THE WALKING IN A MATRIX</h3>

This project use the walking in a matrix, because is necessary sum all bigger
numbers and show the result in the finish of the walking. this implemetation happend
whit a while that have like stop a one variable that not change while the jack 
no arrive the last position of the matrix, and while this loop is executed into
in five beguiner checks construed with five ternary operators,it´s other way
of use "if" and "else", but, what happend when into in this a function? what happend
is the acess the adress in the houses around the current house and check if the
variable Bigger that in init execution the "SearchingTheBiggerElement" function
like zero and other stage that finish the check this variable return for zero,
because in the next check the last result can make a difference in the search 
the bigger number, because the variable Bigger will have the bigger value of the
last case can with this changed the real result of the current case
the case that in this explain use the greedy method, this method in this case 
will select the bigger numbers and sum with the last bigger number that sumed
the variable sum that in the predecessor execution of the loop with check the
houses around the where jack be in the 

<h2>ONE EXAMPLE OF THE COMPILATION AND EXPLANATIONS ABOUT PROJECT</h2>

Here you will see the program and your execution, that is divide in three visual
stages, they are:

<ul>
  <li>Compilation</li>
  <li>Execution</li>
  <li>Results</li>
</ul>

<h3>COMPILATION</h3>

The compiler is the first thing for you execute and happend for start the program,
for this you write make in terminal and after you write make run for execute
the program look:

![](https://user-images.githubusercontent.com/107070061/226108916-b37c30be-d111-4ec2-9d4a-1e01bd3901ed.gif)

<h3>EXECUTION</h3>

After this procedure the compiler read a main, where the first comand is open
and write the file data that not have the matrix for walking, in this moment
the function "SetMatrixSize" and function "SaveMatrix" are called and insert 
in the file the size and the elements of the matrix, look:

Location where the function be in the main file:

![](https://user-images.githubusercontent.com/107070061/226125908-841bb7df-d8d9-4c62-8e0b-346aef1f8646.png)

Insert elements in the matrix:

![](https://user-images.githubusercontent.com/107070061/226119230-e25537be-8889-48f3-a903-aea7a2b00a11.gif)

This insertion happend with use the function "GeneretaMatrixValues", this 
function filling in the matrix of the struct Matrix with random values with
the used the function "rand()" of the C programming lenguage with values between
0-99, this interval was selected because it´s not good have the big values for 
sum.

Later the compiler open again the data file and read the first matrix recorded 
in this file, and this can seem repetitive and wrong, but no because in the 
moment of recorde matrix in the data file is used just one matrix and when add
the more of one matrix, and the matrix will be with the last matrix generated
per the program. With the file open the read all matrix and recorde in a vector.

Location where this procedure happend in the code:

![](https://user-images.githubusercontent.com/107070061/226176085-0af7bd17-4338-4595-b55d-43144b327a1f.png)

In short in this moment happend three things:

<ul>
  <li>Recovery the size of matrix</li>
  <li>Alocation the vector</li>
  <li>Filling in the vector</li>
</ul>

When the compiler is in the while where the change and walking happend you will
see the question: "You want init the walking in the matrix in the row?" and the
question: "You want init the walking in the matrix in the colunm?"

<h2>HOW TO DO FOR COMPILE THE CODE THIS PROJECT</h2>

This project use the Make file for compiler all files that have function
for operation in the all executions for walking in the matrix and sum the
elements, these are the pictures for you to understand how compiler and
know how this project works,look:

![](https://user-images.githubusercontent.com/107070061/226108916-b37c30be-d111-4ec2-9d4a-1e01bd3901ed.gif)

The first comand compile the code and used the comand with "gcc", this is 
happend because the Make file is just a list of comands that required when 
their comands are write in the terminal, this means that you can open the
make file catch the comand wrote and put in terminal and click enter that
will happend the compile and execute and remove the executable. Each comand
will do a action,the make compiler, and make run execute the executable that
was generated when the comand make wrote in terminal, and the make clean
clean the executable the files of the project, they are:

When write the make comand:

![](https://user-images.githubusercontent.com/107070061/226111053-a048662f-333f-468f-91b8-5c5653f88efa.png)

Before the comand make:

![](https://user-images.githubusercontent.com/107070061/226111124-dbd1bd0e-a91c-40d8-8850-b491515baec6.png)

After the comand make:

![](https://user-images.githubusercontent.com/107070061/226111168-c0c2a98b-eb4d-4dcc-b414-b7d4ab07f1cc.png)



