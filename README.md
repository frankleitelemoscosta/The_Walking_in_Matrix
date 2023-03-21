<h1>The_Walking_in_a_Matrix</h1>

<h2>THE PROBLEM</h2>

This problem is about how walking in a matrix, where the Jack can init in
any position of the matrix and he will walking per it for the houses with 
the bigger element, and for that it´s necessary to make different checks 
in the positions of the matrix, checks in right or down or in the diagonally 
or back one position, and after go to the position that have the bigger 
element between the five options, this is a greedy algorithm. 

<h3>Greedy Algorithm</h3>

This method check all options that you have in the moment and select the 
best options and it´s not important if this is good or bad in the future, 
in other words the greedy method make the best select in each stage with 
base in the informations provided in that stage. He can used when you 
need check the best possible the each interaction. Here the method is 
used for select the bigger number between five option in each stage and
sum the selected element and recorde in the variable Bigger. 

<h3>The walking in a Matrix</h3>

This project use the walking in a matrix, because is necessary sum all bigger
numbers and show the result in the finish of the walking. this implemetation happend
whit a while that have like stop a one variable that not change while the jack 
no arrive the last position of the matrix, and while this loop is executed into
in five beguiner checks construed with five ternary operators,it´s other way
of use "if" and "else", but, what happend when into in this a function? what happend
is the acess the adress in the houses around the current house and check if the
variable Bigger that in start execution the "SearchingTheBiggerElement" function
like zero and other stage that finish the check this variable return for zero
and recalculated again, because in the next check the last result can make a 
difference in the search the bigger number, because the variable Bigger will
have the bigger value of the last case can with this changed the real result
of the current case the case that in this explain use the greedy method, this
method in this case will select the bigger numbers and sum with the last bigger
number that sumed the variable sum that in the predecessor execution of the loop
with check the houses around the where jack be in the 

<h2>ONE EXAMPLE OF THE COMPILATION AND EXPLANATIONS ABOUT PROJECT</h2>

Here you will see the program and your execution, that is divide in three visual
stages, they are:

OBS: If you wanna see this stages in pratice, you skip for part of the readme that 
tell about the compilation this project and understand the compilation way, and after
you need return for here.

<ul>
  <li>Extract of informations</li>
  <li>Information Processing</li>
  <li>Results</li>
</ul>

<h3>Extract of informations</h3>

The extract of informations is the first thing that is execute and happend when
you start the program, for this you write make in terminal and after you write 
make run for execute the program, and extraction information will be collected.

<h3>Information Processing</h3>

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

<ul>
  <li>Recovery the size matrix:</li>
</ul>

The recovery the size matrix happend per a open the data file, and read the first
row, and stop the read with the break, because in this while not filling the vector
and just filling in the variables Row and Colunm.

<ul>
  <li>Alocation the vector:</li>
</ul>

The vector is alocated with the use of the variable Row, the matrix of the program
every is square, so was possible use the pow function of the librari math for have
the total number of elements, and use too the malloc function for accomplish the 
alocation.

<ul>
  <li>Filling in the vector:</li>
</ul>

For filling in the vector was used the fscanf and after this vector use for filling
the matrix when solicited for user.

After the compiler into to the while where the filling in matrix and the walking 
happend.When the compiler is in the while where the change and walking happend you will
see the question: "You want init the walking in the matrix in the row?" and the
question: "You want init the walking in the matrix in the colunm?".This is happend
after the filling in the matrix, where a counter will forward for acess the houses
of vector and atribuation to matrix, what happend is that each stage that this 
function is open the counter stop where star other matrix, and this way every 
acess this function the matrix will filling in with a new numbers.

The function:

![](https://user-images.githubusercontent.com/107070061/226183797-ab0bd994-0470-4174-9e1e-879626d951f1.png)

Later the two start questions the function "SearchingTheBiggerElement" is called
and start the walking per matrix, look:

![](https://user-images.githubusercontent.com/107070061/226205746-e24152ef-b361-4a71-b179-a39ebd03aac4.png)

In this moment we have three procedure happening:

<ul>
  <li>Receiving parameters</li>
  <li>Check the neighbors</li>
  <li>Change the position of the Jack and Sum of selected elements</li>
</ul>

<ul>
  <li>Receiving parameters:</li>
</ul>

The first stage is the pass to function the parameters in the main, look:

![](https://user-images.githubusercontent.com/107070061/226407229-337bbf41-c67c-4d45-8b5c-39ae8607caa6.png)

this parameters are: one variable of the type Matrix struct, start row and
colunm, and the last parameter is a varable that recorde the sum of the big
numbers along the way of the Jack. 

When this variable arrive in the function will have this uses:

![](https://user-images.githubusercontent.com/107070061/226456540-103ab10b-20ae-408f-8810-2e30b4ec428f.png)

Watch that four variables was added in the function and two variables received
the start row and start colunm, because is necessary change the variable in each 
iteration, and the two first operation are performed because for the start position
have means in the finish procedure

<ul>
  <li>Check the neighbors:</li>
</ul>

Later the received the compiler into to while that start the search in the matrix,
look:

![](https://user-images.githubusercontent.com/107070061/226456408-a04dd628-f39a-4910-9428-5086a03845a9.png)

whatch that first is necessary to analyze if is possible performed the check, because 
if the position not exist, an error will, that IDE will notify like "segmentation fault",
if the check will true, start a checking the values of the neighbors positions in around
the current position, they are: main diagonal of down, second diagonal of down, the right,
the left and the down. when meet the Bigger between five options, it´s save in the variable
Bigger.

<ul>
  <li>Change the position of the Jack and Sum of selected elements:</li>
</ul>

After meet the Bigger element in the current stage, the Jack walking the position where 
this element be. look:

![](https://user-images.githubusercontent.com/107070061/226481108-af3c51dc-8cce-4233-bd9f-eb628a455342.png)

Watch that change and sum the value that have the current position after the Jack change your
position, look this:

![](https://user-images.githubusercontent.com/107070061/226481417-3f84280f-f385-4d91-b595-147c62312bcf.png)

What happend if this check will true, the Row is sum with one, and the sum variable is added
of itself the before value, and this way the Jack walking per the matrix.

<h3>Results</h3>

For you see the way like this algorithm works, here have a example of input and output, look:

Input(data file and two start questions):

![](https://user-images.githubusercontent.com/107070061/226606386-889cbc19-fb1c-49fb-b9cb-a9d33a679759.png)

![](https://user-images.githubusercontent.com/107070061/226608664-f674a563-0f14-4ee5-8f7f-5105c27a9cf1.png)

Output:

![](https://user-images.githubusercontent.com/107070061/226606284-f48886c5-3879-4d19-9afa-d265e6e5e8c9.png)

How expected the Jack walking per positon of the matrix that had the bigger
elements and sumed this components, and with this Jack arrive the last element
of the matrix that was the goal.

<h2>HOW TO DO FOR COMPILE THE CODE THIS PROJECT</h2>

This project use the Make file for compiler all files that have function
for operation in the all executions for walking in the matrix and sum the
elements, these are the pictures for you to understand how compiler and
know how this project works that are divide in three parts,look:

<ul>
  <li>Compilation</li>
  <li>Execution</li>
  <li>Clean executable</li>
</ul>

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



