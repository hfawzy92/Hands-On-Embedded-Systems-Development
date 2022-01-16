**Q- There are two methods to initialize structure variables. State them.**
First method:
To initialize each member of the structure variable indvidually using dot/arrow operator.

Second method:
To use set notation (the values are written in ordered form with a comma separating the opening and closed curly braces).
For example:

Typedef struct _date {
    int day;
    int month;
    int year;
} Date;

Date birthday = {16 , 10 , 1992};

But this method won't be handy with complex data structures with pointers.

**Q- What is the size of the allocated memory for structre ?**
The allocated memory to the structure is at minimum the sum of the size of its individual fields.

However, the size is often larger than this sum because padding can occur between fields of a structure.

**Q-  Why padding occurs when memory is allocated to structre ?**
Structure padding is the step taken by the compiler to align the data at a memory offset.

Q- 