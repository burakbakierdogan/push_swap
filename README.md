# push_swap
Sorting data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed I’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.
ush_swap is a program written in C that takes a list of integers as input and performs a series of operations on them to sort them in ascending order. The program is designed to work with a set of two stacks, referred to as stack A and stack B. The goal of the program is to sort the list of integers using only the following operations:

sa: swap the top two elements of stack A
sb: swap the top two elements of stack B
ss: swap the top two elements of both stack A and stack B
pa: take the top element of stack B and push it onto stack A
pb: take the top element of stack A and push it onto stack B
ra: rotate stack A upwards (move the top element to the bottom of the stack)
rb: rotate stack B upwards (move the top element to the bottom of the stack)
rr: rotate both stack A and stack B upwards
rra: rotate stack A downwards (move the bottom element to the top of the stack)
rrb: rotate stack B downwards (move the bottom element to the top of the stack)
rrr: rotate both stack A and stack B downwards
The program is designed to minimize the number of operations required to sort the list of integers. It does this by using various sorting algorithms and techniques to efficiently rearrange the elements in the stacks. The program includes a visualizer tool that allows you to see the state of the stacks as the sorting algorithms are being applied.
