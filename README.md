# Push_swap
![push swap](https://raw.githubusercontent.com/ridaelfagrouch/push_swap_42/main/assets/push_swap.png)
The project that will make you sort numbers

**Push_swap** is a project that teaches you about sorting algorithms and how to optimize them. The project involves sorting a stack of integers using a limited set of operations (push, swap, and rotate) while minimizing the number of moves.

## Objective
At the beginning, you must have one stack, called **stack a**, with all your numbers placed next to each other. With the help of the operations below, at the very end, all the numbers in your stack **a** will have to be sorted.
```
⚠️  At the end, you don't need to return the sorted list, just the sequence of operations to sort the list.

You can normalize the list if needed.
```

To do this, you can have a second empty stack, called **stack b**, on which you can temporarily send elements. Here are the operations you can use (and that you will have to code):

### Operations

- **sa (swap a)**: Swap the first 2 elements at the top of the stack a. Does nothing if there is only one or none.

- **sb (swap b)**: Swap the first 2 elements at the top of the stack b. Does nothing if there is only one or none.

- **ss**: Perform `sa` and `sb` at the same time.

- **pa (push a)**: Take the first element on top of stack b and put it on stack a. Does nothing if b is empty.

- **pb (push b)**: Take the first element on top of stack a and put it on stack b. Does nothing if a is empty.

- **ra (rotate a)**: Shift all the elements of stack a up by one position. The first element becomes the last.

- **rb (rotate b)**: Shift all the elements of stack b up by one position. The first element becomes the last.

- **rr**: Perform `ra` and `rb` at the same time.

- **rra (reverse rotate a)**: Shift all elements of stack a down by one position. The last element becomes the first.

- **rrb (reverse rotate b)**: Shift all the elements of stack b down by one position. The last element becomes the first.

- **rrr**: Perform `rra` and `rrb` at the same time.

## Examples
<strong>We have 6 random numbers</strong>, placed on a first stack, called stack A, as follows. Obviously, stack B is empty at the beggining. Stack B will be used temporarily throughout your program, but must be empty again at the end, with the list sorted into stack A.

![initial stacks](https://42-cursus.gitbook.io/~gitbook/image?url=https%3A%2F%2F2977649544-files.gitbook.io%2F%7E%2Ffiles%2Fv0%2Fb%2Fgitbook-x-prod.appspot.com%2Fo%2Fspaces%252Fz2zo8aAL0o31034sj7J7%252Fuploads%252Fij5SIDHSSvOhHj92oJ33%252Fimage.png%3Falt%3Dmedia%26token%3D69c35151-c512-4f44-8eb6-19cc22f1b607&width=768&dpr=4&quality=100&sign=6f9a7d4f&sv=1)
Let's say we want to move an element from stack A to stack B. This can be done with the "PUSH" operation. 
![PUSH example](https://42-cursus.gitbook.io/~gitbook/image?url=https%3A%2F%2F2977649544-files.gitbook.io%2F%7E%2Ffiles%2Fv0%2Fb%2Fgitbook-x-prod.appspot.com%2Fo%2Fspaces%252Fz2zo8aAL0o31034sj7J7%252Fuploads%252FALXRgodpBgdEsxRjTOad%252Fimage.png%3Falt%3Dmedia%26token%3D99d46e23-7cb5-403b-afd0-104ec0f3bba2&width=768&dpr=4&quality=100&sign=36c2d7e5&sv=1)

<strong>The first element of stack A becomes the first element of stack B</strong>. Don't forget then that the second element of the A stack becomes the first, and so on. Here stack B was empty, but if there were numbers in it, the first element of stack B would become the second and so on. The process is the same when you want to send an element from list B to list A.

Let's continue with the modified list above.<strong> We can also swap the first two numbers of a stack </strong> by using the "SWAP" operation.

![SWAP example](https://42-cursus.gitbook.io/~gitbook/image?url=https%3A%2F%2F2977649544-files.gitbook.io%2F%7E%2Ffiles%2Fv0%2Fb%2Fgitbook-x-prod.appspot.com%2Fo%2Fspaces%252Fz2zo8aAL0o31034sj7J7%252Fuploads%252FSmQJOlQjeGF7H2Ea3cCZ%252Fimage.png%3Falt%3Dmedia%26token%3D74c476b3-cf8b-4d19-b259-06258bde8d8c&width=768&dpr=4&quality=100&sign=9b66e4bc&sv=1)

Here we can see that the only two numbers that have been impacted are the first two in the A stack. The logic remains the same when swapping two elements of the B stack. This one is easy.

One last type of operation can be done. <strong>The rotation</strong>. There are two types of rotations: rotation and reverse rotation. All the numbers in the stack are affected this time.

Normal rotation allows you to push all the numbers up and reverse rotation, all the numbers down. Here is a schematic example of both rotations:

![ROTATE example](https://42-cursus.gitbook.io/~gitbook/image?url=https%3A%2F%2F2977649544-files.gitbook.io%2F%7E%2Ffiles%2Fv0%2Fb%2Fgitbook-x-prod.appspot.com%2Fo%2Fspaces%252Fz2zo8aAL0o31034sj7J7%252Fuploads%252FsiB3DTRrSAJF8nQ0hK8X%252Fimage.png%3Falt%3Dmedia%26token%3D89843cc8-6d97-4f2b-8787-1a1f258b8ae6&width=768&dpr=4&quality=100&sign=4fe0ce92&sv=1)

![REVERSE ROTATE example](https://42-cursus.gitbook.io/~gitbook/image?url=https%3A%2F%2F2977649544-files.gitbook.io%2F%7E%2Ffiles%2Fv0%2Fb%2Fgitbook-x-prod.appspot.com%2Fo%2Fspaces%252Fz2zo8aAL0o31034sj7J7%252Fuploads%252FKwUZNTLjTFmig6ioU3Jf%252Fimage.png%3Falt%3Dmedia%26token%3D55e18d0c-5d8a-482c-9d60-4dd4e879e88e&width=768&dpr=4&quality=100&sign=9c0cab79&sv=1)

And that's it for the instructions. Of course you will need to combine all the instructions in order to write your own algorithm. I hope that these few examples will help you to better understand this project and make coding easier for you. Let's start now !

# Algorithms

Regarding the code, we don't learn anything new in this project. Except to master the management of chained lists or arrays and the structures. However, the most important concept that we discover in push swap is the algorithms.

# What's an Algorithm?

An algorithm is a set of steps for solving a specific problem or completing a task.

Think of it like a recipe that outlines how to make a cake from scratch. Each step is clearly defined and must be followed in a specific order to achieve the desired outcome. Another example would be solving a Rubik's Cube. When you see certain shapes, you have to execute certain instructions.

Algorithms can be applied to a wide range of problems, from simple arithmetic operations to complex machine learning models.

## Importance of Learning Algorithms

Learning algorithms, especially in the context of push_swap, is useful for several reasons:

- **Problem-solving skills**: Algorithms help develop problem-solving skills as it requires one to understand the problem, come up with a solution, and then implement it.

- **Understanding of data structures**: The "push_swap" problem involves sorting data, so understanding algorithms helps in understanding different data structures like stacks and arrays and how to manipulate them.

- **Improved efficiency**: Understanding algorithms helps improve the efficiency of code by reducing the number of operations required to solve a problem.

- **Preparation for technical interviews**: Knowledge of algorithms is often tested in technical interviews as it provides insight into a candidate's problem-solving skills and understanding of basic computer science concepts.

A problem can always have several solutions. Some solutions are more efficient than others. This means that one algorithm can be more efficient and optimized than another. This is called algorithmic complexity.

## Algorithm Complexity

Algorithm complexity refers to the amount of resources (such as time or memory) required for an algorithm to solve a problem. It provides a way to measure and compare the efficiency of different algorithms.

There are two main types of algorithm complexity:

- **Time complexity**: Measures the amount of time an algorithm takes to solve a problem.

- **Space complexity**: Measures the amount of memory an algorithm takes to solve a problem.

### Measurement of Algorithmic Complexity

The complexity is usually expressed using Big O Notation, which provides an upper bound on the resources required by the algorithm. The most classical approach is to calculate the worst-case computation time. Let's take an example:

Let's say you have an algorithm that takes 100 milliseconds to solve a problem with an input size of 10. If you double the size of the input, it might take a maximum of 200 milliseconds. If you have an input size of 30, it might take a maximum of 300 milliseconds. Etc. This means the time complexity of the algorithm is O(n), where n is the size of the input.

Here is a diagram that compares several levels of complexity/big O notations with each other:
![Algorithm comparisons](https://42-cursus.gitbook.io/~gitbook/image?url=https%3A%2F%2F2977649544-files.gitbook.io%2F%7E%2Ffiles%2Fv0%2Fb%2Fgitbook-x-prod.appspot.com%2Fo%2Fspaces%252Fz2zo8aAL0o31034sj7J7%252Fuploads%252Fa2EaUcsJYBCqwer5shYi%252Fimage.png%3Falt%3Dmedia%26token%3D28855aa9-cec7-437d-8ea1-52ce82424088&width=768&dpr=2&quality=100&sign=3fbb8eeb&sv=1)

## Complexity Notations

- **O(1)** represents a constant time complexity, which means that the time required by the algorithm does not depend on the size of the input. For example, accessing an element in an array using an index is O(1).

- **O(n)** represents a linear time complexity, which means that the time required by the algorithm grows linearly with the size of the input. For example, a simple linear search algorithm is O(n).

- **O(log n)** represents a logarithmic time complexity, which means that the time required by the algorithm grows logarithmically with the size of the input. For example, a binary search algorithm is O(log n).

- **O(n^2)** represents a quadratic time complexity, which means that the time required by the algorithm grows exponentially with the size of the input. For example, a simple bubble sort algorithm is O(n^2).

It's important to note that Big O Notation provides an upper bound on the growth rate of an algorithm and is not an exact measure of the resources required by the algorithm. The actual resources required by an algorithm can be different from the estimate provided by Big O Notation.

## Known Sorting Algorithms

To achieve the push_swap project, you will need to choose a sorting algorithm that will work with the instructions you are allowed to use and that will make the fewest possible moves.

Below is an example of sorting algorithms and their complexity, according to three different methods for the time complexity and with one for the space complexity.

![Complexity of sorting algorithms. Source: Big-O Cheat Sheet, 2016.](https://42-cursus.gitbook.io/~gitbook/image?url=https%3A%2F%2F2977649544-files.gitbook.io%2F%7E%2Ffiles%2Fv0%2Fb%2Fgitbook-x-prod.appspot.com%2Fo%2Fspaces%252Fz2zo8aAL0o31034sj7J7%252Fuploads%252FOsCFOcmsKWChPAJLaFEW%252Fimage.png%3Falt%3Dmedia%26token%3Da236370e-cfca-4b3f-9d6b-8ff778570d65&width=768&dpr=4&quality=100&sign=fe6ca2b8&sv=1)

## Auteurs

Ce projet a été réalisé par [ael-amin](https://github.com/ael-amin).
