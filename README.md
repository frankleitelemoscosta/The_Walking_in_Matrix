<h1>The_Walking_in_Matrix</h1>

<h2>THE PROBLEM</h2>

This problem is about how walking in a matrix, where the Jack can init in
any position of the matrix and he will walking per it for the houses with 
the bigger element, and for that it´s necessary to make different checks 
in the positions of the matrix, checks in right or down or in the diagonally 
or back one position, and after go to the position that have the bigger 
element between the four options, this is a greedy method. 

<h3>THE GREEDY METHOD</h3>

This method check all options that you have in the moment and select the 
best options and it´s not important if this is good or bad in the future, 
in other words the greedy method make the best select in each stage with 
base in the informations provided in that stage. He can used when you 
need check the best possible the each interaction. Here the method is 
used for select the bigger number between four option in each stage and
sum the selected element and recorde in the variable Bigger 

<h3>THE WALKING IN A MATRIX</h3>

This project use the walking in a matrix, because is necessary sum all bigger
numbers and show the result in the finish of the walking. this implemetation happend
whit a while that have like stop a one variable that not change while the jack 
no arrive the last position of the matrix, and while this loop is executed into
in four beguiner checks construed with four ternary operators,it´s other way
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

<h2>ONE EXAMPLE OF COMPILER PROGRAM AND EXPLANATIONS ABOUT PROJECT</h2>

Here you will see the program and your execution, that is divide in three visual
stages, they are:

<ul>
  <li>Compiler</li>
  <li>Execution</li>
  <li>Results</li>
</ul>

<h2>HOW TO DO FOR COMPILER THE CODE THIS PROJECT</h2>

This project use the Make file for compiler all files that have function
for operation in the all executions for walking in the matrix and sum the
elements, these are the pictures for you to understand how compiler and
know how this project works,look:

![](https://user-images.githubusercontent.com/107070061/226108916-b37c30be-d111-4ec2-9d4a-1e01bd3901ed.gif)

The first comand compiler the code and used the comand with "gcc", this is 
happend because the Make file is just a list of comands that required when 
their comands are write in the terminal, this means that you can open the
make file catch the comand wrote and put in terminal and click enter that
will happend the compiler and execute and remove the executable. Each comand
will do a action,the make compiler, and make run execute the executable that
was generated when the comand make wrote in terminal, and the make clean
clean the executable the files of the project, they are:

When write the make comand:
![](https://user-images.githubusercontent.com/107070061/226111053-a048662f-333f-468f-91b8-5c5653f88efa.png)

Before the comand make:

![](https://user-images.githubusercontent.com/107070061/226111124-dbd1bd0e-a91c-40d8-8850-b491515baec6.png)

After the comand make:

![](https://user-images.githubusercontent.com/107070061/226111168-c0c2a98b-eb4d-4dcc-b414-b7d4ab07f1cc.png)



