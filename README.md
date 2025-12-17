# **Summary**

This C program implements a simple stack data structure using an array and demonstrates basic stack operations. This program shows how a stack works using the Last In, First Out (LIFO) principle, where the last element added is the first one removed.

# Stack in C

A stack is a fundamental Last-In, First-Out (LIFO) data structure, meaning the last item added is the first one removed. The stack is a memory zone used to :

- call functions
- stock local variables
- keep the return

A stack frame is the stack zone reserved for a function while executing. When a function ends, this stack frame is destroyed.

ESP and EBP:

- ESP always points towards the summit of the stack, and changes at each push or pop.
- EBP is a fixed pointer that allows easy access to parameters and local variables. EBP points at the beginning of the stack frame.

## Example

myFunction(10);

- 10 value is pushed onto the stack.

Some common examples of stack include:

- Browser History: The "Back" button of any web browser works like a stack. Each page visited is pushed onto the stack. When the client clicks "Back", the most recent page is popped off.
- Undo/Redo Functionality : In applications like text editors, each action taken by the user is pushed onto the stack. Hitting "Undo" pops the last action from the stack to reverse it.

The core operations that define any stack are push (add to top), pop (remove from top), and peek (view top).

# Representing the stack

To represent the stack, a C struct is defined. This structure will bundle together all the necessary components:

# How the code works

A stack structure (s) is defined with:

- an integer top that keeps track of the index of the last inserted element
- an array items of fixed size (MAX = 10) to store the stack elements

Functions:

- The initialize function sets top to -1, which means the stack is empty.
- The isFull checks whether the stack has reached its maximum capacity.
- The isEmpty function checks whether the stack contains no elements.
- The push function adds a new element to the top of the stack. If the stack is full, it prints an error message. Otherwise, it increments top and stores the new value in the array.
- The pop function removes and returns the element at the top of the stack. If the stack is empty, it prints an error message and returns -1.
- The printStack function displays all elements currently in the stack, from bottom to top.
- The getStackLength function returns the number of elements in the stack.
- Main function:
  - A stack is created and initialized.
  - Three values (1, 4, 9) are pushed onto the stack.
  - Two values are popped from the stack.
  - The remaining contents of the stack are then printed.
